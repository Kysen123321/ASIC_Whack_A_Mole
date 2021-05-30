module top_game(clk,reset,dispL,button,segsig,bitsig);
input clk;
input reset;
//input i_Enable;
output [7:0] dispL;
wire [5:0] score;
output [7:0] segsig;
output [5:0] bitsig;
wire [2:0] LFSRout;
wire new_clk;
//output start;
input [7:0] button;

LFSR rn(
	.i_Clk(clk),
	//.i_Enable(i_Enable),
	.o_LFSR_Data(LFSRout)
	);

reg [2:0] number;
always @(*)
  number	= LFSRout;
LEDdisp ld(
	.number(number),
	.displayL(dispL),
	.reset(reset),
	.clk(clk),
	.button(button),
	.score(score)
	);
top_digital td(
		.clk(clk),
		.reset(reset),
		.bin(score),
		.segsig(segsig),
		.bitsig(bitsig)
	);

endmodule


