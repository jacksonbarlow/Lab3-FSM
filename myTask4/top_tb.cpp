#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "vbuddy.cpp"
#include <string>

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;
    int waitForSig = 0;
    int time;
    std::string tempTime;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vtop* top = new Vtop;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("L3T4");
    
    // init sim inputs
    top->clk = 1;
    top->rst = 1;
    top->fsm_trigger = 0;

    // run sim for many clock cycles
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        // dump vars into vcd file and toggle clk
        for (tick=0; tick<2; tick++) {
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }
        
        // change sim inputs
        if (waitForSig == 0){
            top->fsm_trigger = vbdFlag();
            top->rst = (simcyc < 2);
            vbdCycle(simcyc);
            vbdBar(top->dout & 0xFF);
        } else if (vbdFlag()) {
            time = vbdElapsed();
            tempTime = std::to_string(time);
            waitForSig = 2;
        } else {
            vbdHeader(tempTime.c_str());
        }


        if ((top->dout & 0xFF) == 0) {
            vbdInitWatch();
            waitForSig = 1;
        }

        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) exit(0);
    }

    vbdClose();
    tfp->close();
    printf("Exiting\n");
    exit(0);
}