module top(
    input logic         clk,
    input logic         rst,
    input logic         fsm_trigger,
    output logic [7:0]  dout,
    output logic [6:0]  readRand
);

    logic [6:0]         k;
    logic               time_out;
    logic               tick;
    logic               fsm_en;
    logic               cmd_delay;
    logic               cmd_seq;

lfsr randomNumberGenerator (
    .clk (clk),
    .rst (rst),
    .en (1'b1),
    .dout (k)
);

delay timeSignal (
    .clk (clk),
    .rst (rst),
    .trigger (cmd_delay),
    .k (k),
    .time_out (time_out)
    //.countTest (readRand)
);

clktick tickGenerator (
    .clk (clk),
    .N (5'd28),
    .en (cmd_seq),
    .rst (rst),
    .tick (tick)
);

//mux2x2 multiplexer (
//    .inputOne (tick),
//    .inputZero (time_out),
//    .selector (cmd_seq),
//    .muxOut (fsm_en)
//);

f1_fsm finiteStateMachine (
    .rst (rst),
    .tick (tick),
    .timeOut (time_out),
    .trigger (fsm_trigger),
    .clk (clk),
    .data_out (dout),
    .cmd_seq (cmd_seq),
    .cmd_delay (cmd_delay)
);

always_comb
    if(cmd_seq == 0) fsm_en = time_out;
    else fsm_en = tick;
    
endmodule
