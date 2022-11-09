module mux(
    input logic         inputOne,
    input logic         inputZero,
    input logic         selector,
    output logic        muxOut
);

always_comb
    if (selector == 1'b1) muxOut = inputOne;
    else muxOut = inputZero;

endmodule