`timescale 1ns / 100ps  
  
`define N_BITS 6  
module tb_lfsr;  
  
    reg i_Clk;  
    //reg i_Enable;  
    reg [7:0] button;
    // Optional Seed Value  
    reg i_Seed_DV;  
    reg [5:0] i_Seed_Data;  
    reg reset;
	 //wire start;
	 wire [7:0] dispL;
	 //wire [5:0] score;
	 //wire [11:0] bcd;
	 wire [2:0] bitsig;
	 wire [7:0] segsig;
      
    top_rand  tr( .clk(i_Clk),  
          //.i_Enable(i_Enable), 
			 .reset(reset),
          .dispL(dispL),
			 .button(button),
			 //.score(score),
			 .bitsig(bitsig),
			 .segsig(segsig)
			 //.start(start)
			 );  
			 
      
    always #10 i_Clk = ~i_Clk;  
      
    initial begin  
        i_Clk = 0;  
        //i_Enable = 0;  
        i_Seed_DV = 0;  
        i_Seed_Data = 0;  
        reset = 1;  
		  button = 8'b0;
        #10;  
        //i_Enable = 1;  
		  reset = 0;
		  #10;
		  reset = 1;
    end  
      
endmodule
