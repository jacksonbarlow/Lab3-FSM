// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__timeSignal__DOT__count = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if ((0x64U < vlSelf->__VstlIterCount)) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__time_out = ((0U != vlSelf->top__DOT__timeSignal__DOT__current_state) 
                                  & ((1U != vlSelf->top__DOT__timeSignal__DOT__current_state) 
                                     & (2U == vlSelf->top__DOT__timeSignal__DOT__current_state)));
    if (((((((((0U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state) 
               | (1U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->top__DOT__cmd_seq = 1U;
            vlSelf->dout = 0U;
            vlSelf->top__DOT__cmd_delay = 0U;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = (((IData)(vlSelf->top__DOT__tick) 
                    & (IData)(vlSelf->fsm_trigger))
                    ? 1U : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else if ((1U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 1U;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 2U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else if ((2U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 3U;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 3U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else if ((3U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 7U;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 4U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else if ((4U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 0xfU;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 5U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else if ((5U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 0x1fU;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 6U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else if ((6U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 0x3fU;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 7U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        } else {
            vlSelf->dout = 0x7fU;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__tick) ? 8U
                    : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        }
    } else {
        vlSelf->top__DOT__cmd_seq = (8U != vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
        if ((8U == vlSelf->top__DOT__finiteStateMachine__DOT__current_state)) {
            vlSelf->dout = 0xffU;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__time_out)
                    ? 0U : vlSelf->top__DOT__finiteStateMachine__DOT__current_state);
            vlSelf->top__DOT__cmd_delay = 1U;
        } else {
            vlSelf->dout = 0U;
            vlSelf->top__DOT__finiteStateMachine__DOT__next_state = 0U;
            vlSelf->top__DOT__cmd_delay = 0U;
        }
    }
    if ((0U == vlSelf->top__DOT__timeSignal__DOT__current_state)) {
        if (vlSelf->top__DOT__cmd_delay) {
            vlSelf->top__DOT__timeSignal__DOT__triggeredAlready = 1U;
            vlSelf->top__DOT__timeSignal__DOT__next_state = 1U;
        } else {
            vlSelf->top__DOT__timeSignal__DOT__next_state 
                = vlSelf->top__DOT__timeSignal__DOT__current_state;
        }
    } else {
        vlSelf->top__DOT__timeSignal__DOT__next_state 
            = ((1U == vlSelf->top__DOT__timeSignal__DOT__current_state)
                ? ((0U == (IData)(vlSelf->top__DOT__timeSignal__DOT__count))
                    ? 2U : vlSelf->top__DOT__timeSignal__DOT__current_state)
                : ((2U == vlSelf->top__DOT__timeSignal__DOT__current_state)
                    ? ((IData)(vlSelf->top__DOT__cmd_delay)
                        ? 3U : 0U) : ((3U == vlSelf->top__DOT__timeSignal__DOT__current_state)
                                       ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                           ? vlSelf->top__DOT__timeSignal__DOT__current_state
                                           : 0U) : 0U)));
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->fsm_trigger = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->readRand = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__time_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__randomNumberGenerator__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__timeSignal__DOT__count = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__timeSignal__DOT__triggeredAlready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__timeSignal__DOT__current_state = 0;
    vlSelf->top__DOT__timeSignal__DOT__next_state = 0;
    vlSelf->top__DOT__tickGenerator__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__finiteStateMachine__DOT__current_state = 0;
    vlSelf->top__DOT__finiteStateMachine__DOT__next_state = 0;
    vlSelf->__Vdly__top__DOT__randomNumberGenerator__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->__VstlIterCount = 0;
    vlSelf->__VicoIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
