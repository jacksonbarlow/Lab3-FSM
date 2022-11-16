module lfsr #()(
    input logic         rst,
    input logic         en,
    input logic         clk,
    output logic [7:1]  dout
);

logic [7:1]         sreg;

always_ff @ (posedge clk, posedge rst)
    if (rst)
        sreg <= 6'b1;
    else if (en)
        sreg <= {sreg[6:1], sreg[1] ^ sreg[6]};

assign dout = sreg;

endmodule
