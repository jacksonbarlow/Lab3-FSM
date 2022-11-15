// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(fsm_trigger,0,0);
    VL_OUT8(dout,7,0);
    CData/*6:0*/ top__DOT__k;
    CData/*0:0*/ top__DOT__tick;
    CData/*0:0*/ top__DOT__fsm_en;
    CData/*0:0*/ top__DOT__cmd_delay;
    CData/*0:0*/ top__DOT__cmd_seq;
    CData/*6:0*/ top__DOT__randomNumberGenerator__DOT__sreg;
    CData/*6:0*/ top__DOT__timeSignal__DOT__count;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ top__DOT__tickGenerator__DOT__count;
    IData/*31:0*/ top__DOT__timeSignal__DOT__current_state;
    IData/*31:0*/ top__DOT__timeSignal__DOT__next_state;
    IData/*31:0*/ top__DOT__finiteStateMachine__DOT__current_state;
    IData/*31:0*/ top__DOT__finiteStateMachine__DOT__next_state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
