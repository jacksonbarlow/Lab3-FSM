module lsfr #(
    parameter DATA_WIDTH = 4
)(
    input logic         rst,
    input logic         en,
    input logic         clk,
    input logic         dout
);

    logic [4:1]         sreg;

    always_ff @ (posedge clk)
        if (rst)
            sreg <= 4'b0001;
        else if (en) begin
            sreg[4] <= sreg[3];
            sreg[3] <= sreg[2];
            sreg[2] <= sreg[1];
            sreg[1] <= sreg[3] xor sreg[4];
        end
    begin
        assign dout[3] <= sreg[4];
        assign dout[2] <= sreg[3];
        assign dout[1] <= sreg[2];
        assign dout[0] <= sreg[1];
    end

endmodule
