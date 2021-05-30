module top_digital(clk,reset,bin,segsig,bitsig);

input clk;//50Mʱ��
input reset;//ȫ�ָ�λ�ź�
input [5:0] bin;
output [7:0] segsig;//����ܶ�ѡ
output [2:0] bitsig;//�����λѡ
reg [31:0] counter;//32λ�ļ�����
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
