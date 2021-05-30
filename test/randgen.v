module LFSR 
  (
   input i_Clk,
   output reg [2:0] o_LFSR_Data
   );

  reg [6:1] r_LFSR = 0;
  reg r_XNOR;
  //reg [2:0] last_o;
  //reg i_Seed_DV;


  always @(posedge i_Clk)
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
		o_LFSR_Data = r_LFSR[3:1];
		//if (o_LFSR_Data == last_o)
			//o_LFSR_Data = o_LFSR_Data + 1'b1;
		//last_o = o_LFSR_Data;
	end




endmodule // LFSR
