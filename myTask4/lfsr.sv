module lfsr(
    input logic         clk,
    output logic [6:0]  K
);

    logic [6:0]         sreg = 7'b1

always_ff @(posedge clk)
    sreg <= {sreg[6:1], sreg[6] ^ sreg[3]};

endmodule