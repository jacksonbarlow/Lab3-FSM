#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;
    int waitForSig = 0;
    int time = 0;
    std::string tempTime;

    Verilated::commandArgs(argc, argv);

    Vtop* top = new Vtop;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    if(vbdOpen()!=1) return(-1);
    vbdHeader("L3T4");
    
    top->clk = 1;
    top->rst = 1;
    top->fsm_trigger = 0;

    for(simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        for(tick = 0; tick<2; tick++){
            tfp->dump(2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }
/*
        if(waitForSig == 1 && vbdFlag()) {
            waitForSig = 0;
            time = vbdElapsed();
            tempTime = std::to_string(time);
            vbdHeader(tempTime.c_str());
        }
*/
        if (simcyc > 0){
            top->rst = 0;
        }
        top->fsm_trigger = vbdFlag();
        vbdCycle(simcyc);

        //vbdPlot(top->readRand, 0, 128);

        vbdBar(top->dout & 0xFF);
/*
        if(top->dout == 0) {
            vbdInitWatch();
            waitForSig = 1;
        }
        */



        if ((Verilated::gotFinish()) || (vbdGetkey() == 'q')) exit(0);
    }

    vbdClose();
    tfp->close();
    printf("Exiting\n");
    exit(0);
}