`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:39 05/27/2021 
// Design Name: 
// Module Name:    top_rand 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top_rand(clk,reset,dispL,button,segsig,bitsig);
input clk;
input reset;
//input i_Enable;
output [7:0] dispL;
wire [5:0] score;
output [7:0] segsig;
output [2:0] bitsig;
wire [2:0] o_LFSR_Data;
wire new_clk;
//output start;
input [7:0] button;

LFSR rn(
	.i_Clk(clk),
	//.i_Enable(i_Enable),
	.o_LFSR_Data(o_LFSR_Data)
	);
//clock_halfhz dh(
//	.clk(clk),
//	.reset(reset),
//	.new_clk(new_clk)
//	);
LEDdisp ld(
	.number(o_LFSR_Data),
	.displayL(dispL),
	.reset(reset),
	.clk(clk),
	.button(button),
	.score(score)
//	.start(start)
	);
top_digital td(
		.clk(clk),
		.reset(reset),
		.bin(score),
		.segsig(segsig),
		.bitsig(bitsig)
	);

endmodule


