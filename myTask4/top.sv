module top(
    input logic         clk,
    input logic         rst,
    input logic         cmd_delay,
    input logic         cmd_seq,
    input logic         trigger
);

    logic [6:0]         k;
    logic               time_out;
    logic               tick;
    logic               fsm_en;

lfsr randomNumberGenerator (
    .clk (clk),
    .K (k)
);

delay timeSignal (
    .clk (clk),
    .rst (rst),
    .trigger (cmd_delay),
    .k (k),
    .time_out (time_out)
);

clktick tickGenerator (
    .clk (clk),
    .N (6'd28),
    .en (cmd_seq),
    .rst (rst),
    .tick (tick)
)

mux multiplexer (
    .inputOne (tick),
    .inputZero (time_out),
    .selector (cmd_seq),
    .muxOut (fsm_en)
);
    
endmodule