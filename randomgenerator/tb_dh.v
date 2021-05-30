`timescale 1ns / 100ps  
 
module tb_dh;  
  
    reg clk;   
    wire new_clk;
	 reg reset;
      
    clock_halfhz dh(
		.clk(clk),
		.reset(reset),
		.new_clk(new_clk)
	 );
			 
      
    always #10 clk = ~clk;  
      
    initial begin  
        clk = 0;  
		  reset = 1;
		  #10;
		  reset = 0;
    end  
      
endmodule