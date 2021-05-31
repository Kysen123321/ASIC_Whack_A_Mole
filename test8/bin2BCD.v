module bin2BCD(clk,rst_n,bin,bcd);
input [5:0] bin;
input clk;
input rst_n;
output reg[11:0]bcd;
reg [3:0] hundreds = 4'b0, tens = 4'b0, ones = 4'b0;
reg [2:0] counter = 3'd5;

always@(posedge clk or negedge rst_n) begin
	if(!rst_n)
		bcd = 31'b0;
	else begin
		if (hundreds >= 5)
		hundreds = hundreds + 3;
		if (tens >= 5)
		tens = tens + 3;
		if (ones >= 5)
		ones = ones + 3;

		hundreds = hundreds << 1;
		hundreds[0] = tens[3];
		tens = tens << 1;
		tens[0] = ones[3];
		ones = ones << 1;
		ones[0] = bin[counter];
		if(counter == 3'b0) begin
			bcd = {hundreds[3:0], tens[3:0], ones[3:0]};
			counter = 3'd6;
			hundreds = 4'd0;
			tens = 4'd0;
			ones = 4'd0;
		end
		counter = counter - 1'b1;
	end

end

endmodule
