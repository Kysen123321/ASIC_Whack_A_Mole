module digitdisp//数码管计分显示模块
(clk,reset,bcd,segsig,bitsig);
	input clk;//50M时钟
	input reset;//全局复位信号
	input [11:0] bcd;//分数，用来显示在数码管
	output reg [7:0] segsig = 8'b0;//数码管段选
	output reg [2:0] bitsig = 3'b0;//数码管位选
	reg [31:0] counter;//32位的计数器
	
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
			if(counter == ONEMS)//如果时间达到1ms
			begin
				bitsig <= 3'b110;//选通3位数码管，用来显示个、时、百位的分数,0是选通
				counter <= counter + 32'd1;//这里再进行计数器加一，否则不能正常计数，只会停留在第一个数码管这里显示
				case(bcd[3:0])//个位的数字，用低四位来显示0~9，下面是这10个数字的段码
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
			else if(counter == 2*ONEMS)//如果时间达到2ms
					begin
						bitsig <= 3'b101;//注意0是选通
						counter <= counter + 32'd1;//这里再进行计数器加一，否则不能正常计数
						case(bcd[7:4])//时位的数字，用低四位来显示0~9，下面是这10个数字的段码
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
			
			else if(counter == 3*ONEMS)//如果时间达到3ms
					begin
						bitsig <= 3'b011;
						counter <= 32'b0;
						case(bcd[11:8])//百位的数字，用低四位来显示0~9，下面是这10个数字的段码
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
