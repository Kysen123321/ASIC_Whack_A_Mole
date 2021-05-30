module digitdisp//����ܼƷ���ʾģ��
(clk,reset,bcd,segsig,bitsig);
	input clk;//50Mʱ��
	input reset;//ȫ�ָ�λ�ź�
	input [11:0] bcd;//������������ʾ�������
	output reg [7:0] segsig = 8'b0;//����ܶ�ѡ
	output reg [2:0] bitsig = 3'b0;//�����λѡ
	reg [31:0] counter;//32λ�ļ�����
	
	parameter ONEMS = 32'd50000;
	
	
	always@(posedge clk or negedge reset)
	begin
		if(!reset) begin
			segsig <= 8'd0;
			counter <= 32'd0;
			bitsig <= 4'b0000;	
			end
		else
		begin
			if(counter == ONEMS)//���ʱ��ﵽ1ms
			begin
				bitsig <= 3'b110;//ѡͨ3λ����ܣ�������ʾ����ʱ����λ�ķ���,0��ѡͨ
				counter <= counter + 32'd1;//�����ٽ��м�������һ������������������ֻ��ͣ���ڵ�һ�������������ʾ
				case(bcd[3:0])//��λ�����֣��õ���λ����ʾ0~9����������10�����ֵĶ���
					4'b0000:
								segsig <= 8'b1100_0000;
					4'b0001:
								segsig <= 8'b1111_1001;
					4'b0010:
								segsig <= 8'b1010_0100;
					
					4'b0011:
								segsig <= 8'b1011_0000;
					4'b0100:
								segsig <= 8'b1001_1001;
					4'b0101:
								segsig <= 8'b1001_0010;
					
					4'b0110:
								segsig <= 8'b1000_0010;
					4'b0111:
								segsig <= 8'b1111_1000;
					4'b1000:
								segsig <= 8'b1000_0000;
					4'b1001:
								segsig <= 8'b1001_0000;
				endcase
			end
			else if(counter == 2*ONEMS)//���ʱ��ﵽ2ms
					begin
						bitsig <= 3'b101;//ע��0��ѡͨ
						counter <= counter + 32'd1;//�����ٽ��м�������һ����������������
						case(bcd[7:4])//ʱλ�����֣��õ���λ����ʾ0~9����������10�����ֵĶ���
							4'b0000:
											segsig <= 8'b1100_0000;
							4'b0001:
											segsig <= 8'b1111_1001;
							4'b0010:
											segsig <= 8'b1010_0100;
							
							4'b0011:
											segsig <= 8'b1011_0000;
							4'b0100:
											segsig <= 8'b1001_1001;
							4'b0101:
											segsig <= 8'b1001_0010;
							
							4'b0110:
											segsig <= 8'b1000_0010;
							4'b0111:
											segsig <= 8'b1111_1000;
							4'b1000:
											segsig <= 8'b1000_0000;
							4'b1001:
											segsig <= 8'b1001_0000;							
						endcase
					end
			
			else if(counter == 3*ONEMS)//���ʱ��ﵽ3ms
					begin
						bitsig <= 3'b011;
						counter <= 32'b0;
						case(bcd[11:8])//��λ�����֣��õ���λ����ʾ0~9����������10�����ֵĶ���
							4'b0000:
										segsig <= 8'b1100_0000;
							4'b0001:
										segsig <= 8'b1111_1001;
							4'b0010:
										segsig <= 8'b1010_0100;
							4'b0011:
										segsig <= 8'b1011_0000;
							4'b0100:
										segsig <= 8'b1001_1001;
							4'b0101:
										segsig <= 8'b1001_0010;
							4'b0110:
										segsig <= 8'b1000_0010;
							4'b0111:
										segsig <= 8'b1111_1000;
							4'b1000:
										segsig <= 8'b1000_0000;
							4'b1001:
										segsig <= 8'b1001_0000;				
						endcase
					end
			else
				counter <= counter + 32'd1;
		end	
	end
	
	

		
endmodule
