module vga_driver
(
    input                   clk   , // ϵͳ50MHzʱ��
    input                   rst_n , // ϵͳ��λ
    output   reg   [4:0]    vga_out_r   , // VGA��ɫ����
    output   reg   [5:0]    vga_out_g , // VGA��ɫ����
    output   reg   [4:0]    vga_out_b  , // VGA��ɫ����
    output                  vga_out_hs    , // VGA��ͬ���ź�
    output                  vga_out_vs      // VGA��ͬ���ź�
);

// �ֱ���Ϊ640*480ʱ��ʱ�������������
parameter       C_H_SYNC_PULSE      =   96  , 
                C_H_BACK_PORCH      =   48  ,
                C_H_ACTIVE_TIME     =   640 ,
                C_H_FRONT_PORCH     =   16  ,
                C_H_LINE_PERIOD     =   800 ;

// �ֱ���Ϊ640*480ʱ��ʱ�������������               
parameter       C_V_SYNC_PULSE      =   2   , 
                C_V_BACK_PORCH      =   33  ,
                C_V_ACTIVE_TIME     =   480 ,
                C_V_FRONT_PORCH     =   10  ,
                C_V_FRAME_PERIOD    =   525 ;

parameter       C_IMAGE_WIDTH       =   128     ,
                C_IMAGE_HEIGHT      =   128     ,
                C_IMAGE_PIX_NUM     =   16384   ;                

reg     [11:0]      R_h_cnt         ; // ��ʱ�������
reg     [11:0]      R_v_cnt         ; // ��ʱ�������
reg                 R_clk_25M       ; // 25MHz������ʱ��
reg     [13:0]      R_rom_addr      ; // ROM�ĵ�ַ
reg [11:0] x_offset = 12'd2000;
reg [11:0] y_offset = 12'd0;
wire    [15:0]      W_rom_data      ; // ROM�д洢������

wire            W_active_flag   ; // �����־��������ź�Ϊ1ʱRGB�����ݿ�����ʾ����Ļ��

//////////////////////////////////////////////////////////////////
//���ܣ� ����25MHz������ʱ��
//////////////////////////////////////////////////////////////////
always @(posedge clk or negedge rst_n)
begin
    if(!rst_n)
        R_clk_25M   <=  1'b0        ;
    else
        R_clk_25M   <=  ~R_clk_25M  ;     
end
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
// ���ܣ�������ʱ��
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
// ���ܣ�������ʱ��
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

// ������Ч�����־��������ź�Ϊ��ʱ��RGB�͵����ݲŻ���ʾ����Ļ��
assign W_active_flag =  (R_h_cnt >= (C_H_SYNC_PULSE + C_H_BACK_PORCH                     ))  &&
                        (R_h_cnt <= (C_H_SYNC_PULSE + C_H_BACK_PORCH + C_H_ACTIVE_TIME     ))  && 
                        (R_v_cnt >= (C_V_SYNC_PULSE + C_V_BACK_PORCH                    ))  &&
                        (R_v_cnt <= (C_V_SYNC_PULSE + C_V_BACK_PORCH + C_V_ACTIVE_TIME     ))  ;                     

//////////////////////////////////////////////////////////////////
// ���ܣ���ROM�����ͼƬ�������
//////////////////////////////////////////////////////////////////
always @(posedge R_clk_25M or negedge rst_n)
begin
    if(!rst_n) 
        R_rom_addr  <=  14'd0 ;
    else if(W_active_flag)     
        begin
            if(R_h_cnt >= (C_H_SYNC_PULSE + C_H_BACK_PORCH + x_offset) && 
               R_h_cnt <= (C_H_SYNC_PULSE + C_H_BACK_PORCH + C_IMAGE_WIDTH  - 1'b1 + x_offset) &&
               R_v_cnt >= (C_V_SYNC_PULSE + C_V_BACK_PORCH + y_offset) && 
               R_v_cnt <= (C_V_SYNC_PULSE + C_V_BACK_PORCH + C_IMAGE_HEIGHT - 1'b1 + y_offset))
                begin
                    vga_out_r       <= W_rom_data[15:11]    ; // ��ɫ����
                    vga_out_g     <= W_rom_data[10:5]     ; // ��ɫ����
                    vga_out_b      <= W_rom_data[4:0]      ; // ��ɫ����
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

pic U_pic (
  .clka(R_clk_25M), // input clka
  .addra(R_rom_addr), // input [13 : 0] addra
  .douta(W_rom_data) // output [15 : 0] douta
);

endmodule