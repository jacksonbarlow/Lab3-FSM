// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__clktickIn__DOT__count;
    // Body
    __Vdly__top__DOT__clktickIn__DOT__count = vlSelf->top__DOT__clktickIn__DOT__count;
    if (vlSelf->rst) {
        vlSelf->top__DOT__clktickout = 0U;
        __Vdly__top__DOT__clktickIn__DOT__count = vlSelf->n;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->top__DOT__clktickIn__DOT__count))) {
            vlSelf->top__DOT__clktickout = 1U;
            __Vdly__top__DOT__clktickIn__DOT__count 
                = vlSelf->n;
        } else {
            __Vdly__top__DOT__clktickIn__DOT__count 
                = (0xffffU & ((IData)(vlSelf->top__DOT__clktickIn__DOT__count) 
                              - (IData)(1U)));
            vlSelf->top__DOT__clktickout = 0U;
        }
    }
    vlSelf->top__DOT__clktickIn__DOT__count = __Vdly__top__DOT__clktickIn__DOT__count;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__finiteMachine__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->top__DOT__finiteMachine__DOT__next_state);
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
