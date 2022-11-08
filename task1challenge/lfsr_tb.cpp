#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vlfsr* top = new Vlfsr;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lfsr.vcd");

    // init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("LAB3: TASK1");
    vbdSetMode(1);

    // init sim inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run sim for many clock cycles
    for(simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        // dump vars into vcd file and toggle clock
        for (tick=0; tick<2; tick++) {
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }

        // change sim inputs
        top->en = vbdFlag();
        if(simcyc < 2)
            top->rst = 1;
        else
            top->rst = 0;
        
        vbdHex(2, (int(top->dout) >> 4) & 0xF);
        vbdHex(1, int(top->dout) & 0xF);
        

        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
            exit(0);
    }

    vbdClose();
    tfp->close();
    printf("Exiting\n");
    exit(0);
}