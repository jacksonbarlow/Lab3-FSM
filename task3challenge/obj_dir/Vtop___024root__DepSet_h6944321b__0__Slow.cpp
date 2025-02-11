// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
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
    if (((((((((0U == vlSelf->top__DOT__finiteMachine__DOT__current_state) 
               | (1U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__finiteMachine__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 0U;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 1U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else if ((1U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 1U;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 2U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else if ((2U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 3U;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 3U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else if ((3U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 7U;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 4U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else if ((4U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 0xfU;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 5U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else if ((5U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 0x1fU;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 6U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else if ((6U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
            vlSelf->dout = 0x3fU;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 7U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        } else {
            vlSelf->dout = 0x7fU;
            vlSelf->top__DOT__finiteMachine__DOT__next_state 
                = ((IData)(vlSelf->top__DOT__clktickout)
                    ? 8U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
        }
    } else if ((8U == vlSelf->top__DOT__finiteMachine__DOT__current_state)) {
        vlSelf->dout = 0xffU;
        vlSelf->top__DOT__finiteMachine__DOT__next_state 
            = ((IData)(vlSelf->top__DOT__clktickout)
                ? 0U : vlSelf->top__DOT__finiteMachine__DOT__current_state);
    } else {
        vlSelf->dout = 0U;
        vlSelf->top__DOT__finiteMachine__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->n = VL_RAND_RESET_I(16);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__clktickout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clktickIn__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__finiteMachine__DOT__current_state = 0;
    vlSelf->top__DOT__finiteMachine__DOT__next_state = 0;
    vlSelf->__VstlIterCount = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactIterCount = 0;
    vlSelf->__VactContinue = 0;
}
