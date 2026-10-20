// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_opll.h for the primary calling header

#include "Vtb_opll__pch.h"

void Vtb_opll___024root___timing_ready(Vtb_opll___024root* vlSelf);

VL_ATTR_COLD void Vtb_opll___024root___eval_static(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_static\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.tb_opll__DOT__xin = 0U;
        vlSelfRef.tb_opll__DOT__cyc = 0U;
        vlSelfRef.tb_opll__DOT__ic_n = 0U;
        vlSelfRef.tb_opll__DOT__errors = 0U;
        vlSelfRef.tb_opll__DOT__first = 0x3fffU;
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10243796110866143284ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vR = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8992930345843588909ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 854483449333554088ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5301550433048152815ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11846479609763446887ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 17029659031270897918ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8403439496595746941ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16110847830950965534ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4678274462000228597ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13789777068990570300ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 8219066173969693549ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16852616036348279016ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13945996754810442336ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8075095858106472701ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9242471285907655031ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9733181887100206752ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 11679613838366129154ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__fb_buf = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12064490311305508488ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__wf_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3921294180366576982ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__extra_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974812217732547342ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10165344296462626538ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6307514971218931145ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15760961932297216864ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__unnamedblk1__DOT__opout_buf = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12663093382123369590ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14442469771705057519ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7292474069140319269ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6199608340320929432ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8073274441841198521ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17473436264379679821ull);
        vlSelfRef.tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 498785110635999351ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__ic_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_opll__DOT__xin__0 = 0U;
    Vtb_opll___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_opll___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtb_opll___024root___eval_stl(Vtb_opll___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_stl\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_opll___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_opll___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.tb_opll__DOT__xena = 
                        ((9U == VL_MODDIV_III(32, vlSelfRef.tb_opll__DOT__cyc, (IData)(0x0000001eU))) 
                         | (0x00000018U == VL_MODDIV_III(32, vlSelfRef.tb_opll__DOT__cyc, (IData)(0x0000001eU))));
                    vlSelfRef.tb_opll__DOT__dut__DOT__operator__DOT__w_modula 
                        = ((4U & (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__s5__DOT__ff_count))
                            ? (0x000ff800U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fdata) 
                                              << 0x0000000bU))
                            : (((0x0007fc00U & ((IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fdata) 
                                                << 0x0000000aU)) 
                                >> (7U & (~ (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fb)))) 
                               & (- (IData)((0U != (IData)(vlSelfRef.tb_opll__DOT__dut__DOT__fb))))));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__stl(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_dump_triggers__stl\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_opll___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__ico(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_dump_triggers__ico\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_opll___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__act(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_dump_triggers__act\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_opll___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__nba(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_dump_triggers__nba\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_opll___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__obs(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_dump_triggers__obs\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__react(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_dump_triggers__react\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_opll___024root___eval_final(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___eval_final\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_opll___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_opll___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___trigger_anySet__stl\n"); );
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

bool Vtb_opll___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_opll___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_opll___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_opll___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge tb_opll.ic_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_opll.xin)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_opll___024root___ctor_var_reset(Vtb_opll___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_opll___024root___ctor_var_reset\n"); );
    Vtb_opll__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_opll__DOT__xena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4098418584509109962ull);
    vlSelf->tb_opll__DOT__mixout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15974499439294004243ull);
    vlSelf->tb_opll__DOT__dut__DOT__opllptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11072950818907019867ull);
    vlSelf->tb_opll__DOT__dut__DOT__oplldat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15978713213027274235ull);
    vlSelf->tb_opll__DOT__dut__DOT__opllwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17494836707389464572ull);
    vlSelf->tb_opll__DOT__dut__DOT__am = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4468977842785892102ull);
    vlSelf->tb_opll__DOT__dut__DOT__pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9175835485720499230ull);
    vlSelf->tb_opll__DOT__dut__DOT__wf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 994170321150322481ull);
    vlSelf->tb_opll__DOT__dut__DOT__tl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6146995174512284377ull);
    vlSelf->tb_opll__DOT__dut__DOT__fb = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17342082140233485129ull);
    vlSelf->tb_opll__DOT__dut__DOT__ar = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4997787384522705701ull);
    vlSelf->tb_opll__DOT__dut__DOT__dr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9120452811238436850ull);
    vlSelf->tb_opll__DOT__dut__DOT__sl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6062974016366507743ull);
    vlSelf->tb_opll__DOT__dut__DOT__rr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17192216112778757028ull);
    vlSelf->tb_opll__DOT__dut__DOT__ml = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1257140203752942410ull);
    vlSelf->tb_opll__DOT__dut__DOT__fnum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10186010787811473155ull);
    vlSelf->tb_opll__DOT__dut__DOT__blk = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15224815124219380027ull);
    vlSelf->tb_opll__DOT__dut__DOT__rks = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6902988821041590196ull);
    vlSelf->tb_opll__DOT__dut__DOT__key = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 798682337118102850ull);
    vlSelf->tb_opll__DOT__dut__DOT__rhythm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 415707955755190114ull);
    vlSelf->tb_opll__DOT__dut__DOT__noise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17004169433674641664ull);
    vlSelf->tb_opll__DOT__dut__DOT__pgout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11591467937829289936ull);
    vlSelf->tb_opll__DOT__dut__DOT__egout = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10844440452819205459ull);
    vlSelf->tb_opll__DOT__dut__DOT__opout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6819989232168091322ull);
    vlSelf->tb_opll__DOT__dut__DOT__faddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9377915407052125637ull);
    vlSelf->tb_opll__DOT__dut__DOT__maddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4279565829073885294ull);
    vlSelf->tb_opll__DOT__dut__DOT__fdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9397964535930917115ull);
    vlSelf->tb_opll__DOT__dut__DOT__mdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15449945443042294648ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6369530145647720139ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7068896892649975579ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__fb_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5165884718983589415ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1334656603604213782ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__li_data = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2091889460467575340ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11305341111079085421ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1454620273478622112ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__mo_rdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18256008067159676636ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4896164159667181883ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_weight = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5733876968430962275ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15196885776304319395ull);
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6860913200430476031ull);
    for (int __Vi0 = 0; __Vi0 < 19; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11082098644257988928ull);
    }
    vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7520600253928323347ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9439196828605359820ull);
    }
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__rslot = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5771082464440043609ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__memin = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16488979162413656613ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__memout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15475768883648030775ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__memwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9519126616917775641ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17431205185581106516ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__ardata = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12657658414950423682ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2166882704555200360ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17409482884131288319ull);
    vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14484199989662433334ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14661475373039733156ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__inst_cache[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10496470984259729837ull);
    }
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12338459736846320936ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 617886088660382629ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15708087433701358334ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11757345464803127992ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 10266095509827454635ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wdata = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 16780280357293230542ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__regs_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13738198709403477962ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__regs_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1495086245630408953ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3129590075020428027ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__regs_wdata = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14469943683190316401ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__rflag = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 951851469516758167ull);
    for (int __Vi0 = 0; __Vi0 < 38; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 6144745494449473469ull);
    }
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12057460567615717787ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 7575370827721030717ull);
    vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4319670884257007890ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5038914779709863241ull);
    }
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 18365419018555089315ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__w_modula = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1013890625900887429ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__ff_egout = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7210103624901411383ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1941318923339130535ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12351403271512980828ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15252553402907162093ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_wf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7965943749099902790ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_weight = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12781716174114383794ull);
    vlSelf->tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12685496818754978335ull);
    vlSelf->tb_opll__DOT__dut__DOT__phasegen__DOT__memwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3499451830839846611ull);
    vlSelf->tb_opll__DOT__dut__DOT__phasegen__DOT__memout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 12734858755371407909ull);
    vlSelf->tb_opll__DOT__dut__DOT__phasegen__DOT__memin = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9395172995493941705ull);
    vlSelf->tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11475579450320717896ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16349967325186940250ull);
    }
    vlSelf->tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17183993991359988734ull);
    vlSelf->tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10910056102674305146ull);
    vlSelf->tb_opll__DOT__dut__DOT__s8__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11300647612294997198ull);
    vlSelf->tb_opll__DOT__dut__DOT__s5__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6313993360253502302ull);
    vlSelf->tb_opll__DOT__dut__DOT__s2__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1987505317741553935ull);
    vlSelf->tb_opll__DOT__dut__DOT__s0__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3089529299551697739ull);
    vlSelf->__Vdly__tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx = 0;
    vlSelf->__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr = 0;
    vlSelf->__Vdly__tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata = 0;
    vlSelf->__Vdly__tb_opll__DOT__dut__DOT__s5__DOT__ff_count = 0;
    vlSelf->__Vdly__tb_opll__DOT__dut__DOT__s2__DOT__ff_count = 0;
    vlSelf->__Vdly__tb_opll__DOT__dut__DOT__s0__DOT__ff_count = 0;
    vlSelf->__VdlySet__tb_opll__DOT__ic_n__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__cyc__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__cyc__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__first__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__first__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__ic_n__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__ic_n__v2 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__cyc__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__cyc__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 0;
    vlSelf->__VdlyVal__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0;
    vlSelf->__VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_opll__DOT__ic_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_opll__DOT__xin__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
