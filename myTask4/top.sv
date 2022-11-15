module top(
    input logic         clk,
    input logic         rst,
    input logic         fsm_trigger,
    output logic [7:0]  dout
);

    logic [6:0]         k;
    logic               time_out;
    logic               tick;
    logic               fsm_en;
    logic               cmd_delay;
    logic               cmd_seq;

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
);

mux2x2 multiplexer (
    .inputOne (tick),
    .inputZero (time_out),
    .selector (cmd_seq),
    .muxOut (fsm_en)
);

f1_fsm finiteStateMachine (
    .rst (rst),
    .en (fsm_en),
    .trigger (fsm_trigger),
    .clk (clk),
    .data_out (dout),
    .cmd_seq (cmd_seq),
    .cmd_delay (cmd_delay)
);
    
endmodule
