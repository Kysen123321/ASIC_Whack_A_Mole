module top_game(clk,rst_n,dispL,key_in_y,key_out_x,segsig,bitsig,vga_out_r,vga_out_g,vga_out_b,vga_out_vs,vga_out_hs);
input clk;
input rst_n;
input [3:0] key_in_y;
output [3:0] key_out_x;
output [7:0] dispL;
output [7:0] segsig;
output [5:0] bitsig;
output [4:0] vga_out_r;
output [5:0] vga_out_g;
output [4:0] vga_out_b;
output vga_out_hs;
output vga_out_vs;
wire [2:0] LFSRout;
wire [5:0] score;
wire [7:0] button;

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
	
vga_driver vd(
	.clk(clk),
	.rst_n(rst_n),
	.led(dispL),
	.vga_out_r(vga_out_r),
	.vga_out_g(vga_out_g),
	.vga_out_b(vga_out_b),
	.vga_out_vs(vga_out_vs),
	.vga_out_hs(vga_out_hs)
	);

endmodule


