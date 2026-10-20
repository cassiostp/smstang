// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

void Vtb_ss___024root___timing_ready(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___timing_ready\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready("@(posedge tb_ss.clk_sys)");
    }
}

void Vtb_ss___024root___timing_resume(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___timing_resume\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hbdcb3986__0.moveToResumeQueue(
                                                          "@(posedge tb_ss.clk_sys)");
    vlSelfRef.__VtrigSched_hbdcb3986__0.resume("@(posedge tb_ss.clk_sys)");
    if ((0x0000001000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ss___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_ss___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(Vtb_ss___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_ss__DOT__clk_sys) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0 
        = vlSelfRef.tb_ss__DOT__clk_sys;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hbdcb3986__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_ss___024root___eval_debug_assertions(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_debug_assertions\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
