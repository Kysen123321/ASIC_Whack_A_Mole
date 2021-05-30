`timescale 1ns / 100ps  
 
module tb_b2b;  
    wire [7:0] segsig;
	 wire [2:0] bitsig;
    reg clk;   
    //wire [11:0] bcd;
	 reg [5:0] score;
	 reg reset;
      
   top_digital td(
		.clk(clk),
		.reset(reset),
		.bin(score),
		.segsig(segsig),
		.bitsig(bitsig)
		//.bcd(bcd)
	 );
//	bin2BCD bb(
//		.clk(clk),
	//	.reset(reset),
	//	.bcd(bcd),
	//	.bin(score)
	//	);
			 
      
    always #10 clk = ~clk;  
      
    initial begin  
        clk = 0;
		  score = 6'b0;
		  reset = 1;
		  #10;
		  reset = 0;
		  #10;
		  reset = 1;
		  #50;
		  score = 6'd5;
		  #100000;
		  score = 6'd9;
		  #100000;
		  score = 6'd10;
		  #100000;
		  score = 6'd15;
		  #100000;
		  score = 6'd21;
		  		  #10000;
		  score = 6'd33;
		  		  #10000;
		  score = 6'd37;
		  		  #10000;
		  score = 6'd48;
		  
    end  
      
endmodule
