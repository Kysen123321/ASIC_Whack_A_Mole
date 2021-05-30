module clock_halfhz(input clk, reset, output reg new_clk);

reg [25:0] counter = 26'b0;

always @ (posedge clk or posedge reset) 
begin
    if (reset) 
	 begin
        new_clk <= 1'b0;
        counter <= 26'b0;      
    end 
	 else 
        if (counter == 26'd500000) 
		  begin
            new_clk <= ~new_clk;
            counter <= 26'b0;
        end 
		  else 
		  begin
            counter <= counter + 1'b1;
        end

 end

endmodule
