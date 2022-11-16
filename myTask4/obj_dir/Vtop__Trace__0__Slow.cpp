// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+12,"fsm_trigger", false,-1);
    tracep->declBus(c+13,"dout", false,-1, 7,0);
    tracep->declBus(c+14,"readRand", false,-1, 6,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+12,"fsm_trigger", false,-1);
    tracep->declBus(c+13,"dout", false,-1, 7,0);
    tracep->declBus(c+14,"readRand", false,-1, 6,0);
    tracep->declBus(c+6,"k", false,-1, 6,0);
    tracep->declBit(c+1,"time_out", false,-1);
    tracep->declBit(c+2,"tick", false,-1);
    tracep->declBit(c+15,"fsm_en", false,-1);
    tracep->declBit(c+7,"cmd_delay", false,-1);
    tracep->declBit(c+8,"cmd_seq", false,-1);
    tracep->pushNamePrefix("finiteStateMachine ");
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+2,"tick", false,-1);
    tracep->declBit(c+1,"timeOut", false,-1);
    tracep->declBit(c+12,"trigger", false,-1);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->declBit(c+8,"cmd_seq", false,-1);
    tracep->declBit(c+7,"cmd_delay", false,-1);
    tracep->declBus(c+16,"current_state", false,-1, 31,0);
    tracep->declBus(c+17,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("randomNumberGenerator ");
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+20,"en", false,-1);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBus(c+6,"dout", false,-1, 7,1);
    tracep->declBus(c+6,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tickGenerator ");
    tracep->declBus(c+21,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"N", false,-1, 15,0);
    tracep->declBit(c+8,"en", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+2,"tick", false,-1);
    tracep->declBus(c+3,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("timeSignal ");
    tracep->declBus(c+23,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+11,"rst", false,-1);
    tracep->declBit(c+7,"trigger", false,-1);
    tracep->declBus(c+9,"k", false,-1, 9,0);
    tracep->declBit(c+1,"time_out", false,-1);
    tracep->declBus(c+4,"count", false,-1, 9,0);
    tracep->declBit(c+18,"triggeredAlready", false,-1);
    tracep->declBus(c+5,"current_state", false,-1, 31,0);
    tracep->declBus(c+19,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__time_out));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__tick));
    bufp->fullSData(oldp+3,(vlSelf->top__DOT__tickGenerator__DOT__count),16);
    bufp->fullSData(oldp+4,(vlSelf->top__DOT__timeSignal__DOT__count),10);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__timeSignal__DOT__current_state),32);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__randomNumberGenerator__DOT__sreg),7);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__cmd_delay));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__cmd_seq));
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__randomNumberGenerator__DOT__sreg),10);
    bufp->fullBit(oldp+10,(vlSelf->clk));
    bufp->fullBit(oldp+11,(vlSelf->rst));
    bufp->fullBit(oldp+12,(vlSelf->fsm_trigger));
    bufp->fullCData(oldp+13,(vlSelf->dout),8);
    bufp->fullCData(oldp+14,(vlSelf->readRand),7);
    bufp->fullBit(oldp+15,(((IData)(vlSelf->top__DOT__cmd_seq)
                             ? (IData)(vlSelf->top__DOT__tick)
                             : (IData)(vlSelf->top__DOT__time_out))));
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__finiteStateMachine__DOT__current_state),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__finiteStateMachine__DOT__next_state),32);
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__timeSignal__DOT__triggeredAlready));
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__timeSignal__DOT__next_state),32);
    bufp->fullBit(oldp+20,(1U));
    bufp->fullIData(oldp+21,(0x10U),32);
    bufp->fullSData(oldp+22,(0x1cU),16);
    bufp->fullIData(oldp+23,(0xaU),32);
}
