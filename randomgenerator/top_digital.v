module top_digital(clk,reset,bin,segsig,bitsig);

input clk;//50M时钟
input reset;//全局复位信号
input [5:0] bin;
output [7:0] segsig;//数码管段选
output [2:0] bitsig;//数码管位选
reg [31:0] counter;//32位的计数器
wire [11:0] bcd;

bin2BCD btb(
	.clk(clk),
	.reset(reset),
	.bin(bin),
	.bcd(bcd)
	);
digitdisp dd(
	.clk(clk),
	.reset(reset),
	.bcd(bcd),
	.segsig(segsig),
	.bitsig(bitsig)
	);
endmodule
