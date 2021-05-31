//======================================================
// Module name: key4x4_test.v
// ����: ��⿪�����ϵ��ĳ��ĵľ������K1~K164, ����⵽��������ʱ,��Ӧ��LED�Ʒ�ת
//======================================================
`timescale 1ns / 1ps
module key4x4  (
							clk,              // ������������ʱ��: 50Mhz
							rst_n,            // �������ϸ�λ����
							key_in_y,         // ���������̵����ź�(KEY0~KEY3)
							key_out_x,        // ���������̵����ź�(KEY4~KEY7)							
							led_out           // ���LED��,���ھ�����̰���16��LED(LED1~LED16)
						);

//========================================================
// PORT declarations
//========================================================						
input        clk; 
input        rst_n;
input  [3:0] key_in_y;
output reg [3:0] key_out_x;
output wire[7:0] led_out;

//�Ĵ�������
reg [19:0] count;

//==============================================
// ���������̵����źţ�20msɨ��������һ��,����Ƶ��С�ڰ���ë��Ƶ�ʣ��൱���˳����˸�Ƶë���źš�
//==============================================
always @(posedge clk or negedge rst_n)     //���ʱ�ӵ������غ͸�λ���½���
begin
   if(!rst_n) begin               //��λ�źŵ���Ч
      count <= 20'd0;        //��������0
      key_out_x <= 4'b1111;  
   end		
   else begin
	       if(count == 20'd0)           //0msɨ���һ�о������
            begin
               key_out_x <= 4'b1110;   //��ʼɨ���һ�о������,��һ�����0
					count <= count + 20'b1; //��������1
            end
         else if(count == 20'd249_999) //5msɨ��ڶ��о������,5ms����(50M/200-1=249_999)
            begin
               key_out_x <= 4'b1101;   //��ʼɨ��ڶ��о������,�ڶ������0
					count <= count + 20'b1; //��������1
            end				
			else if(count ==20'd499_999)   //10msɨ������о������,10ms����(50M/100-1=499_999)
            begin
               key_out_x <= 4'b1011;   //ɨ������о������,���������0
					count <= count + 20'b1; //��������1
            end	
			else if(count ==20'd749_999)   //15msɨ������о������,15ms����(50M/67.7-1=749_999)
            begin
               key_out_x <= 4'b0111;   //ɨ������о������,���������0
					count <= count + 20'b1; //��������1
            end				
         else if(count ==20'd999_999)  //20ms����(50M/50-1=999_999)
			   begin
               count <= 0;             //������Ϊ0
            end	
	      else
				count <= count + 20'b1;    //��������1
			
     end
end
//====================================================
// �����еİ����ź�
//====================================================
reg [3:0] key_h1_scan;    //��һ�а���ɨ��ֵKEY
reg [3:0] key_h1_scan_r;  //��һ�а���ɨ��ֵ�Ĵ���KEY
reg [3:0] key_h2_scan;    //�ڶ��а���ɨ��ֵKEY
reg [3:0] key_h2_scan_r;  //�ڶ��а���ɨ��ֵ�Ĵ���KEY
reg [3:0] key_h3_scan;    //�����а���ɨ��ֵKEY
reg [3:0] key_h3_scan_r;  //�����а���ɨ��ֵ�Ĵ���KEY
reg [3:0] key_h4_scan;    //�����а���ɨ��ֵKEY
reg [3:0] key_h4_scan_r;  //�����а���ɨ��ֵ�Ĵ���KEY
always @(posedge clk)
	begin
		if(!rst_n) begin               //��λ�źŵ���Ч
			key_h1_scan <= 4'b1111;     
			key_h2_scan <= 4'b1111;          
			key_h3_scan <= 4'b1111;          
			key_h4_scan <= 4'b1111;        
		end		
		else begin
		  if(count == 20'd124_999)           //2.5msɨ���һ�о������ֵ
			   key_h1_scan<=key_in_y;         //ɨ���һ�еľ������ֵ
		  else if(count == 20'd374_999)      //7.5msɨ��ڶ��о������ֵ
			   key_h2_scan<=key_in_y;         //ɨ��ڶ��еľ������ֵ
		  else if(count == 20'd624_999)      //12.5msɨ������о������ֵ
			   key_h3_scan<=key_in_y;         //ɨ������еľ������ֵ
		  else if(count == 20'd874_999)      //17.5msɨ������о������ֵ
			   key_h4_scan<=key_in_y;         //ɨ������еľ������ֵ 
		end
end

//====================================================
// �����ź�����һ��ʱ�ӽ���
//====================================================
always @(posedge clk)
   begin
		 key_h1_scan_r <= key_h1_scan;   	
		 key_h2_scan_r <= key_h2_scan; 
		 key_h3_scan_r <= key_h3_scan; 
		 key_h4_scan_r <= key_h4_scan;  
	end 
   
wire [3:0] flag_h1_key = key_h1_scan_r[3:0] & (~key_h1_scan[3:0]);  //����⵽�������½��ر仯ʱ������ð��������£�������Ч 
wire [3:0] flag_h2_key = key_h2_scan_r[3:0] & (~key_h2_scan[3:0]);  //����⵽�������½��ر仯ʱ������ð��������£�������Ч 
wire [3:0] flag_h3_key = key_h3_scan_r[3:0] & (~key_h3_scan[3:0]);  //����⵽�������½��ر仯ʱ������ð��������£�������Ч 
wire [3:0] flag_h4_key = key_h4_scan_r[3:0] & (~key_h4_scan[3:0]);  //����⵽�������½��ر仯ʱ������ð��������£�������Ч 

assign led_out={key_h2_scan_r,key_h1_scan_r};         
endmodule
