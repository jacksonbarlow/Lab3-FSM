module lsfr (
    input logic         rst,
    input logic         en,
    input logic         clk,
    input logic         dout
);

always_ff @ (posedge clk, posedge rst)
    if (rst)
        sreg <= 4'b1;
    else if (en)
        sreg <= {sreg[3:1], sreg[4] ^ sreg[3]};

assign dout = sreg;
endmodule
