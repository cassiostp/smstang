// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_opll.h for the primary calling header

#include "Vtb_opll__pch.h"

VlCoroutine Vtb_opll___024root___eval_initial__TOP__Vtiming__0(Vtb_opll___024root* vlSelf);
VlCoroutine Vtb_opll___024root___eval_initial__TOP__Vtiming__1(Vtb_opll___024root* vlSelf);

void Vtb_opll___024root___eval_initial(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_initial\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_opll___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_opll___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_opll___024root___eval_sample(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_sample\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_opll___024root___eval_ico(Vtb_opll___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_ico\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_opll___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_opll___024root___timing_ready(Vtb_opll___024root* vlSelf);
void Vtb_opll___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_opll___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_opll___024root___timing_resume(Vtb_opll___024root* vlSelf);

bool Vtb_opll___024root___eval_act(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_act\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.tb_opll__DOT__xin) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__xin__0))) 
                                                             << 1U) 
                                                            | ((~ (IData)(vlSelfRef.tb_opll__DOT__ic_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__ic_n__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__ic_n__0 
            = vlSelfRef.tb_opll__DOT__ic_n;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__xin__0 
            = vlSelfRef.tb_opll__DOT__xin;
    }
    Vtb_opll___024root___timing_ready(vlSelf);
    Vtb_opll___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_opll___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_opll___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_opll___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_opll___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_opll___024root___eval_inact(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_inact\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_opll.v", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_opll___024root___eval_body__nba(Vtb_opll___024root* vlSelf);
void Vtb_opll___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_opll___024root___eval_nba(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_nba\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_opll___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_opll___024root___eval_body__nba(vlSelf);
        Vtb_opll___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_opll___024root___eval_obs(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_obs\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_opll___024root___eval_react(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_react\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_opll___024root___eval_postponed(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_postponed\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_opll___024root____VbeforeTrig_h9921853b__0(Vtb_opll___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_opll___024root___eval_initial__TOP__Vtiming__0(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_opll__DOT__i;
    tb_opll__DOT__i = 0;
    IData/*31:0*/ tb_opll__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_opll__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_opll__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_opll__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    tb_opll__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x000000c8U;
    while (VL_LTS_III(32, 0U, tb_opll__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_opll___024root____VbeforeTrig_h9921853b__0(vlSelf, 
                                                       "@(posedge tb_opll.xin)");
        co_await vlSelfRef.__VtrigSched_h9921853b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_opll.xin)", 
                                                             "tb_opll.v", 
                                                             22);
        tb_opll__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_opll__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v0 = 1U;
    tb_opll__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x002dc6c0U, tb_opll__DOT__i)) {
            Vtb_opll___024root____VbeforeTrig_h9921853b__0(vlSelf, 
                                                           "@(posedge tb_opll.xin)");
            co_await vlSelfRef.__VtrigSched_h9921853b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_opll.xin)", 
                                                                 "tb_opll.v", 
                                                                 26);
            vlSelfRef.__VdlyVal__tb_opll__DOT__cyc__v0 
                = ((IData)(1U) + vlSelfRef.tb_opll__DOT__cyc);
            vlSelfRef.__VdlySet__tb_opll__DOT__cyc__v0 = 1U;
            if (vlSelfRef.tb_opll__DOT__xena) {
                if ((0x3fffU == (IData)(vlSelfRef.tb_opll__DOT__first))) {
                    vlSelfRef.__VdlyVal__tb_opll__DOT__first__v0 
                        = vlSelfRef.tb_opll__DOT__mixout;
                    vlSelfRef.__VdlySet__tb_opll__DOT__first__v0 = 1U;
                } else if (VL_UNLIKELY((((IData)(vlSelfRef.tb_opll__DOT__mixout) 
                                         != (IData)(vlSelfRef.tb_opll__DOT__first))))) {
                    VL_WRITEF_NX("FAIL: idle drift at %0d: %04x vs %04x\n",3
                                 , '~',32,tb_opll__DOT__i
                                 , '#',14,(IData)(vlSelfRef.tb_opll__DOT__mixout)
                                 , '#',14,vlSelfRef.tb_opll__DOT__first);
                    vlSelfRef.tb_opll__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_opll__DOT__errors);
                    if (VL_UNLIKELY((VL_LTS_III(32, 5U, vlSelfRef.tb_opll__DOT__errors)))) {
                        VL_WRITEF_NX("tb_opll: FAILED\n",0);
                        VL_FINISH_MT("tb_opll.v", 35, "");
                        goto __Vlabel0;
                    }
                }
            }
            tb_opll__DOT__i = ((IData)(1U) + tb_opll__DOT__i);
        }
        __Vlabel0: ;
    }
    VL_WRITEF_NX("idle constant: mixout=%04x over 3M cycles\n",1
                 , '#',14,vlSelfRef.tb_opll__DOT__first);
    vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v1 = 1U;
    tb_opll__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x000000c8U;
    while (VL_LTS_III(32, 0U, tb_opll__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_opll___024root____VbeforeTrig_h9921853b__0(vlSelf, 
                                                       "@(posedge tb_opll.xin)");
        co_await vlSelfRef.__VtrigSched_h9921853b__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_opll.xin)", 
                                                             "tb_opll.v", 
                                                             43);
        tb_opll__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_opll__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v2 = 1U;
    tb_opll__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 0x000f4240U, tb_opll__DOT__i)) {
            Vtb_opll___024root____VbeforeTrig_h9921853b__0(vlSelf, 
                                                           "@(posedge tb_opll.xin)");
            co_await vlSelfRef.__VtrigSched_h9921853b__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_opll.xin)", 
                                                                 "tb_opll.v", 
                                                                 46);
            vlSelfRef.__VdlyVal__tb_opll__DOT__cyc__v1 
                = ((IData)(1U) + vlSelfRef.tb_opll__DOT__cyc);
            vlSelfRef.__VdlySet__tb_opll__DOT__cyc__v1 = 1U;
            if (VL_UNLIKELY((((IData)(vlSelfRef.tb_opll__DOT__xena) 
                              & ((IData)(vlSelfRef.tb_opll__DOT__mixout) 
                                 != (IData)(vlSelfRef.tb_opll__DOT__first)))))) {
                VL_WRITEF_NX("FAIL: post-reset mismatch at %0d: %04x vs %04x\n",3
                             , '~',32,tb_opll__DOT__i
                             , '#',14,(IData)(vlSelfRef.tb_opll__DOT__mixout)
                             , '#',14,vlSelfRef.tb_opll__DOT__first);
                vlSelfRef.tb_opll__DOT__errors = ((IData)(1U) 
                                                  + vlSelfRef.tb_opll__DOT__errors);
                if (VL_UNLIKELY((VL_LTS_III(32, 5U, vlSelfRef.tb_opll__DOT__errors)))) {
                    VL_WRITEF_NX("tb_opll: FAILED\n",0);
                    VL_FINISH_MT("tb_opll.v", 53, "");
                    goto __Vlabel1;
                }
            }
            tb_opll__DOT__i = ((IData)(1U) + tb_opll__DOT__i);
        }
        __Vlabel1: ;
    }
    if ((0U == vlSelfRef.tb_opll__DOT__errors)) {
        VL_WRITEF_NX("tb_opll: ALL PASSED (idle=%04x)\n",1
                     , '#',14,vlSelfRef.tb_opll__DOT__first);
    } else {
        VL_WRITEF_NX("tb_opll: %0d FAILURES\n",1, '~',32,vlSelfRef.tb_opll__DOT__errors);
    }
    VL_FINISH_MT("tb_opll.v", 59, "");
    co_return;
}

VlCoroutine Vtb_opll___024root___eval_initial__TOP__Vtiming__1(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_opll.v", 
                                             8);
        vlSelfRef.tb_opll__DOT__xin = (1U & (~ (IData)(vlSelfRef.tb_opll__DOT__xin)));
    }
    co_return;
}

bool Vtb_opll___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_opll___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_opll___024root___nba_sequent__TOP__0(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___nba_sequent__TOP__0\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__Vfuncout;
    __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__L;
    __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__L = 0;
    SData/*9:0*/ __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__R;
    __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__R = 0;
    CData/*1:0*/ __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate;
    __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate = 0;
    SData/*12:0*/ __Vdly__tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount;
    __Vdly__tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount = 0;
    SData/*13:0*/ __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix;
    __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix = 0;
    CData/*6:0*/ __Vdly__tb_opll__DOT__dut__DOT__s8__DOT__ff_count;
    __Vdly__tb_opll__DOT__dut__DOT__s8__DOT__ff_count = 0;
    CData/*4:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0;
    __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0;
    __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 0;
    SData/*9:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    __VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0;
    // Body
    __Vdly__tb_opll__DOT__dut__DOT__s8__DOT__ff_count 
        = vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count;
    vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s2__DOT__ff_count 
        = vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count;
    vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s5__DOT__ff_count 
        = vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count;
    vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s0__DOT__ff_count 
        = vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 = 0U;
    vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata 
        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0U;
    vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr 
        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr;
    __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate 
        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 = 0U;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 = 0U;
    __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix 
        = vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix;
    __Vdly__tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount 
        = vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0U;
    vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
        = vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 0U;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0U;
    __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 0U;
    __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0U;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0U;
    if (vlSelfRef.tb_opll__DOT__ic_n) {
        if ((9U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state))) {
            if ((8U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state))) {
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 1U;
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state)));
        } else if (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wr) {
            if ((8U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_addr))) {
                vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wdata;
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_addr;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 1U;
            }
        }
        if ((0x26U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id))) {
            if ((0U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate))) {
                vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id;
                __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate = 1U;
            } else if ((1U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate))) {
                __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate = 2U;
            } else if ((2U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate))) {
                if ((0x25U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id))) {
                    vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 
                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_data;
                    vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 
                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id;
                    vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 = 1U;
                }
                __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate = 0U;
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id)));
            }
        } else if (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr) {
            if ((0x25U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr))) {
                vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wdata;
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 = 1U;
            }
        }
        if ((0x12U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot))) {
            if ((0x11U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot))) {
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 1U;
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot)));
        } else if (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memwr) {
            if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                          >> 2U)))) {
                vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memin;
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 1U;
            }
        }
        if ((0x12U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot))) {
            if ((0x11U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot))) {
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 1U;
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot)));
        } else if (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memwr) {
            if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                          >> 2U)))) {
                vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memin;
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 1U;
            }
        }
        if ((0x12U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch))) {
            if ((0x12U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch))) {
                __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch;
                __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 1U;
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch)));
        } else if (vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wr) {
            if ((0x12U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr))) {
                __VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wdata;
                __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr;
                __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 1U;
            }
        }
        if ((9U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch))) {
            if ((8U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch))) {
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 1U;
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch)));
        } else if (vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wr) {
            if ((8U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_addr))) {
                vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wdata;
                vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_addr;
                vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 1U;
            }
        }
        if (vlSelfRef.tb_opll__DOT__xena) {
            __Vdly__tb_opll__DOT__dut__DOT__s8__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count))));
            vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s2__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count))));
            vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s5__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))));
            vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s0__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))));
            if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                    if ((8U >= (0x0000000fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                               >> 3U)))) {
                        vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 
                            = (0x0000000fU & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                              >> 0x14U));
                        vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                              >> 3U));
                        vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 = 1U;
                    }
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__fb_buf 
                        = (7U & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                         >> 0x00000010U)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__fb 
                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__fb_buf;
                }
            }
            if ((0U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                    if ((0x11U == (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                  >> 2U)))) {
                        vlSelfRef.tb_opll__DOT__mixout 
                            = vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix;
                        __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix = 0U;
                    } else if ((1U & (~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute)))) {
                        __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix 
                            = (0x00003fffU & ((0x00000200U 
                                               & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__mdata))
                                               ? ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix) 
                                                  - 
                                                  (0x000001ffU 
                                                   & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__mdata)))
                                               : ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix) 
                                                  + 
                                                  (0x000001ffU 
                                                   & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__mdata)))));
                    }
                }
            }
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memwr = 0U;
            } else if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                    vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memwr = 1U;
                } else if ((3U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                    vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memwr = 0U;
                }
            }
            if ((0U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                        if ((0U == (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                   >> 2U)))) {
                            __Vdly__tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount 
                                = (0x00001fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount)));
                        }
                        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                            = (0x0000ffffU & (((0x000001ffU 
                                                & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fnum) 
                                                   * vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__mltbl
                                                   [vlSelfRef.tb_opll__DOT__dut__DOT__ml])) 
                                               << (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__blk)) 
                                              >> 2U));
                        if (vlSelfRef.tb_opll__DOT__dut__DOT__pm) {
                            if ((1U == (3U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount) 
                                              >> 0x0bU)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                    = (0x0003ffffU 
                                       & (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                          + (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                             >> 7U)));
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount) 
                                                >> 0x0bU)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                    = (0x0003ffffU 
                                       & (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                          - (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                             >> 7U)));
                            }
                        }
                        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memin 
                            = ((((~ ((0x11U >= (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                   >> 2U))) 
                                     && (1U & (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey 
                                               >> (0x0000001fU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                      >> 2U)))))) 
                                 & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__key)) 
                                & ((~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rhythm)) 
                                   | ((0x0eU != (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                    >> 2U))) 
                                      & (0x11U != (0x0000001fU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                      >> 2U))))))
                                ? 0U : (0x0003ffffU 
                                        & (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memout 
                                           + vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase)));
                        if ((0x11U >= (0x0000001fU 
                                       & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                          >> 2U)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey 
                                = (((~ ((IData)(1U) 
                                        << (0x0000001fU 
                                            & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                               >> 2U)))) 
                                    & vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey) 
                                   | (0x0003ffffU & 
                                      ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__key) 
                                       << (0x0000001fU 
                                           & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                              >> 2U)))));
                        }
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memwr = 1U;
                    } else if ((3U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memwr = 0U;
                    }
                }
            }
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wr = 0U;
                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wr = 0U;
            } else if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                if ((2U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                    if ((3U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wr = 1U;
                        if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count) 
                                      >> 2U)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wr = 1U;
                        }
                    }
                }
            }
            if ((0U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                    if ((2U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                        if ((3U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wdata 
                                = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__li_data;
                            if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count) 
                                          >> 2U)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_addr 
                                    = (0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count) 
                                          >> 3U));
                                __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__R 
                                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__li_data;
                                __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__L 
                                    = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_rdata;
                                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL 
                                    = (0x000007ffU 
                                       & ((0x00000200U 
                                           & (IData)(__Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__L))
                                           ? ((IData)(1U) 
                                              + (~ 
                                                 (0x000001ffU 
                                                  & (IData)(__Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__L))))
                                           : (0x000001ffU 
                                              & (IData)(__Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__L))));
                                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vR 
                                    = (0x000007ffU 
                                       & ((0x00000200U 
                                           & (IData)(__Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__R))
                                           ? ((IData)(1U) 
                                              + (~ 
                                                 (0x000001ffU 
                                                  & (IData)(__Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__R))))
                                           : (0x000001ffU 
                                              & (IData)(__Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__R))));
                                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL 
                                    = (0x000007ffU 
                                       & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                          + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vR)));
                                if ((0x00000400U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL 
                                        = (0x000007ffU 
                                           & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                                 - (IData)(1U))));
                                    __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__Vfuncout 
                                        = (0x00000200U 
                                           | (0x000001ffU 
                                              & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                                 >> 1U)));
                                } else {
                                    __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__Vfuncout 
                                        = (0x000001ffU 
                                           & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                              >> 1U));
                                }
                                vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wdata 
                                    = __Vfunc_tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__0__Vfuncout;
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_rdata 
            = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array
            [((0x12U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr))
               ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr)
               : 0U)];
        vlSelfRef.tb_opll__DOT__dut__DOT__mdata = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array
            [((0x12U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__maddr))
               ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__maddr)
               : 0U)];
        if (vlSelfRef.tb_opll__DOT__xena) {
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                if (vlSelfRef.tb_opll__DOT__dut__DOT__rhythm) {
                    if ((0x00000040U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute 
                            = ((1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                      >> 5U)) || ((1U 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                      >> 4U)) 
                                                  || ((1U 
                                                       & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                          >> 3U)) 
                                                      || (1U 
                                                          & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                             >> 2U)))));
                        if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                  >> 2U)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__maddr = 0x0dU;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute 
                            = ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                         >> 5U))) && 
                               ((1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                       >> 4U)) && (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                        >> 3U))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                          >> 2U)))));
                        if ((0x00000020U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__maddr 
                                = ((0x00000010U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                    ? ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                        ? ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                            ? 0x10U
                                            : 0x0eU)
                                        : ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                            ? 0x11U
                                            : 0x0fU))
                                    : ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                        ? ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                            ? 0x0dU
                                            : 0x10U)
                                        : ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                            ? 0x0eU
                                            : 0x0bU)));
                        } else if ((0x00000010U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            if ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__maddr 
                                    = ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                        ? 9U : 7U);
                            } else if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 2U)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__maddr = 0x11U;
                            }
                        } else {
                            vlSelfRef.tb_opll__DOT__dut__DOT__maddr 
                                = ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                    ? ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                        ? 0x0fU : 5U)
                                    : ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                        ? 3U : 1U));
                        }
                    }
                } else {
                    vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute 
                        = ((1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                  >> 6U)) || (1U & 
                                              ((0x00000020U 
                                                & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                                ? (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                                    ? 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                        >> 3U)) 
                                                    && (1U 
                                                        & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                           >> 2U)))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                        >> 3U)) 
                                                    || (1U 
                                                        & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                           >> 2U))))
                                                : (
                                                   (0x00000010U 
                                                    & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                     >> 3U))
                                                    : 
                                                   ((1U 
                                                     & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                        >> 3U)) 
                                                    && (1U 
                                                        & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                           >> 2U)))))));
                    if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                  >> 6U)))) {
                        if ((0x00000020U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                                if ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                  >> 2U)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__maddr = 0x11U;
                                    }
                                } else {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__maddr 
                                        = ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                            ? 0x0fU
                                            : 0x0dU);
                                }
                            } else if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                              >> 2U)))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__maddr = 0x0bU;
                                }
                            }
                        } else if ((0x00000010U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            if ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__maddr 
                                    = ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                        ? 9U : 7U);
                            }
                        } else if ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                          >> 2U)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__maddr = 5U;
                            }
                        } else {
                            vlSelfRef.tb_opll__DOT__dut__DOT__maddr 
                                = ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                    ? 3U : 1U);
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                    vlSelfRef.tb_opll__DOT__dut__DOT__fnum 
                        = (0x000001ffU & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata);
                    vlSelfRef.tb_opll__DOT__dut__DOT__blk 
                        = (7U & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                 >> 9U));
                    vlSelfRef.tb_opll__DOT__dut__DOT__ml 
                        = (0x0000000fU & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                  >> 0x0000001cU)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__pm 
                        = (1U & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                         >> 0x00000022U)));
                }
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count) 
                                  >> 2U));
        }
    } else {
        __Vdly__tb_opll__DOT__dut__DOT__s8__DOT__ff_count = 0x3fU;
        vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s2__DOT__ff_count = 0x45U;
        vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s5__DOT__ff_count = 0x42U;
        vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s0__DOT__ff_count = 0x47U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id = 0U;
        __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__fb = 0U;
        __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix = 0U;
        vlSelfRef.tb_opll__DOT__mixout = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memwr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase = 0U;
        __Vdly__tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memwr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute = 1U;
        vlSelfRef.tb_opll__DOT__dut__DOT__fnum = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__blk = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__ml = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__maddr = 0U;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate 
        = __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate;
    vlSelfRef.tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix 
        = __Vdly__tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix;
    vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount 
        = __Vdly__tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount;
    if (__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array[__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v0] = 0U;
    }
    if (__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1) {
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array[__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1] 
            = __VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__s8__DOT__ff_count 
        = __Vdly__tb_opll__DOT__dut__DOT__s8__DOT__ff_count;
}

void Vtb_opll___024root___nba_sequent__TOP__2(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___nba_sequent__TOP__2\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr 
        = vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr;
    if (vlSelfRef.tb_opll__DOT__ic_n) {
        vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
            = (0x003fffffU & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase);
        if (vlSelfRef.tb_opll__DOT__xena) {
            if ((0U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                    if ((2U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                        if ((3U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__unnamedblk1__DOT__opout_buf 
                                = ((0x2000U > (0x00003fffU 
                                               & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__ff_egout) 
                                                  + 
                                                  (0x00001fffU 
                                                   & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data)))))
                                    ? ((0x00002000U 
                                        & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data)) 
                                       | (0x00001fffU 
                                          & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__ff_egout) 
                                             + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data))))
                                    : (0x1fffU | (0x00002000U 
                                                  & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data))));
                            vlSelfRef.tb_opll__DOT__dut__DOT__opout 
                                = vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__unnamedblk1__DOT__opout_buf;
                        }
                    }
                    if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__ff_egout 
                            = vlSelfRef.tb_opll__DOT__dut__DOT__egout;
                    }
                }
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                = ((1U & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable) 
                   | (0x0003fffeU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                                     << 1U)));
            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                = ((0x0003fffeU & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable) 
                   | (1U & VL_REDXOR_32((0x00024000U 
                                         & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable))));
            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase));
            if ((0x1fU == (0x0000001fU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                                          >> 0x0fU)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                    = (0x00008000U | (0x00007fffU & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase));
            }
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate 
                    = (3U & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memout 
                             >> 0x00000017U));
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                    = (0x007fffffU & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memout);
            } else if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                    if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                            = ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))
                                ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rr)
                                : (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__dr));
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__tl) 
                                               << 6U) 
                                              + (0x00001fffU 
                                                 & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                                    >> 9U))));
                    } else if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                            = vlSelfRef.tb_opll__DOT__dut__DOT__ar;
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__tl) 
                                               << 6U) 
                                              + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__ardata)));
                    } else {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp = 0x1fffU;
                    }
                    if (((vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                          & (0x38U == (0x78U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) 
                         & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rhythm))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & ((IData)(0x2000U) 
                                              + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp)));
                    }
                    if (vlSelfRef.tb_opll__DOT__dut__DOT__am) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & ((0x00080000U 
                                               & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase)
                                               ? ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp) 
                                                  + 
                                                  (0x000003ffU 
                                                   & ((IData)(0x03c0U) 
                                                      - 
                                                      (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                                                       >> 9U))))
                                               : ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp) 
                                                  + 
                                                  (0x000003ffU 
                                                   & ((vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                                                       >> 9U) 
                                                      - (IData)(0x0040U))))));
                    }
                    vlSelfRef.tb_opll__DOT__dut__DOT__egout 
                        = ((0U == (3U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp) 
                                         >> 7U))) ? 
                           (0x00001fffU & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp))
                            : 0x00001fffU);
                    if ((0U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                            = (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm) 
                                              + (3U 
                                                 & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rks) 
                                                    >> 2U))));
                        if ((0x00000010U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                                = (0x0000000fU | (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm));
                        }
                        if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (4U | (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rks)));
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x007fffffU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm) 
                                                      - (IData)(1U)))));
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                = (0x007fffffU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                                  + vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase));
                        } else if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x0000001fU & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase);
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = ((0x007fffc0U & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase) 
                                   | (0x0000003fU & 
                                      ((IData)(6U) 
                                       * (4U | (3U 
                                                & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rks))))));
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x007fffffU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                                  << 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm))));
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                = (0x007fffffU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                                  - vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase));
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                            if ((0x0fU <= (0x0000001fU 
                                           & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                              >> 0x12U)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 0U;
                            }
                        } else if (((0x0000001fU & 
                                     (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                      >> 0x12U)) >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__sl))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        if ((0x00400000U & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase)) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0U;
                            vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 2U;
                        }
                    } else {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0x007fffffU;
                    }
                    if (((~ ((0x11U >= (0x0000001fU 
                                        & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                           >> 2U))) 
                             && (1U & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey 
                                       >> (0x0000001fU 
                                           & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                              >> 2U)))))) 
                         & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__key))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0x003fffffU;
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 1U;
                    } else if (((((0x11U >= (0x0000001fU 
                                             & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                >> 2U))) 
                                  && (1U & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey 
                                            >> (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                   >> 2U))))) 
                                 & (~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__key))) 
                                & (0U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate)))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 3U;
                    }
                    if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                  >> 2U)))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey 
                            = (((~ ((IData)(1U) << 
                                    (0x0000001fU & 
                                     ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                      >> 2U)))) & vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey) 
                               | (0x0003ffffU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__key) 
                                                 << 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                     >> 2U)))));
                    }
                    vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memin 
                        = (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate) 
                            << 0x00000017U) | vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase);
                }
            }
        }
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__memout 
            = vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set
            [((0x11U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__rslot))
               ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__rslot)
               : 0U)];
        if (vlSelfRef.tb_opll__DOT__xena) {
            if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                    vlSelfRef.tb_opll__DOT__dut__DOT__dr 
                        = (0x0000000fU & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                  >> 8U)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__ar 
                        = (0x0000000fU & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                  >> 0x0000000cU)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__am 
                        = (1U & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                         >> 0x00000023U)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__sl 
                        = (0x0000000fU & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                  >> 4U)));
                }
            }
            if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__rslot 
                    = ((0x11U == (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                 >> 2U)))
                        ? 0U : (0x0000001fU & ((IData)(1U) 
                                               + ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                  >> 2U))));
            }
        }
    } else {
        vlSelfRef.tb_opll__DOT__dut__DOT__opout = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__ff_egout = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable = 0x0003ffffU;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase = 0x00008000U;
        vlSelfRef.tb_opll__DOT__dut__DOT__dr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__ar = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__sl = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__rslot = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0] = 0x01ffffffU;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1) {
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
    }
}

void Vtb_opll___024root___nba_sequent__TOP__4(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___nba_sequent__TOP__4\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
        = vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx;
    if (vlSelfRef.tb_opll__DOT__ic_n) {
        if (vlSelfRef.tb_opll__DOT__xena) {
            if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__wf_buf 
                        = (1U & (IData)((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                         >> 0x00000013U)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__wf 
                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__wf_buf;
                }
            }
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                    = (0x0003ffffU & (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rhythm) 
                                       & ((0x0eU == 
                                           (0x0000001fU 
                                            & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count) 
                                               >> 2U))) 
                                          | (0x11U 
                                             == (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count) 
                                                    >> 2U)))))
                                       ? (0x0000fe00U 
                                          | (0x00020000U 
                                             & ((~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__noise)) 
                                                << 0x00000011U)))
                                       : (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rhythm) 
                                           & (0x3cU 
                                              == (0x7cU 
                                                  & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))))
                                           ? (0x0000fe00U 
                                              | (0x00020000U 
                                                 & ((~ 
                                                     (vlSelfRef.tb_opll__DOT__dut__DOT__pgout 
                                                      >> 0x11U)) 
                                                    << 0x00000011U)))
                                           : (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__rhythm) 
                                               & (0x40U 
                                                  == 
                                                  (0x7cU 
                                                   & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))))
                                               ? vlSelfRef.tb_opll__DOT__dut__DOT__pgout
                                               : ((0x00000200U 
                                                   & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fdata))
                                                   ? 
                                                  (vlSelfRef.tb_opll__DOT__dut__DOT__pgout 
                                                   - vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__w_modula)
                                                   : 
                                                  (vlSelfRef.tb_opll__DOT__dut__DOT__pgout 
                                                   + vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__w_modula))))));
            }
        }
        vlSelfRef.tb_opll__DOT__dut__DOT__fdata = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array
            [((8U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__faddr))
               ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__faddr)
               : 0U)];
        if (vlSelfRef.tb_opll__DOT__xena) {
            vlSelfRef.tb_opll__DOT__dut__DOT__noise 
                = ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise14) 
                   ^ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise17));
            if ((0U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count)))) {
                        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf 
                            = vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memout;
                        vlSelfRef.tb_opll__DOT__dut__DOT__pgout 
                            = vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf;
                        if ((0x0eU == (0x0000001fU 
                                       & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                          >> 2U)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise14 
                                = (1U & (IData)((0x8888888911111110ULL 
                                                 >> 
                                                 (0x0000003fU 
                                                  & (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memout 
                                                     >> 0x0aU)))));
                        } else if ((0x11U == (0x0000001fU 
                                              & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                                 >> 2U)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise17 
                                = (1U & (0x0aU >> (7U 
                                                   & (vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memout 
                                                      >> 0x0bU))));
                        }
                    }
                }
            }
        }
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__memout 
            = ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                         >> 2U))) ? vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array
               [(0x0000001fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count) 
                                >> 2U))] : 0U);
        vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata 
            = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices
            [((0x25U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr))
               ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr)
               : 0U)];
        if (vlSelfRef.tb_opll__DOT__xena) {
            if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                    if ((((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                          >> 5U) & (0x0cU <= (0x0000001fU 
                                              & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 2U))))) {
                        if ((0x00000040U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                  >> 3U)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                                 ? 
                                                ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                                 >> 1U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                                 >> 2U)));
                                    }
                                }
                            }
                        } else if ((0x00000020U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag 
                                    = (1U & ((8U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                              ? ((4U 
                                                  & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                                  >> 3U)
                                                  : (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag))
                                              : ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                                 >> 4U)));
                            }
                        }
                    } else {
                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag = 0U;
                    }
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll 
                        = (0x000000feU & ((vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__kl_table
                                           [(0x0000000fU 
                                             & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                                >> 5U))] 
                                           - (0x00000038U 
                                              & (((IData)(7U) 
                                                  - 
                                                  (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                                   >> 9U)) 
                                                 << 3U))) 
                                          << 1U));
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag 
                        = (1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag) 
                                 | (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                    >> 0x0cU)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll 
                        = ((IData)((((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll) 
                                     >> 7U) | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                           >> 0x0000001aU))))))
                            ? 0U : ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll) 
                                    >> (3U & ((IData)(3U) 
                                              - (IData)(
                                                        (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                         >> 0x0000001aU))))));
                    vlSelfRef.tb_opll__DOT__dut__DOT__rhythm 
                        = (1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                 >> 5U));
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll 
                        = ((((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                             >> 5U) & ((0x0eU == (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                     >> 2U))) 
                                       | (0x10U == 
                                          (0x0000001fU 
                                           & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                              >> 2U)))))
                            ? (0x00000078U & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                              >> 0x00000011U))
                            : ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))
                                ? (0x00000078U & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                                  >> 0x0000000dU))
                                : (0x0000007eU & ((IData)(
                                                          (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                           >> 0x00000014U)) 
                                                  << 1U))));
                    vlSelfRef.tb_opll__DOT__dut__DOT__key 
                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag;
                    vlSelfRef.tb_opll__DOT__dut__DOT__rks 
                        = (0x0000000fU & ((((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                            >> 5U) 
                                           & (0x0eU 
                                              <= (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                     >> 2U))))
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                             >> 0x00000020U)))
                                               ? 5U
                                               : (3U 
                                                  & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                                     >> 0x0aU)))
                                           : ((1U & (IData)(
                                                            (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                             >> 0x00000020U)))
                                               ? (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                                  >> 8U)
                                               : (3U 
                                                  & (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
                                                     >> 0x0aU)))));
                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll) 
                                          + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll)));
                    vlSelfRef.tb_opll__DOT__dut__DOT__rr 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag)
                                           ? ((1U & (IData)(
                                                            (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                             >> 0x00000021U)))
                                               ? 0U
                                               : (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data))
                                           : ((1U & 
                                               ((~ 
                                                 ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                  >> 2U)) 
                                                & (~ 
                                                   (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                                     >> 5U) 
                                                    & (7U 
                                                       <= 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                           >> 3U)))))))
                                               ? 0U
                                               : ((0x00002000U 
                                                   & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata)
                                                   ? 5U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
                                                               >> 0x00000021U)))
                                                    ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data)
                                                    : 7U)))));
                    vlSelfRef.tb_opll__DOT__dut__DOT__tl 
                        = ((0x00000080U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll))
                            ? 0x0000007fU : (0x0000007fU 
                                             & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll)));
                }
            }
        }
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data 
            = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices
            [((0x25U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_addr))
               ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_addr)
               : 0U)];
        if (vlSelfRef.tb_opll__DOT__xena) {
            if ((0U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count)))) {
                        if ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__faddr 
                                = ((8U == (0x0000000fU 
                                           & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count) 
                                              >> 3U)))
                                    ? 0U : (0x0000000fU 
                                            & ((IData)(1U) 
                                               + ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count) 
                                                  >> 3U))));
                        }
                    }
                }
            }
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_addr 
                    = (0x0000003fU & ((((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag) 
                                        >> 5U) & (6U 
                                                  <= 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                      >> 3U))))
                                       ? ((IData)(0x20U) 
                                          + ((0x0000001fU 
                                              & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 2U)) 
                                             - (IData)(0x0cU)))
                                       : ((((8U >= 
                                             (0x0000000fU 
                                              & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 3U)))
                                             ? vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__inst_cache
                                            [(0x0000000fU 
                                              & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 3U))]
                                             : 0U) 
                                           << 1U) + 
                                          (1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                                 >> 2U)))));
            }
            if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                    if (vlSelfRef.tb_opll__DOT__dut__DOT__opllwr) {
                        if (((~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__extra_mode)) 
                             & (8U > (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr)))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata;
                            if ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                                if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                                    if (((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr)) 
                                         == (1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                            = ((0x0000000fffffff00ULL 
                                                & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                               | (IData)((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat)));
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 1U;
                                    }
                                } else if (((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr)) 
                                            == (1U 
                                                & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                        = ((0x0000000fffff00ffULL 
                                            & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                           | ((QData)((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat)) 
                                              << 8U));
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 1U;
                                }
                            } else if ((2U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                                if (((~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr)) 
                                     & (0U == (1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex))))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                        = ((0x0000000ff00fffffULL 
                                            & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                           | ((QData)((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat)) 
                                              << 0x00000014U));
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 1U;
                                } else if (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr) 
                                            & (0U == 
                                               (1U 
                                                & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex))))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                        = ((0x0000000ffff0ffffULL 
                                            & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                           | ((QData)((IData)(
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat)))) 
                                              << 0x00000010U));
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 1U;
                                } else if ((1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr) 
                                                  & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                        = ((0x0000000ff3ffffffULL 
                                            & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                           | ((QData)((IData)(
                                                              (3U 
                                                               & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat) 
                                                                  >> 6U)))) 
                                              << 0x0000001aU));
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                        = ((0x0000000ffff7ffffULL 
                                            & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat) 
                                                                  >> 4U)))) 
                                              << 0x00000013U));
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 1U;
                                }
                            } else if (((1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr)) 
                                        == (1U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                    = ((0x000000000fffffffULL 
                                        & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                       | ((QData)((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat)) 
                                          << 0x0000001cU));
                                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 1U;
                            }
                            vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wdata 
                                = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp;
                        } else if ((0x0eU == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                            vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag 
                                = vlSelfRef.tb_opll__DOT__dut__DOT__oplldat;
                        } else if ((0x10U <= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                            if ((0x3fU >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                                if (((0x0000000fU & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr)) 
                                     == (0x0000000fU 
                                         & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                            >> 3U)))) {
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata;
                                    if ((1U == (3U 
                                                & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr) 
                                                   >> 4U)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                            = ((0x00ffff00U 
                                                & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp) 
                                               | (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat));
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wr = 1U;
                                    } else if ((2U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr) 
                                                    >> 4U)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                            = ((0x00ffc0ffU 
                                                & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp) 
                                               | (0x00003f00U 
                                                  & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat) 
                                                     << 8U)));
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wr = 1U;
                                    } else if ((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr) 
                                                    >> 4U)))) {
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                            = ((0x0000ffffU 
                                                & vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp) 
                                               | ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat) 
                                                  << 0x00000010U));
                                        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wr = 1U;
                                    }
                                    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wdata 
                                        = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp;
                                }
                            } else if ((0xf0U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opllptr))) {
                                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__extra_mode 
                                    = (0x80U == (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__oplldat));
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex 
                    = (1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                             >> 2U));
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex;
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wr = 0U;
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 0U;
            }
        }
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata 
            = ((8U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_addr))
                ? vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array
               [vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_addr]
                : 0U);
        if (vlSelfRef.tb_opll__DOT__xena) {
            vlSelfRef.tb_opll__DOT__dut__DOT__opllwr = 0U;
            vlSelfRef.tb_opll__DOT__dut__DOT__opllptr = 0U;
            if ((0U == (3U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count)))) {
                vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_addr 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count) 
                                      >> 3U));
            }
        }
    } else {
        vlSelfRef.tb_opll__DOT__dut__DOT__wf = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise14 = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise17 = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__key = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__rhythm = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__rr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__tl = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__rks = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__key = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__rhythm = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_addr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__extra_mode = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__rflag = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_wr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__opllwr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__opllptr = 0U;
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__regs_addr = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1) {
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count 
        = vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s5__DOT__ff_count;
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1) {
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__s2__DOT__ff_count 
        = vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s2__DOT__ff_count;
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1) {
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__w_modula 
        = ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))
            ? (0x000ff800U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fdata) 
                              << 0x0000000bU)) : ((
                                                   (0x0007fc00U 
                                                    & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fdata) 
                                                       << 0x0000000aU)) 
                                                   >> 
                                                   (7U 
                                                    & (~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fb)))) 
                                                  & (- (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fb))))));
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__inst_cache[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata 
        = vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata;
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0) {
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1) {
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array[vlSelfRef.__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1] 
            = vlSelfRef.__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
    }
    vlSelfRef.tb_opll__DOT__dut__DOT__s0__DOT__ff_count 
        = vlSelfRef.__Vdly__tb_opll__DOT__dut__DOT__s0__DOT__ff_count;
}

void Vtb_opll___024root___eval_body__nba(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_body__nba\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_opll___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            if (vlSelfRef.__VdlySet__tb_opll__DOT__first__v0) {
                vlSelfRef.__VdlySet__tb_opll__DOT__first__v0 = 0U;
                vlSelfRef.tb_opll__DOT__first = vlSelfRef.__VdlyVal__tb_opll__DOT__first__v0;
            }
            if (vlSelfRef.__VdlySet__tb_opll__DOT__cyc__v0) {
                vlSelfRef.__VdlySet__tb_opll__DOT__cyc__v0 = 0U;
                vlSelfRef.tb_opll__DOT__cyc = vlSelfRef.__VdlyVal__tb_opll__DOT__cyc__v0;
            }
            if (vlSelfRef.__VdlySet__tb_opll__DOT__cyc__v1) {
                vlSelfRef.__VdlySet__tb_opll__DOT__cyc__v1 = 0U;
                vlSelfRef.tb_opll__DOT__cyc = vlSelfRef.__VdlyVal__tb_opll__DOT__cyc__v1;
            }
            vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_data 
                = vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__ROM2413__DOT__base_voices
                [((0x25U >= (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr))
                   ? (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr)
                   : 0U)];
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__li_data 
                = (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_sign) 
                    << 9U) | (0x000001ffU & ((0x000001ffU 
                                              & (((0x000003ffU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data1) 
                                                      - (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data0))) 
                                                  * (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_weight)) 
                                                 >> 6U)) 
                                             + (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data0))));
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_sign 
                = (1U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opout) 
                         >> 0x0dU));
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_weight 
                = (0x0000003fU & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opout));
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data1 
                = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data
                [(0x0000007fU & (((IData)(1U) + ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opout) 
                                                 >> 6U)) 
                                 | (- (IData)((0x7fU 
                                               == (0x0000007fU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opout) 
                                                      >> 6U)))))))];
            vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data0 
                = vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data
                [(0x0000007fU & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__opout) 
                                 >> 6U))];
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_opll___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.tb_opll__DOT__xena) {
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data 
                    = (0x00003fffU & ((((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_sign) 
                                        << 0x0000000dU) 
                                       | (0x00001fffU 
                                          & ((0x00001fffU 
                                              & (((0x00000fffU 
                                                   & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data1) 
                                                      - (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data0))) 
                                                  * (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_weight)) 
                                                 >> 7U)) 
                                             + ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data0) 
                                                << 2U)))) 
                                      | (- (IData)((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_wf)))));
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__ardata 
                    = (0x00001fffU & (((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1) 
                                       << 6U) + (0x00001fffU 
                                                 & (((0x000000ffU 
                                                      & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2) 
                                                         - (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1))) 
                                                     * (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w)) 
                                                    >> 2U))));
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_sign 
                    = (1U & (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                             >> 0x11U));
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_weight 
                    = (0x000001ffU & vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr);
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__sin_data
                    [(0x0000007fU & ((0x7fU == (0x0000007fU 
                                                & (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                                                   >> 9U)))
                                      ? (~ (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                                                          >> 0x00000010U)))))
                                      : (((IData)(1U) 
                                          + (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                                             >> 9U)) 
                                         ^ (- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                                                          >> 0x00000010U)))))))];
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data0 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__sin_data
                    [(0x0000007fU & ((- (IData)((1U 
                                                 & (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                                                    >> 0x00000010U)))) 
                                     ^ (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                                        >> 9U)))];
                vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_wf 
                    = ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__wf) 
                       & (vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__addr 
                          >> 0x11U));
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w 
                    = (0x000000ffU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
                                      >> 7U));
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust
                    [(0x0000007fU & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
                                     >> 0x0000000fU))];
                vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2 
                    = vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust
                    [(0x0000007fU & (((IData)(1U) + 
                                      (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
                                       >> 0x0000000fU)) 
                                     | (- (IData)((0x7fU 
                                                   == 
                                                   (0x0000007fU 
                                                    & (vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx 
                                                       >> 0x0000000fU)))))))];
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_opll___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb_opll__DOT__xena = ((9U == 
                                             VL_MODDIV_III(32, vlSelfRef.tb_opll__DOT__cyc, (IData)(0x0000001eU))) 
                                            | (0x00000018U 
                                               == VL_MODDIV_III(32, vlSelfRef.tb_opll__DOT__cyc, (IData)(0x0000001eU))));
            if (vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v0) {
                vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v0 = 0U;
                vlSelfRef.tb_opll__DOT__ic_n = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v1) {
                vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v1 = 0U;
                vlSelfRef.tb_opll__DOT__ic_n = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v2) {
                vlSelfRef.__VdlySet__tb_opll__DOT__ic_n__v2 = 0U;
                vlSelfRef.tb_opll__DOT__ic_n = 1U;
            }
        }
    }
}

void Vtb_opll___024root___timing_ready(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___timing_ready\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h9921853b__0.ready("@(posedge tb_opll.xin)");
    }
}

void Vtb_opll___024root___timing_resume(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___timing_resume\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h9921853b__0.moveToResumeQueue(
                                                          "@(posedge tb_opll.xin)");
    vlSelfRef.__VtrigSched_h9921853b__0.resume("@(posedge tb_opll.xin)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_opll___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_opll___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_opll___024root____VbeforeTrig_h9921853b__0(Vtb_opll___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root____VbeforeTrig_h9921853b__0\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_opll__DOT__xin) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__xin__0))) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__xin__0 
        = vlSelfRef.tb_opll__DOT__xin;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h9921853b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9921853b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9921853b__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h9921853b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_opll___024root___eval_debug_assertions(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_debug_assertions\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
