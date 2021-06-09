module vga_driver
(
    input                   clk   , // 系统50MHz时钟
    input                   rst_n , // 系统复位
	 input [7:0] led,
    output   reg   [4:0]    vga_out_r   , // VGA红色分量
    output   reg   [5:0]    vga_out_g , // VGA绿色分量
    output   reg   [4:0]    vga_out_b  , // VGA蓝色分量
    output                  vga_out_hs    , // VGA行同步信号
    output                  vga_out_vs      // VGA场同步信号
);

// 分辨率为640*480时行时序各个参数定义
parameter       C_H_SYNC_PULSE      =   96  , 
                C_H_BACK_PORCH      =   48  ,
                C_H_ACTIVE_TIME     =   640 ,
                C_H_FRONT_PORCH     =   16  ,
                C_H_LINE_PERIOD     =   800 ;

// 分辨率为640*480时场时序各个参数定义               
parameter       C_V_SYNC_PULSE      =   2   , 
                C_V_BACK_PORCH      =   33  ,
                C_V_ACTIVE_TIME     =   480 ,
                C_V_FRONT_PORCH     =   10  ,
                C_V_FRAME_PERIOD    =   525 ;

parameter       C_IMAGE_WIDTH       =   128     ,
                C_IMAGE_HEIGHT      =   128     ,
                C_IMAGE_PIX_NUM     =   16384   ;                

reg     [11:0]      R_h_cnt         ; // 行时序计数器
reg     [11:0]      R_v_cnt         ; // 列时序计数器
reg                 R_clk_25M       ; // 25MHz的像素时钟
reg     [13:0]      R_rom_addr      ; // ROM的地址
reg [11:0] x_offset = 12'b0;
reg [11:0] y_offset = 12'b0;
wire    [15:0]      W_rom_data      ; // ROM中存储的数据
wire            W_active_flag   ; // 激活标志，当这个信号为1时RGB的数据可以显示在屏幕上
reg                 R_vs_reg1       ;
reg                 R_vs_reg2       ;
wire                W_vs_neg        ; // 场脉冲下降沿标志
//////////////////////////////////////////////////////////////////
//功能： 产生25MHz的像素时钟
//////////////////////////////////////////////////////////////////
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n) begin
        R_clk_25M   <=  1'b0        ;
	 end
    else begin
        R_clk_25M   <=  ~R_clk_25M  ; 

    end
end



//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
// 功能：产生行时序
//////////////////////////////////////////////////////////////////
always @(posedge R_clk_25M or negedge rst_n)
begin
    if(!rst_n)
        R_h_cnt <=  12'd0   ;
    else if(R_h_cnt == C_H_LINE_PERIOD - 1'b1)
        R_h_cnt <=  12'd0   ;
    else
        R_h_cnt <=  R_h_cnt + 1'b1  ;                
end                

assign vga_out_hs =   (R_h_cnt < C_H_SYNC_PULSE) ? 1'b0 : 1'b1    ; 
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
// 功能：产生场时序
//////////////////////////////////////////////////////////////////
always @(posedge R_clk_25M or negedge rst_n)
begin
    if(!rst_n)
        R_v_cnt <=  12'd0   ;
    else if(R_v_cnt == C_V_FRAME_PERIOD - 1'b1)
        R_v_cnt <=  12'd0   ;
    else if(R_h_cnt == C_H_LINE_PERIOD - 1'b1)
        R_v_cnt <=  R_v_cnt + 1'b1  ;
    else
        R_v_cnt <=  R_v_cnt ;                        
end                

assign vga_out_vs =   (R_v_cnt < C_V_SYNC_PULSE) ? 1'b0 : 1'b1    ; 
//////////////////////////////////////////////////////////////////  

// 产生有效区域标志，当这个信号为高时往RGB送的数据才会显示到屏幕上
assign W_active_flag =  (R_h_cnt >= (C_H_SYNC_PULSE + C_H_BACK_PORCH                     ))  &&
                        (R_h_cnt <= (C_H_SYNC_PULSE + C_H_BACK_PORCH + C_H_ACTIVE_TIME     ))  && 
                        (R_v_cnt >= (C_V_SYNC_PULSE + C_V_BACK_PORCH                    ))  &&
                        (R_v_cnt <= (C_V_SYNC_PULSE + C_V_BACK_PORCH + C_V_ACTIVE_TIME     ))  ;                     

//////////////////////////////////////////////////////////////////
// 功能：把ROM里面的图片数据输出
//////////////////////////////////////////////////////////////////
always @(posedge R_clk_25M or negedge rst_n)
begin
    if(!rst_n) 
        R_rom_addr  <=  14'd0 ;
    else begin

	 if(W_active_flag)     
        begin
            if(R_h_cnt >= (C_H_SYNC_PULSE + C_H_BACK_PORCH + x_offset) && 
               R_h_cnt <= (C_H_SYNC_PULSE + C_H_BACK_PORCH + C_IMAGE_WIDTH  - 1'b1 + x_offset) &&
               R_v_cnt >= (C_V_SYNC_PULSE + C_V_BACK_PORCH + y_offset) && 
               R_v_cnt <= (C_V_SYNC_PULSE + C_V_BACK_PORCH + C_IMAGE_HEIGHT - 1'b1 + y_offset))
                begin

                    vga_out_r       <= W_rom_data[15:11]    ; // 红色分量
                    vga_out_g     <= W_rom_data[10:5]     ; // 绿色分量
                    vga_out_b      <= W_rom_data[4:0]      ; // 蓝色分量
                    if(R_rom_addr == C_IMAGE_PIX_NUM - 1'b1)
                        R_rom_addr  <=  14'd0 ;
                    else
                        R_rom_addr  <=  R_rom_addr  +  1'b1 ;        
                end
            else
                begin
                    vga_out_r       <=  5'd0        ;
                    vga_out_g     <=  6'd0        ;
                    vga_out_b      <=  5'd0        ;
                    R_rom_addr  <=  R_rom_addr  ;
                end                          
        end
    else
        begin
            vga_out_r       <=  5'd0        ;
            vga_out_g     <=  6'd0        ;
            vga_out_b      <=  5'd0        ;
            R_rom_addr  <=  R_rom_addr  ;
        end 
	end
end
//////////////////////////////////////////////////////////////////
// 功能：产生场脉冲的下降沿标志，在这个标志用来修改R_h_pos和R_v_pos
//       两个参数，从而改变图片的位置
//////////////////////////////////////////////////////////////////
always @(posedge R_clk_25M or negedge rst_n)
begin
    if(!rst_n)
        begin
            R_vs_reg1   <=  1'b0        ;
            R_vs_reg2   <=  1'b0        ;
        end
    else
        begin
            R_vs_reg1   <=  vga_out_vs;        ;
            R_vs_reg2   <=  R_vs_reg1   ;
        end         
end

assign W_vs_neg = ~R_vs_reg1 & R_vs_reg2 ;

always@(posedge R_clk_25M or negedge rst_n)
begin
    if(!rst_n)
        begin
            x_offset <=  12'd0   ;
            y_offset <=  12'd0   ; 
        end
    else if(W_vs_neg)    
        begin 
           case(led)	
				8'b00000001:begin
				x_offset <= 12'd0;
				y_offset <= 12'd128;
			
				end
				8'b00000010:begin
				x_offset <= 12'd129;
				y_offset <= 12'd128;
			
				end
				8'b00000100:begin
				x_offset <= 12'd258;
				y_offset <= 12'd128;
			
				end
				8'b00001000:begin
				x_offset <= 12'd387;
				y_offset <= 12'd128;
			
				end
				8'b00010000:begin
				x_offset <= 12'd0;
				y_offset <= 12'd257;
			
				end
				8'b00100000:begin
				x_offset <= 12'd129;
				y_offset <= 12'd257;
			
				end
				8'b01000000:begin
				x_offset <= 12'd258;
				y_offset <= 12'd257;
			
				end
				8'b10000000:begin
				x_offset <= 12'd387;
				y_offset <= 12'd257;
			
				end
				8'b00000000:begin
				x_offset <= 12'd1024;
				y_offset <= 12'd0;

				end
		endcase
     end
end      


pic U_pic (
  .clka(R_clk_25M), // input clka
  .addra(R_rom_addr), // input [13 : 0] addra
  .douta(W_rom_data) // output [15 : 0] douta
);

endmodule
