module LEDdisp(button,number,displayL,reset,clk,score);
parameter TWOS = 34'd100000000;
input clk;
input [3:0] button;
input [2:0] number;
input reset;
reg [33:0] counter = 34'b0;
reg [1:0] state = 2'b0;
reg start = 0;
reg flag = 1'b0;
reg flagreg;
reg [3:0] numreg;
reg [3:0] dispreg;
output reg [3:0] displayL = 8'b0;
output reg [5:0] score = 6'b0;

  always@ (negedge reset)
      start <= ~start;
  always@(posedge clk or negedge reset) begin
  		if(!reset) begin
			 displayL <= 8'b0;
			 counter <= 34'b0;
			 score <= 6'b0;
	   end
		
		else begin
		if(start == 1) begin
				numreg = number;
				if(counter == TWOS)
					state <= 2'b01;
				else if(counter == 25*TWOS)
					state <= 2'b10;
				else if (counter == 41*TWOS)
					state <= 2'b11;
				if(counter < TWOS)
					displayL <= 4'b0000;
				else if(counter == TWOS || counter == 4*TWOS || counter == 7*TWOS || counter == 10*TWOS || 
					counter == 13*TWOS || counter == 16*TWOS || counter == 19*TWOS || counter == 22*TWOS ||
					counter == 25*TWOS || counter == 27*TWOS || counter == 29*TWOS || counter == 31*TWOS ||
					counter == 33*TWOS || counter == 35*TWOS || counter == 37*TWOS || counter == 39*TWOS ||
					counter == 41*TWOS || counter == 42*TWOS || counter == 43*TWOS || counter == 44*TWOS ||
					counter == 45*TWOS || counter == 46*TWOS || counter == 47*TWOS || counter == 48*TWOS
					)
				begin
				  flag <= 1'b1;
				  case(numreg)
				  3'b000: begin
					 displayL <= 4'b0001;
				  end
				  
				  3'b001: begin
					 displayL <= 4'b0010;
				  end

				  3'b010: begin
					 displayL <= 4'b0100;
				  end

				  3'b011: begin
					 displayL <= 4'b1000;
				  end

				  3'b100: begin
					 displayL <= 4'b0001;
				  end

				  3'b101: begin
					 displayL <= 4'b0010;
				  end

				  3'b110: begin
					 displayL <= 4'b0100;
				  end

				  3'b111: begin
					 displayL <= 4'b1000;
				  end

				  endcase
				  
				  end
				  
				if(counter == 49*TWOS) begin
				  displayL <= 4'b0000;
				end
				flagreg = flag;
				dispreg = displayL;
				if(button == ~dispreg && flagreg == 1'b1 && button != 4'b1111) begin
					score <= score + state;
					displayL <= 4'b0;
					flag <= 1'b0;
				end
				else if(button != ~dispreg && flagreg == 1'b1 && button != 4'b1111) begin
					displayL <= 4'b0;
					flag <= 1'b0;
				end
				counter <= counter + 1'b1;
			end
		
		end

  end 
  



endmodule
