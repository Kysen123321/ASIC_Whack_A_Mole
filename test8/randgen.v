module LFSR 
  (
   input clk,
   output reg [2:0] LFSRout
   );

  reg [6:1] r_LFSR = 0;
  reg r_XNOR;
  //reg [2:0] last_o;
  //reg i_Seed_DV;


  always @(posedge clk)
    begin
          //if (i_Seed_DV == 1'b1)
				//begin
					//r_LFSR = 6'b000000;
					//i_Seed_DV = 0;
				//end
          //else
            r_LFSR = {r_LFSR[5:1], r_XNOR};
    end



  always @(*)	
		r_XNOR <= r_LFSR[6] ^~ r_LFSR[5];  
  
  always @(*)
  begin
		LFSRout = r_LFSR[3:1];
		//if (LFSRout == last_o)
			//LFSRout = LFSRout + 1'b1;
		//last_o = LFSRout;
	end




endmodule // LFSR
