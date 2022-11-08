module lfsr #()(
    input logic         rst,
    input logic         en,
    input logic         clk,
    output logic [8:1]  dout
);

logic [8:1]         sreg;

always_ff @ (posedge clk, posedge rst)
    if (rst)
        sreg <= 8'b1;
    else if (en)
        sreg <= {sreg[7:1], sreg[7] ^ sreg[3]};

assign dout = sreg;

endmodule
