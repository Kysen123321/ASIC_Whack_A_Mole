module top_game(clk,rst_n,dispL,key_in_y,key_out_x,segsig,bitsig);
input clk;
input rst_n;
input [3:0] key_in_y;
output [3:0] key_out_x;
output [7:0] dispL;
output [7:0] segsig;
output [5:0] bitsig;
wire [2:0] LFSRout;
//wire new_clk;
wire [5:0] score;
//output start;
wire [7:0] button;
//wire rst_n;

LFSR rn(
	.clk(clk),
	.LFSRout(LFSRout)
	);

key4x4 kb(
	.clk(clk),
	.rst_n(rst_n),
	.key_in_y(key_in_y),
	.key_out_x(key_out_x),
	.ctrl_out(button)
	//.rst_out(rst_n)
	);

LEDdisp ld(
	.number(LFSRout),
	.displayL(dispL),
	.rst_n(rst_n),
	.clk(clk),
	.button(button),
	.score(score)
	);
	
top_digital td(
		.clk(clk),
		.rst_n(rst_n),
		.bin(score),
		.segsig(segsig),
		.bitsig(bitsig)
	);

endmodule


