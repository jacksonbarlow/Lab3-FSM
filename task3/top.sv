module top(
    input logic             rst,
    input logic             clk,
    input logic             en,
    input logic [15:0]      n,
    output logic [7:0]      dout
);

    logic                   clktickout;

clktick clktickIn (
    .N (n),
    .en (en),
    .rst (rst),
    .clk (clk),
    .tick (clktickout)
);

f1_fsm finiteMachine (
    .rst (rst),
    .en (clktickout),
    .clk (clk),
    .data_out (dout)
);

endmodule
