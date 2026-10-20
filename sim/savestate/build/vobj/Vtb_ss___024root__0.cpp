// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

VlCoroutine Vtb_ss___024root___eval_initial__TOP__Vtiming__0(Vtb_ss___024root* vlSelf);
VlCoroutine Vtb_ss___024root___eval_initial__TOP__Vtiming__1(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___eval_initial__TOP__tb_ss__DOT__sys__DOT__vdp_inst(Vtb_ss_vdp__M3f* vlSelf);

void Vtb_ss___024root___eval_initial(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_initial\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        VL_READMEM_N(true, 8, 16384, 0, "mboot.hex"s
                     ,  &(vlSelfRef.tb_ss__DOT__sys__DOT__boot_rom_inst__DOT__mem)
                     , 0, ~0ULL);
        VL_READMEM_N(true, 8, 32768, 0, "prog.hex"s
                     ,  &(vlSelfRef.tb_ss__DOT__rom__DOT__mem)
                     , 0, ~0ULL);
    }
    Vtb_ss___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ss___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_ss_vdp__M3f___eval_initial__TOP__tb_ss__DOT__sys__DOT__vdp_inst((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
}

void Vtb_ss___024root___eval_sample(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_sample\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_ss___024root___eval_ico(Vtb_ss___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_ico\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ss___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_ss___024root___eval_triggers_vec__act(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___timing_ready(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_ss___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_ss___024root___timing_resume(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___act_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf);

bool Vtb_ss___024root___eval_act(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_act\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ss___024root___eval_triggers_vec__act(vlSelf);
    Vtb_ss___024root___timing_ready(vlSelf);
    Vtb_ss___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ss___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_ss___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_ss___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_ss___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtb_ss_vdp__M3f___act_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_ss___024root___eval_inact(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_inact\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_ss.v", 18, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_ss___024root___eval_body__nba(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_ss___024root___eval_nba(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_nba\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_ss___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_ss___024root___eval_body__nba(vlSelf);
        Vtb_ss___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_ss___024root___eval_obs(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_obs\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_ss___024root___eval_react(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_react\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_ss___024root___eval_postponed(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_postponed\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(Vtb_ss___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_ss___024root___eval_initial__TOP__Vtiming__0(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_ss__DOT__i;
    tb_ss__DOT__i = 0;
    IData/*31:0*/ tb_ss__DOT__f;
    tb_ss__DOT__f = 0;
    IData/*31:0*/ tb_ss__DOT__errors;
    tb_ss__DOT__errors = 0;
    IData/*31:0*/ tb_ss__DOT__timeout;
    tb_ss__DOT__timeout = 0;
    CData/*2:0*/ tb_ss__DOT__eng_op__Vstatic__op;
    tb_ss__DOT__eng_op__Vstatic__op = 0;
    IData/*31:0*/ tb_ss__DOT__eng_load_block__Vstatic__blk;
    tb_ss__DOT__eng_load_block__Vstatic__blk = 0;
    IData/*31:0*/ tb_ss__DOT__eng_load_block__Vstatic__base;
    tb_ss__DOT__eng_load_block__Vstatic__base = 0;
    IData/*31:0*/ tb_ss__DOT__eng_load_block__Vstatic__corrupt;
    tb_ss__DOT__eng_load_block__Vstatic__corrupt = 0;
    IData/*31:0*/ tb_ss__DOT__wait_frames__Vstatic__n;
    tb_ss__DOT__wait_frames__Vstatic__n = 0;
    IData/*31:0*/ tb_ss__DOT__unnamedblk1_5__DOT____Vrepeat4;
    tb_ss__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb_ss__DOT__unnamedblk1_6__DOT____Vrepeat5;
    tb_ss__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ tb_ss__DOT__unnamedblk1_7__DOT____Vrepeat6;
    tb_ss__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__1__n;
    __Vtask_tb_ss__DOT__wait_frames__1__n = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__2__n;
    __Vtask_tb_ss__DOT__wait_frames__2__n = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__3__n;
    __Vtask_tb_ss__DOT__wait_frames__3__n = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__4__op;
    __Vtask_tb_ss__DOT__eng_op__4__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__5__blk;
    __Vtask_tb_ss__DOT__eng_save_block__5__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__5__base;
    __Vtask_tb_ss__DOT__eng_save_block__5__base = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__6__op;
    __Vtask_tb_ss__DOT__eng_op__6__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__7__n;
    __Vtask_tb_ss__DOT__wait_frames__7__n = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__8__op;
    __Vtask_tb_ss__DOT__eng_op__8__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__9__blk;
    __Vtask_tb_ss__DOT__eng_save_block__9__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__9__base;
    __Vtask_tb_ss__DOT__eng_save_block__9__base = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__10__op;
    __Vtask_tb_ss__DOT__eng_op__10__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__12__n;
    __Vtask_tb_ss__DOT__wait_frames__12__n = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__13__op;
    __Vtask_tb_ss__DOT__eng_op__13__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__14__blk;
    __Vtask_tb_ss__DOT__eng_load_block__14__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__14__base;
    __Vtask_tb_ss__DOT__eng_load_block__14__base = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__14__corrupt;
    __Vtask_tb_ss__DOT__eng_load_block__14__corrupt = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__15__blk;
    __Vtask_tb_ss__DOT__eng_load_block__15__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__15__base;
    __Vtask_tb_ss__DOT__eng_load_block__15__base = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__15__corrupt;
    __Vtask_tb_ss__DOT__eng_load_block__15__corrupt = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__16__op;
    __Vtask_tb_ss__DOT__eng_op__16__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__17__n;
    __Vtask_tb_ss__DOT__wait_frames__17__n = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__18__op;
    __Vtask_tb_ss__DOT__eng_op__18__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__19__blk;
    __Vtask_tb_ss__DOT__eng_save_block__19__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__19__base;
    __Vtask_tb_ss__DOT__eng_save_block__19__base = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__20__op;
    __Vtask_tb_ss__DOT__eng_op__20__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__22__n;
    __Vtask_tb_ss__DOT__wait_frames__22__n = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__23__n;
    __Vtask_tb_ss__DOT__wait_frames__23__n = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__25__n;
    __Vtask_tb_ss__DOT__wait_frames__25__n = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__26__op;
    __Vtask_tb_ss__DOT__eng_op__26__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__27__blk;
    __Vtask_tb_ss__DOT__eng_load_block__27__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__27__base;
    __Vtask_tb_ss__DOT__eng_load_block__27__base = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__27__corrupt;
    __Vtask_tb_ss__DOT__eng_load_block__27__corrupt = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__28__op;
    __Vtask_tb_ss__DOT__eng_op__28__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__29__n;
    __Vtask_tb_ss__DOT__wait_frames__29__n = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3;
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__wait_frames__31__n;
    __Vtask_tb_ss__DOT__wait_frames__31__n = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__32__op;
    __Vtask_tb_ss__DOT__eng_op__32__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__33__blk;
    __Vtask_tb_ss__DOT__eng_save_block__33__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_save_block__33__base;
    __Vtask_tb_ss__DOT__eng_save_block__33__base = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__34__op;
    __Vtask_tb_ss__DOT__eng_op__34__op = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__35__op;
    __Vtask_tb_ss__DOT__eng_op__35__op = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__36__blk;
    __Vtask_tb_ss__DOT__eng_load_block__36__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__36__base;
    __Vtask_tb_ss__DOT__eng_load_block__36__base = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__36__corrupt;
    __Vtask_tb_ss__DOT__eng_load_block__36__corrupt = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__37__blk;
    __Vtask_tb_ss__DOT__eng_load_block__37__blk = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__37__base;
    __Vtask_tb_ss__DOT__eng_load_block__37__base = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__37__corrupt;
    __Vtask_tb_ss__DOT__eng_load_block__37__corrupt = 0;
    IData/*31:0*/ __Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*2:0*/ __Vtask_tb_ss__DOT__eng_op__38__op;
    __Vtask_tb_ss__DOT__eng_op__38__op = 0;
    // Body
    tb_ss__DOT__errors = 0U;
    VL_WRITEF_NX("tb_ss: start\n",0);
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v0 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v0 = 1U;
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             314);
        __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v1 = 1U;
    vlSelfRef.tb_ss__DOT__vid__DOT__hcount = 0U;
    vlSelfRef.tb_ss__DOT__vid__DOT__vcount = 0U;
    vlSelfRef.tb_ss__DOT__HS = 0U;
    vlSelfRef.tb_ss__DOT__VS = 0U;
    vlSelfRef.tb_ss__DOT__HBlank = 0U;
    vlSelfRef.tb_ss__DOT__VBlank = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__wram__DOT__mem[(0x00003fffU 
                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__nvram__DOT__mem[(0x00007fffU 
                                               & tb_ss__DOT__i)] = 0xffU;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[(0x00007fffU 
                                                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             374);
        __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    if (VL_UNLIKELY(((((0U != vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]) 
                       | (0xffU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U])) 
                      | (0U != vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]))))) {
        VL_WRITEF_NX("FAIL: do_reset RAM fills did not take (w=%02x n=%02x v=%02x)\n",3
                     , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U]
                     , '#',8,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             381);
        __Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_ss__DOT__do_reset__0__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v1 = 1U;
    __Vtask_tb_ss__DOT__wait_frames__1__n = 2U;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__1__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    if (VL_UNLIKELY((vlSelfRef.tb_ss__DOT__sys__DOT__fm_touched))) {
        VL_WRITEF_NX("FAIL: ss_supported low on clean boot\n",0);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    __Vtask_tb_ss__DOT__wait_frames__2__n = 0x0000000aU;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__2__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    VL_WRITEF_NX("probe12: nvram_e=%b nvram10=%02x nvram16394=%02x wram110=%02x frame=%0d\n",5
                 , '#',1,vlSelfRef.tb_ss__DOT__sys__DOT__nvram_e
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[10U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[16394U]
                 , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[272U]
                 , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[0U]);
    __Vtask_tb_ss__DOT__wait_frames__3__n = 0x0000001cU;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__3__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    VL_WRITEF_NX("A: frame=%0d wram0=%02x nvram40 will save\n",2
                 , '~',32,vlSelfRef.tb_ss__DOT__frames
                 , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[0U]);
    __Vtask_tb_ss__DOT__eng_op__4__op = 1U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__4__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v0 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v0 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v0 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v1 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v1 = 1U;
    tb_ss__DOT__timeout = 0U;
    while (((2U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x0bebc200U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             460);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))))) {
        VL_WRITEF_NX("FAIL: engine never reached S_SAVE\n",0);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    tb_ss__DOT__f = 0U;
    while (VL_GTS_III(32, 0x00000073U, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__eng_save_block__5__base = 0U;
        __Vtask_tb_ss__DOT__eng_save_block__5__blk 
            = tb_ss__DOT__f;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk 
            = __Vtask_tb_ss__DOT__eng_save_block__5__blk;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base 
            = __Vtask_tb_ss__DOT__eng_save_block__5__base;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v0 
            = (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v0 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             242);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v0 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             244);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v1 = 1U;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
            tb_ss__DOT__timeout = 0U;
            while (((~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)) 
                    & VL_GTS_III(32, 0x00002710U, tb_ss__DOT__timeout))) {
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     249);
                tb_ss__DOT__timeout = ((IData)(1U) 
                                       + tb_ss__DOT__timeout);
            }
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)))))) {
                VL_WRITEF_NX("FAIL: save block %0d byte %0d never ready\n",2
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
                tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
                tb_ss__DOT__timeout = 0U;
            }
            if ((0U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                   + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if ((1U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA2[(0x0000ffffU 
                                                 & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                    + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                               & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                  + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                vlSelfRef.tb_ss__DOT__imgB2[(0x0000ffffU 
                                             & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                    = vlSelfRef.tb_ss__DOT__ss_img_q;
            }
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v1 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_raddr));
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v1 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 261);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v0 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 263);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v1 = 1U;
            if ((0x000001ffU != vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v2 = 1U;
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     267);
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v3 = 1U;
            }
            vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b 
                = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__6__op = 3U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__6__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v2 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v2 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v2 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v3 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v3 = 1U;
    VL_WRITEF_NX("A: saved 58880 bytes, header %02x%02x%02x%02x total=%0d\n",5
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[0U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[1U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[2U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[3U]
                 , '#',24,(0x0007ffffU & (((IData)(vlSelfRef.tb_ss__DOT__imgA[18U]) 
                                           << 0x00000010U) 
                                          | (((IData)(vlSelfRef.tb_ss__DOT__imgA[17U]) 
                                              << 8U) 
                                             | vlSelfRef.tb_ss__DOT__imgA[16U]))));
    tb_ss__DOT__f = 0x00000029U;
    while (VL_GTES_III(32, 0x0000004bU, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__wait_frames__7__n = 1U;
        tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__7__n;
        vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
            = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
        tb_ss__DOT__timeout = 0U;
        while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
                & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 300);
            tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
            VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                         , '~',32,vlSelfRef.tb_ss__DOT__frames
                         , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & tb_ss__DOT__f))))) {
            vlSelfRef.tb_ss__DOT__vhA[(0x0000007fU 
                                       & tb_ss__DOT__f)] 
                = vlSelfRef.tb_ss__DOT__frame_vh;
            vlSelfRef.tb_ss__DOT__ahA[(0x0000007fU 
                                       & tb_ss__DOT__f)] 
                = vlSelfRef.tb_ss__DOT__frame_ah;
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__8__op = 1U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__8__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v4 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v4 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v4 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v5 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v5 = 1U;
    tb_ss__DOT__timeout = 0U;
    while (((2U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x0bebc200U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             482);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    tb_ss__DOT__f = 0U;
    while (VL_GTS_III(32, 0x00000073U, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__eng_save_block__9__base = 1U;
        __Vtask_tb_ss__DOT__eng_save_block__9__blk 
            = tb_ss__DOT__f;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk 
            = __Vtask_tb_ss__DOT__eng_save_block__9__blk;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base 
            = __Vtask_tb_ss__DOT__eng_save_block__9__base;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v2 
            = (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v2 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             242);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v4 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             244);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v5 = 1U;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
            tb_ss__DOT__timeout = 0U;
            while (((~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)) 
                    & VL_GTS_III(32, 0x00002710U, tb_ss__DOT__timeout))) {
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     249);
                tb_ss__DOT__timeout = ((IData)(1U) 
                                       + tb_ss__DOT__timeout);
            }
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)))))) {
                VL_WRITEF_NX("FAIL: save block %0d byte %0d never ready\n",2
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
                tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
                tb_ss__DOT__timeout = 0U;
            }
            if ((0U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                   + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if ((1U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA2[(0x0000ffffU 
                                                 & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                    + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                               & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                  + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                vlSelfRef.tb_ss__DOT__imgB2[(0x0000ffffU 
                                             & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                    = vlSelfRef.tb_ss__DOT__ss_img_q;
            }
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v3 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_raddr));
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v3 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 261);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v2 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 263);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v3 = 1U;
            if ((0x000001ffU != vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v6 = 1U;
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     267);
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v7 = 1U;
            }
            vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b 
                = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__10__op = 3U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__10__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v6 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v6 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v6 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v7 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v7 = 1U;
    VL_WRITEF_NX("A: done frames=%0d\n",1, '~',32,vlSelfRef.tb_ss__DOT__frames);
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v2 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v2 = 1U;
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             314);
        __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v3 = 1U;
    vlSelfRef.tb_ss__DOT__vid__DOT__hcount = 0U;
    vlSelfRef.tb_ss__DOT__vid__DOT__vcount = 0U;
    vlSelfRef.tb_ss__DOT__HS = 0U;
    vlSelfRef.tb_ss__DOT__VS = 0U;
    vlSelfRef.tb_ss__DOT__HBlank = 0U;
    vlSelfRef.tb_ss__DOT__VBlank = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__wram__DOT__mem[(0x00003fffU 
                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__nvram__DOT__mem[(0x00007fffU 
                                               & tb_ss__DOT__i)] = 0xffU;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[(0x00007fffU 
                                                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             374);
        __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    if (VL_UNLIKELY(((((0U != vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]) 
                       | (0xffU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U])) 
                      | (0U != vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]))))) {
        VL_WRITEF_NX("FAIL: do_reset RAM fills did not take (w=%02x n=%02x v=%02x)\n",3
                     , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U]
                     , '#',8,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             381);
        __Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_ss__DOT__do_reset__11__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v3 = 1U;
    __Vtask_tb_ss__DOT__wait_frames__12__n = 0x00000028U;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__12__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    __Vtask_tb_ss__DOT__eng_op__13__op = 2U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__13__op;
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v8 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v8 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v8 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v9 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v9 = 1U;
    __Vtask_tb_ss__DOT__eng_load_block__14__corrupt = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__14__base = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__14__blk = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    tb_ss__DOT__eng_load_block__Vstatic__blk = __Vtask_tb_ss__DOT__eng_load_block__14__blk;
    tb_ss__DOT__eng_load_block__Vstatic__base = __Vtask_tb_ss__DOT__eng_load_block__14__base;
    tb_ss__DOT__eng_load_block__Vstatic__corrupt = __Vtask_tb_ss__DOT__eng_load_block__14__corrupt;
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v0 = 
        (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk));
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v0 = 1U;
    vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b = 0U;
    while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)) {
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
            = ((0U == tb_ss__DOT__eng_load_block__Vstatic__base)
                ? ((0xe5ffU >= (0x0000ffffU & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)))
                    ? vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                  & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                                     + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))]
                    : 0U) : 0U);
        if ((((0U != tb_ss__DOT__eng_load_block__Vstatic__corrupt) 
              & (0U == tb_ss__DOT__eng_load_block__Vstatic__blk)) 
             & (8U == vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))) {
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                = (0x000000ffU & (~ (IData)(vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v)));
        }
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v0 
            = vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v;
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v0 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             284);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v0 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             286);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v1 = 1U;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v1 
            = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_waddr));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v1 = 1U;
        __Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
        while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 289);
            __Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_ss__DOT__eng_load_block__14__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b 
            = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b);
    }
    tb_ss__DOT__timeout = 0U;
    while (((5U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x000186a0U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             496);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY(((5U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))))) {
        VL_WRITEF_NX("FAIL: engine never reached S_LOAD (state=%0d err=%0d)\n",2
                     , '#',3,vlSelfRef.tb_ss__DOT__eng__DOT__state
                     , '#',1,(IData)(vlSelfRef.tb_ss__DOT__eng__DOT__err));
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    tb_ss__DOT__f = 1U;
    while (VL_GTS_III(32, 0x00000073U, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__eng_load_block__15__corrupt = 0U;
        __Vtask_tb_ss__DOT__eng_load_block__15__base = 0U;
        __Vtask_tb_ss__DOT__eng_load_block__15__blk 
            = tb_ss__DOT__f;
        __Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        tb_ss__DOT__eng_load_block__Vstatic__blk = __Vtask_tb_ss__DOT__eng_load_block__15__blk;
        tb_ss__DOT__eng_load_block__Vstatic__base = __Vtask_tb_ss__DOT__eng_load_block__15__base;
        tb_ss__DOT__eng_load_block__Vstatic__corrupt 
            = __Vtask_tb_ss__DOT__eng_load_block__15__corrupt;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v2 
            = (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v2 = 1U;
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)) {
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                = ((0U == tb_ss__DOT__eng_load_block__Vstatic__base)
                    ? ((0xe5ffU >= (0x0000ffffU & (
                                                   VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                                   + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)))
                        ? vlSelfRef.tb_ss__DOT__imgA
                       [(0x0000ffffU & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                        + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))]
                        : 0U) : 0U);
            if ((((0U != tb_ss__DOT__eng_load_block__Vstatic__corrupt) 
                  & (0U == tb_ss__DOT__eng_load_block__Vstatic__blk)) 
                 & (8U == vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))) {
                vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                    = (0x000000ffU & (~ (IData)(vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v)));
            }
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v1 
                = vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v;
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v1 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 284);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v2 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 286);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v3 = 1U;
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v3 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_waddr));
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v3 = 1U;
            __Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
            while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     289);
                __Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_ss__DOT__eng_load_block__15__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b 
                = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__16__op = 3U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__16__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v10 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v10 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v10 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v11 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v11 = 1U;
    tb_ss__DOT__timeout = 0U;
    while (((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x000f4240U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             507);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))))) {
        VL_WRITEF_NX("FAIL: engine never returned to IDLE after load\n",0);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    tb_ss__DOT__unnamedblk1_5__DOT____Vrepeat4 = 4U;
    while (VL_LTS_III(32, 0U, tb_ss__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             514);
        tb_ss__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (tb_ss__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_loaded_seen)))))) {
        VL_WRITEF_NX("FAIL: ss_loaded never pulsed\n",0);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    tb_ss__DOT__f = 0x00000029U;
    while (VL_GTES_III(32, 0x0000004bU, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__wait_frames__17__n = 1U;
        tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__17__n;
        vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
            = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
        tb_ss__DOT__timeout = 0U;
        while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
                & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 300);
            tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
            VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                         , '~',32,vlSelfRef.tb_ss__DOT__frames
                         , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & tb_ss__DOT__f))))) {
            vlSelfRef.tb_ss__DOT__vhB[(0x0000007fU 
                                       & tb_ss__DOT__f)] 
                = vlSelfRef.tb_ss__DOT__frame_vh;
            vlSelfRef.tb_ss__DOT__ahB[(0x0000007fU 
                                       & tb_ss__DOT__f)] 
                = vlSelfRef.tb_ss__DOT__frame_ah;
        }
        if (VL_UNLIKELY(((0x00000029U == tb_ss__DOT__f)))) {
            VL_WRITEF_NX("note: skipping partial frame 41 (A=%016x B=%016x)\n",2
                         , '#',64,((0x4fU >= (0x0000007fU 
                                              & tb_ss__DOT__f))
                                    ? vlSelfRef.tb_ss__DOT__vhA
                                   [(0x0000007fU & tb_ss__DOT__f)]
                                    : 0ULL), '#',64,
                         ((0x4fU >= (0x0000007fU & tb_ss__DOT__f))
                           ? vlSelfRef.tb_ss__DOT__vhB
                          [(0x0000007fU & tb_ss__DOT__f)]
                           : 0ULL));
        } else if (VL_UNLIKELY(((((0x4fU >= (0x0000007fU 
                                             & tb_ss__DOT__f))
                                   ? vlSelfRef.tb_ss__DOT__vhB
                                  [(0x0000007fU & tb_ss__DOT__f)]
                                   : 0ULL) != ((0x4fU 
                                                >= 
                                                (0x0000007fU 
                                                 & tb_ss__DOT__f))
                                                ? vlSelfRef.tb_ss__DOT__vhA
                                               [(0x0000007fU 
                                                 & tb_ss__DOT__f)]
                                                : 0ULL))))) {
            VL_WRITEF_NX("FAIL: video hash frame %0d A=%016x B=%016x\n",3
                         , '~',32,tb_ss__DOT__f, '#',64,
                         ((0x4fU >= (0x0000007fU & tb_ss__DOT__f))
                           ? vlSelfRef.tb_ss__DOT__vhA
                          [(0x0000007fU & tb_ss__DOT__f)]
                           : 0ULL), '#',64,((0x4fU 
                                             >= (0x0000007fU 
                                                 & tb_ss__DOT__f))
                                             ? vlSelfRef.tb_ss__DOT__vhB
                                            [(0x0000007fU 
                                              & tb_ss__DOT__f)]
                                             : 0ULL));
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        if (VL_UNLIKELY((((0x00000029U != tb_ss__DOT__f) 
                          & (((0x4fU >= (0x0000007fU 
                                         & tb_ss__DOT__f))
                               ? vlSelfRef.tb_ss__DOT__ahB
                              [(0x0000007fU & tb_ss__DOT__f)]
                               : 0ULL) != ((0x4fU >= 
                                            (0x0000007fU 
                                             & tb_ss__DOT__f))
                                            ? vlSelfRef.tb_ss__DOT__ahA
                                           [(0x0000007fU 
                                             & tb_ss__DOT__f)]
                                            : 0ULL)))))) {
            VL_WRITEF_NX("FAIL: audio hash frame %0d A=%016x B=%016x\n",3
                         , '~',32,tb_ss__DOT__f, '#',64,
                         ((0x4fU >= (0x0000007fU & tb_ss__DOT__f))
                           ? vlSelfRef.tb_ss__DOT__ahA
                          [(0x0000007fU & tb_ss__DOT__f)]
                           : 0ULL), '#',64,((0x4fU 
                                             >= (0x0000007fU 
                                                 & tb_ss__DOT__f))
                                             ? vlSelfRef.tb_ss__DOT__ahB
                                            [(0x0000007fU 
                                              & tb_ss__DOT__f)]
                                             : 0ULL));
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__18__op = 1U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__18__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v12 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v12 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v12 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v13 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v13 = 1U;
    tb_ss__DOT__timeout = 0U;
    while (((2U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x0bebc200U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             541);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    tb_ss__DOT__f = 0U;
    while (VL_GTS_III(32, 0x00000073U, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__eng_save_block__19__base = 2U;
        __Vtask_tb_ss__DOT__eng_save_block__19__blk 
            = tb_ss__DOT__f;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk 
            = __Vtask_tb_ss__DOT__eng_save_block__19__blk;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base 
            = __Vtask_tb_ss__DOT__eng_save_block__19__base;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v4 
            = (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v4 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             242);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v8 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             244);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v9 = 1U;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
            tb_ss__DOT__timeout = 0U;
            while (((~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)) 
                    & VL_GTS_III(32, 0x00002710U, tb_ss__DOT__timeout))) {
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     249);
                tb_ss__DOT__timeout = ((IData)(1U) 
                                       + tb_ss__DOT__timeout);
            }
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)))))) {
                VL_WRITEF_NX("FAIL: save block %0d byte %0d never ready\n",2
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
                tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
                tb_ss__DOT__timeout = 0U;
            }
            if ((0U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                   + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if ((1U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA2[(0x0000ffffU 
                                                 & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                    + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                               & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                  + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                vlSelfRef.tb_ss__DOT__imgB2[(0x0000ffffU 
                                             & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                    = vlSelfRef.tb_ss__DOT__ss_img_q;
            }
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v5 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_raddr));
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v5 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 261);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v4 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 263);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v5 = 1U;
            if ((0x000001ffU != vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v10 = 1U;
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     267);
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v11 = 1U;
            }
            vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b 
                = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__20__op = 3U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__20__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v14 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v14 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v14 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v15 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v15 = 1U;
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000e600U, tb_ss__DOT__i)) {
        if (VL_UNLIKELY(((((0xe5ffU >= (0x0000ffffU 
                                        & tb_ss__DOT__i))
                            ? vlSelfRef.tb_ss__DOT__imgB2
                           [(0x0000ffffU & tb_ss__DOT__i)]
                            : 0U) != ((0xe5ffU >= (0x0000ffffU 
                                                   & tb_ss__DOT__i))
                                       ? vlSelfRef.tb_ss__DOT__imgA2
                                      [(0x0000ffffU 
                                        & tb_ss__DOT__i)]
                                       : 0U))))) {
            VL_WRITEF_NX("FAIL: resave image diff at %0d A=%02x B=%02x\n",3
                         , '~',32,tb_ss__DOT__i, '#',8,
                         ((0xe5ffU >= (0x0000ffffU 
                                       & tb_ss__DOT__i))
                           ? vlSelfRef.tb_ss__DOT__imgA2
                          [(0x0000ffffU & tb_ss__DOT__i)]
                           : 0U), '#',8,((0xe5ffU >= 
                                          (0x0000ffffU 
                                           & tb_ss__DOT__i))
                                          ? vlSelfRef.tb_ss__DOT__imgB2
                                         [(0x0000ffffU 
                                           & tb_ss__DOT__i)]
                                          : 0U));
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
            if (VL_UNLIKELY((VL_LTS_III(32, 0x0000000aU, tb_ss__DOT__errors)))) {
                VL_WRITEF_NX("...stopping diff dump\n",0);
                tb_ss__DOT__i = 0x0000e600U;
            }
        }
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    VL_WRITEF_NX("B: done frames=%0d nvram40=%02x (expect 28)\n",2
                 , '~',32,vlSelfRef.tb_ss__DOT__frames
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[40U]);
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v4 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v4 = 1U;
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             314);
        __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v5 = 1U;
    vlSelfRef.tb_ss__DOT__vid__DOT__hcount = 0U;
    vlSelfRef.tb_ss__DOT__vid__DOT__vcount = 0U;
    vlSelfRef.tb_ss__DOT__HS = 0U;
    vlSelfRef.tb_ss__DOT__VS = 0U;
    vlSelfRef.tb_ss__DOT__HBlank = 0U;
    vlSelfRef.tb_ss__DOT__VBlank = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__wram__DOT__mem[(0x00003fffU 
                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__nvram__DOT__mem[(0x00007fffU 
                                               & tb_ss__DOT__i)] = 0xffU;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[(0x00007fffU 
                                                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             374);
        __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    if (VL_UNLIKELY(((((0U != vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]) 
                       | (0xffU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U])) 
                      | (0U != vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]))))) {
        VL_WRITEF_NX("FAIL: do_reset RAM fills did not take (w=%02x n=%02x v=%02x)\n",3
                     , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U]
                     , '#',8,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             381);
        __Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_ss__DOT__do_reset__21__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v5 = 1U;
    __Vtask_tb_ss__DOT__wait_frames__22__n = 5U;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__22__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    tb_ss__DOT__f = 6U;
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    while (VL_GTES_III(32, 0x0000000fU, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__wait_frames__23__n = 1U;
        tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__23__n;
        vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
            = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
        tb_ss__DOT__timeout = 0U;
        while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
                & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 300);
            tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
            VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                         , '~',32,vlSelfRef.tb_ss__DOT__frames
                         , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        if (VL_LIKELY(((0x4fU >= (0x0000007fU & tb_ss__DOT__f))))) {
            vlSelfRef.tb_ss__DOT__vhA[(0x0000007fU 
                                       & tb_ss__DOT__f)] 
                = vlSelfRef.tb_ss__DOT__frame_vh;
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v6 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v6 = 1U;
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             314);
        __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v7 = 1U;
    vlSelfRef.tb_ss__DOT__vid__DOT__hcount = 0U;
    vlSelfRef.tb_ss__DOT__vid__DOT__vcount = 0U;
    vlSelfRef.tb_ss__DOT__HS = 0U;
    vlSelfRef.tb_ss__DOT__VS = 0U;
    vlSelfRef.tb_ss__DOT__HBlank = 0U;
    vlSelfRef.tb_ss__DOT__VBlank = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__wram__DOT__mem[(0x00003fffU 
                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__nvram__DOT__mem[(0x00007fffU 
                                               & tb_ss__DOT__i)] = 0xffU;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[(0x00007fffU 
                                                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             374);
        __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    if (VL_UNLIKELY(((((0U != vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]) 
                       | (0xffU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U])) 
                      | (0U != vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]))))) {
        VL_WRITEF_NX("FAIL: do_reset RAM fills did not take (w=%02x n=%02x v=%02x)\n",3
                     , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U]
                     , '#',8,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             381);
        __Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_ss__DOT__do_reset__24__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v7 = 1U;
    __Vtask_tb_ss__DOT__wait_frames__25__n = 5U;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__25__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    __Vtask_tb_ss__DOT__eng_op__26__op = 2U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__26__op;
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v16 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v16 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v16 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v17 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v17 = 1U;
    __Vtask_tb_ss__DOT__eng_load_block__27__corrupt = 1U;
    __Vtask_tb_ss__DOT__eng_load_block__27__base = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__27__blk = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    tb_ss__DOT__eng_load_block__Vstatic__blk = __Vtask_tb_ss__DOT__eng_load_block__27__blk;
    tb_ss__DOT__eng_load_block__Vstatic__base = __Vtask_tb_ss__DOT__eng_load_block__27__base;
    tb_ss__DOT__eng_load_block__Vstatic__corrupt = __Vtask_tb_ss__DOT__eng_load_block__27__corrupt;
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v4 = 
        (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk));
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v4 = 1U;
    vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b = 0U;
    while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)) {
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
            = ((0U == tb_ss__DOT__eng_load_block__Vstatic__base)
                ? ((0xe5ffU >= (0x0000ffffU & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)))
                    ? vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                  & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                                     + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))]
                    : 0U) : 0U);
        if ((((0U != tb_ss__DOT__eng_load_block__Vstatic__corrupt) 
              & (0U == tb_ss__DOT__eng_load_block__Vstatic__blk)) 
             & (8U == vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))) {
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                = (0x000000ffU & (~ (IData)(vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v)));
        }
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v2 
            = vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v;
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v2 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             284);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v4 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             286);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v5 = 1U;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v5 
            = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_waddr));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v5 = 1U;
        __Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
        while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 289);
            __Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_ss__DOT__eng_load_block__27__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b 
            = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b);
    }
    tb_ss__DOT__timeout = 0U;
    while (((~ (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__hdr_done)) 
            & VL_GTS_III(32, 0x000186a0U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             572);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    tb_ss__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0x00000064U;
    while (VL_LTS_III(32, 0U, tb_ss__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             575);
        tb_ss__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (tb_ss__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    if ((1U & ((3U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
               | (~ (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__err))))) {
        VL_WRITEF_NX("FAIL: corrupt header not rejected (state=%0d err=%0d)\n",2
                     , '#',3,vlSelfRef.tb_ss__DOT__eng__DOT__state
                     , '#',1,(IData)(vlSelfRef.tb_ss__DOT__eng__DOT__err));
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    } else {
        VL_WRITEF_NX("corrupt: rejected in S_HDR as expected\n",0);
    }
    __Vtask_tb_ss__DOT__eng_op__28__op = 4U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__28__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v18 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v18 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v18 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v19 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v19 = 1U;
    tb_ss__DOT__f = 6U;
    while (VL_GTES_III(32, 0x0000000fU, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__wait_frames__29__n = 1U;
        tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__29__n;
        vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
            = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
        tb_ss__DOT__timeout = 0U;
        while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
                & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 300);
            tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
        }
        if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
            VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                         , '~',32,vlSelfRef.tb_ss__DOT__frames
                         , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        if (VL_UNLIKELY(((vlSelfRef.tb_ss__DOT__frame_vh 
                          != ((0x4fU >= (0x0000007fU 
                                         & tb_ss__DOT__f))
                               ? vlSelfRef.tb_ss__DOT__vhA
                              [(0x0000007fU & tb_ss__DOT__f)]
                               : 0ULL))))) {
            VL_WRITEF_NX("FAIL: post-reject video frame %0d ref=%016x got=%016x\n",3
                         , '~',32,tb_ss__DOT__f, '#',64,
                         ((0x4fU >= (0x0000007fU & tb_ss__DOT__f))
                           ? vlSelfRef.tb_ss__DOT__vhA
                          [(0x0000007fU & tb_ss__DOT__f)]
                           : 0ULL), '#',64,vlSelfRef.tb_ss__DOT__frame_vh);
            tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    VL_WRITEF_NX("corrupt: game undisturbed, frames=%0d\n",1
                 , '~',32,vlSelfRef.tb_ss__DOT__frames);
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0U;
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0U;
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v8 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v8 = 1U;
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             314);
        __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v9 = 1U;
    vlSelfRef.tb_ss__DOT__vid__DOT__hcount = 0U;
    vlSelfRef.tb_ss__DOT__vid__DOT__vcount = 0U;
    vlSelfRef.tb_ss__DOT__HS = 0U;
    vlSelfRef.tb_ss__DOT__VS = 0U;
    vlSelfRef.tb_ss__DOT__HBlank = 0U;
    vlSelfRef.tb_ss__DOT__VBlank = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00004000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__wram__DOT__mem[(0x00003fffU 
                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSelfRef.tb_ss__DOT__nvram__DOT__mem[(0x00007fffU 
                                               & tb_ss__DOT__i)] = 0xffU;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    tb_ss__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00008000U, tb_ss__DOT__i)) {
        vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[(0x00007fffU 
                                                                              & tb_ss__DOT__i)] = 0U;
        tb_ss__DOT__i = ((IData)(1U) + tb_ss__DOT__i);
    }
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             374);
        __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((((0U != vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]) 
                       | (0xffU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U])) 
                      | (0U != vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]))))) {
        VL_WRITEF_NX("FAIL: do_reset RAM fills did not take (w=%02x n=%02x v=%02x)\n",3
                     , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[1U]
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[200U]
                     , '#',8,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_vram_inst__DOT__mem[1000U]);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0x00000032U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             381);
        __Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (__Vtask_tb_ss__DOT__do_reset__30__tb_ss__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__reset__v9 = 1U;
    __Vtask_tb_ss__DOT__wait_frames__31__n = 0x00000028U;
    tb_ss__DOT__wait_frames__Vstatic__n = __Vtask_tb_ss__DOT__wait_frames__31__n;
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target 
        = (vlSelfRef.tb_ss__DOT__frames + tb_ss__DOT__wait_frames__Vstatic__n);
    tb_ss__DOT__timeout = 0U;
    while ((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target) 
            & VL_GTS_III(32, 0x03938700U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             300);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    if (VL_UNLIKELY((VL_LTS_III(32, vlSelfRef.tb_ss__DOT__frames, vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target)))) {
        VL_WRITEF_NX("FAIL: wait_frames timeout (%0d/%0d)\n",2
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '~',32,vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    }
    __Vtask_tb_ss__DOT__eng_op__32__op = 1U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__32__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v20 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v20 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v20 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v21 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v21 = 1U;
    tb_ss__DOT__timeout = 0U;
    while (((2U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x0bebc200U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             598);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    tb_ss__DOT__f = 0U;
    while (VL_GTS_III(32, 0x00000073U, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__eng_save_block__33__base = 0U;
        __Vtask_tb_ss__DOT__eng_save_block__33__blk 
            = tb_ss__DOT__f;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk 
            = __Vtask_tb_ss__DOT__eng_save_block__33__blk;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base 
            = __Vtask_tb_ss__DOT__eng_save_block__33__base;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v6 
            = (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v6 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             242);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v12 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             244);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v13 = 1U;
        vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
            tb_ss__DOT__timeout = 0U;
            while (((~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)) 
                    & VL_GTS_III(32, 0x00002710U, tb_ss__DOT__timeout))) {
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     249);
                tb_ss__DOT__timeout = ((IData)(1U) 
                                       + tb_ss__DOT__timeout);
            }
            if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_img_rdy)))))) {
                VL_WRITEF_NX("FAIL: save block %0d byte %0d never ready\n",2
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk
                             , '~',32,vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
                tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
                tb_ss__DOT__timeout = 0U;
            }
            if ((0U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                   + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if ((1U == vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__base)) {
                if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                            & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                    vlSelfRef.tb_ss__DOT__imgA2[(0x0000ffffU 
                                                 & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                    + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                        = vlSelfRef.tb_ss__DOT__ss_img_q;
                }
            } else if (VL_LIKELY(((0xe5ffU >= (0x0000ffffU 
                                               & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                  + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)))))) {
                vlSelfRef.tb_ss__DOT__imgB2[(0x0000ffffU 
                                             & (VL_MULS_III(32, (IData)(0x00000200U), vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__blk) 
                                                + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b))] 
                    = vlSelfRef.tb_ss__DOT__ss_img_q;
            }
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v7 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_raddr));
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v7 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 261);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v6 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 263);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v7 = 1U;
            if ((0x000001ffU != vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b)) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v14 = 1U;
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     267);
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v15 = 1U;
            }
            vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b 
                = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    __Vtask_tb_ss__DOT__eng_op__34__op = 3U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__34__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v22 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v22 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v22 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v23 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v23 = 1U;
    tb_ss__DOT__timeout = 0U;
    while (((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x000f4240U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             607);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    VL_WRITEF_NX("batt: post-save live nvram8-12=%02x%02x%02x%02x%02x img=%02x%02x%02x%02x%02x\n",10
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[8U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[9U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[10U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[11U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[12U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[26120U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[26121U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[26122U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[26123U]
                 , '#',8,vlSelfRef.tb_ss__DOT__imgA[26124U]);
    vlSelfRef.tb_ss__DOT__nvram__DOT__mem[10U] = 0xffU;
    vlSelfRef.tb_ss__DOT__nvram__DOT__mem[11U] = 0xffU;
    __Vtask_tb_ss__DOT__eng_op__35__op = 2U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__35__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v24 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v24 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v24 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v25 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v25 = 1U;
    __Vtask_tb_ss__DOT__eng_load_block__36__corrupt = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__36__base = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__36__blk = 0U;
    __Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    tb_ss__DOT__eng_load_block__Vstatic__blk = __Vtask_tb_ss__DOT__eng_load_block__36__blk;
    tb_ss__DOT__eng_load_block__Vstatic__base = __Vtask_tb_ss__DOT__eng_load_block__36__base;
    tb_ss__DOT__eng_load_block__Vstatic__corrupt = __Vtask_tb_ss__DOT__eng_load_block__36__corrupt;
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v6 = 
        (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk));
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v6 = 1U;
    vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b = 0U;
    while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)) {
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
            = ((0U == tb_ss__DOT__eng_load_block__Vstatic__base)
                ? ((0xe5ffU >= (0x0000ffffU & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                               + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)))
                    ? vlSelfRef.tb_ss__DOT__imgA[(0x0000ffffU 
                                                  & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                                     + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))]
                    : 0U) : 0U);
        if ((((0U != tb_ss__DOT__eng_load_block__Vstatic__corrupt) 
              & (0U == tb_ss__DOT__eng_load_block__Vstatic__blk)) 
             & (8U == vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))) {
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                = (0x000000ffU & (~ (IData)(vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v)));
        }
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v3 
            = vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v;
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v3 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             284);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v6 = 1U;
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             286);
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v7 = 1U;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v7 
            = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_waddr));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v7 = 1U;
        __Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
        while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 289);
            __Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = (__Vtask_tb_ss__DOT__eng_load_block__36__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                   - (IData)(1U));
        }
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b 
            = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b);
    }
    tb_ss__DOT__timeout = 0U;
    while (((5U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
            & VL_GTS_III(32, 0x000186a0U, tb_ss__DOT__timeout))) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             621);
        tb_ss__DOT__timeout = ((IData)(1U) + tb_ss__DOT__timeout);
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__nvmon__v0 = 1U;
    tb_ss__DOT__f = 1U;
    while (VL_GTS_III(32, 0x00000073U, tb_ss__DOT__f)) {
        __Vtask_tb_ss__DOT__eng_load_block__37__corrupt = 0U;
        __Vtask_tb_ss__DOT__eng_load_block__37__base = 0U;
        __Vtask_tb_ss__DOT__eng_load_block__37__blk 
            = tb_ss__DOT__f;
        __Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        tb_ss__DOT__eng_load_block__Vstatic__blk = __Vtask_tb_ss__DOT__eng_load_block__37__blk;
        tb_ss__DOT__eng_load_block__Vstatic__base = __Vtask_tb_ss__DOT__eng_load_block__37__base;
        tb_ss__DOT__eng_load_block__Vstatic__corrupt 
            = __Vtask_tb_ss__DOT__eng_load_block__37__corrupt;
        vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v8 
            = (0x000fffffU & VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk));
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v8 = 1U;
        vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b = 0U;
        while (VL_GTS_III(32, 0x00000200U, vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)) {
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                = ((0U == tb_ss__DOT__eng_load_block__Vstatic__base)
                    ? ((0xe5ffU >= (0x0000ffffU & (
                                                   VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                                   + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b)))
                        ? vlSelfRef.tb_ss__DOT__imgA
                       [(0x0000ffffU & (VL_MULS_III(32, (IData)(0x00000200U), tb_ss__DOT__eng_load_block__Vstatic__blk) 
                                        + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))]
                        : 0U) : 0U);
            if ((((0U != tb_ss__DOT__eng_load_block__Vstatic__corrupt) 
                  & (0U == tb_ss__DOT__eng_load_block__Vstatic__blk)) 
                 & (8U == vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b))) {
                vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v 
                    = (0x000000ffU & (~ (IData)(vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v)));
            }
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v4 
                = vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v;
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v4 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 284);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v8 = 1U;
            Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                         "@(posedge tb_ss.clk_sys)");
            co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_ss.clk_sys)", 
                                                                 "tb_ss.v", 
                                                                 286);
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v9 = 1U;
            vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v9 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__tb_waddr));
            vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v9 = 1U;
            __Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
            while (VL_LTS_III(32, 0U, __Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                             "@(posedge tb_ss.clk_sys)");
                co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_ss.clk_sys)", 
                                                                     "tb_ss.v", 
                                                                     289);
                __Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_tb_ss__DOT__eng_load_block__37__tb_ss__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b 
                = ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b);
        }
        tb_ss__DOT__f = ((IData)(1U) + tb_ss__DOT__f);
    }
    vlSelfRef.__VdlySet__tb_ss__DOT__nvmon__v1 = 1U;
    VL_WRITEF_NX("batt: S_LOAD tb-wr_stb pulses=%0d engine-mem_req issues=%0d last=%05x\n",3
                 , '#',32,vlSelfRef.tb_ss__DOT__nvrstbcnt
                 , '#',32,vlSelfRef.tb_ss__DOT__nvwrcnt
                 , '#',17,vlSelfRef.tb_ss__DOT__lastwaddr);
    __Vtask_tb_ss__DOT__eng_op__38__op = 3U;
    tb_ss__DOT__eng_op__Vstatic__op = __Vtask_tb_ss__DOT__eng_op__38__op;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         231);
    vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v26 = tb_ss__DOT__eng_op__Vstatic__op;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v26 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v26 = 1U;
    Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                 "@(posedge tb_ss.clk_sys)");
    co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ss.clk_sys)", 
                                                         "tb_ss.v", 
                                                         233);
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v27 = 1U;
    vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v27 = 1U;
    tb_ss__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0x00000064U;
    while (VL_LTS_III(32, 0U, tb_ss__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        Vtb_ss___024root____VbeforeTrig_hbdcb3986__0(vlSelf, 
                                                     "@(posedge tb_ss.clk_sys)");
        co_await vlSelfRef.__VtrigSched_hbdcb3986__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ss.clk_sys)", 
                                                             "tb_ss.v", 
                                                             630);
        tb_ss__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (tb_ss__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    VL_WRITEF_NX("batt: post-load live nvram8-12=%02x%02x%02x%02x%02x\n",5
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[8U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[9U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[10U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[11U]
                 , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[12U]);
    if (((0x0aU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[10U]) 
         | (0x0bU != vlSelfRef.tb_ss__DOT__nvram__DOT__mem[11U]))) {
        VL_WRITEF_NX("FAIL: NVRAM rollback nvram10=%02x nvram11=%02x (expect 0A 0B)\n",2
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[10U]
                     , '#',8,vlSelfRef.tb_ss__DOT__nvram__DOT__mem[11U]);
        tb_ss__DOT__errors = ((IData)(1U) + tb_ss__DOT__errors);
    } else {
        VL_WRITEF_NX("battery: rollback ok\n",0);
    }
    if ((0U == tb_ss__DOT__errors)) {
        VL_WRITEF_NX("tb_ss: ALL PASSED\n",0);
    } else {
        VL_WRITEF_NX("tb_ss: %0d FAILURES\n",1, '~',32,tb_ss__DOT__errors);
    }
    VL_FINISH_MT("tb_ss.v", 642, "");
    co_return;
}

VlCoroutine Vtb_ss___024root___eval_initial__TOP__Vtiming__1(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002328ULL, 
                                             nullptr, 
                                             "tb_ss.v", 
                                             20);
        vlSelfRef.tb_ss__DOT__clk_sys = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__clk_sys)));
    }
    co_return;
}

bool Vtb_ss___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___trigger_anySet__ico\n"); );
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

extern const VlUnpacked<CData/*7:0*/, 64> Vtb_ss__ConstPool__TABLE_h5d47f540_0;

void Vtb_ss___024root___eval_triggers_vec__act(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_triggers_vec__act\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                        << 4U) 
                                                       | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle__0)) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR__0))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((0x0000003fU 
                                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr_h0a86ca6f__0)) 
                                                               << 3U) 
                                                              | ((Vtb_ss__ConstPool__TABLE_h5d47f540_0
                                                                  [
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))] 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr_hbd471de6__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v__0)))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet__0)))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r__0)))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux__0)))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16__0)) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr_h6c597b80__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle__0)))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r__0)))) 
                                                               << 4U) 
                                                              | (((((~ (IData)(vlSelfRef.tb_ss__DOT__clk_sys)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0)) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__fm__DOT__reset__0))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst__0))) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.tb_ss__DOT__clk_sys) 
                                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0)))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0 
        = vlSelfRef.tb_ss__DOT__clk_sys;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__fm__DOT__reset__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState;
    vlSelfRef.__Vtrigprevexpr_h6c597b80__0 = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v;
    vlSelfRef.__Vtrigprevexpr_hbd471de6__0 = Vtb_ss__ConstPool__TABLE_h5d47f540_0
        [(0x0000003fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))];
    vlSelfRef.__Vtrigprevexpr_h0a86ca6f__0 = (0x0000003fU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle__0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle;
}

bool Vtb_ss___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 32> Vtb_ss__ConstPool__TABLE_hb5a619ab_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_ss__ConstPool__TABLE_h8ae07725_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_ss__ConstPool__TABLE_hc38de69d_0;
extern const VlUnpacked<CData/*4:0*/, 32> Vtb_ss__ConstPool__TABLE_hb713fc5b_0;
extern const VlWide<16>/*511:0*/ Vtb_ss__ConstPool__CONST_h39c01a5a_0;

void Vtb_ss___024root___nba_sequent__TOP__0(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__Vfuncout;
    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a;
    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__Vfuncout;
    __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a;
    __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a = 0;
    IData/*16:0*/ __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__Vfuncout;
    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a;
    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*4:0*/ __Vdly__tb_ss__DOT__clkd;
    __Vdly__tb_ss__DOT__clkd = 0;
    CData/*2:0*/ __Vdly__tb_ss__DOT__ss_ack_s;
    __Vdly__tb_ss__DOT__ss_ack_s = 0;
    IData/*31:0*/ __Vdly__tb_ss__DOT__cyc;
    __Vdly__tb_ss__DOT__cyc = 0;
    IData/*31:0*/ __Vdly__tb_ss__DOT__cepix_cnt;
    __Vdly__tb_ss__DOT__cepix_cnt = 0;
    IData/*31:0*/ __Vdly__tb_ss__DOT__frames;
    __Vdly__tb_ss__DOT__frames = 0;
    QData/*63:0*/ __Vdly__tb_ss__DOT__h_video;
    __Vdly__tb_ss__DOT__h_video = 0;
    QData/*63:0*/ __Vdly__tb_ss__DOT__h_audio;
    __Vdly__tb_ss__DOT__h_audio = 0;
    CData/*3:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div = 0;
    SData/*9:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 = 0;
    SData/*9:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out = 0;
    SData/*9:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out = 0;
    SData/*10:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt = 0;
    SData/*15:0*/ __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle;
    __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle = 0;
    CData/*2:0*/ __Vdly__tb_ss__DOT__eng__DOT__state;
    __Vdly__tb_ss__DOT__eng__DOT__state = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__was_load;
    __Vdly__tb_ss__DOT__eng__DOT__was_load = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__hdr_ok;
    __Vdly__tb_ss__DOT__eng__DOT__hdr_ok = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__hdr_done;
    __Vdly__tb_ss__DOT__eng__DOT__hdr_done = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__ss_mem_req;
    __Vdly__tb_ss__DOT__ss_mem_req = 0;
    IData/*16:0*/ __Vdly__tb_ss__DOT__ss_mem_addr;
    __Vdly__tb_ss__DOT__ss_mem_addr = 0;
    CData/*1:0*/ __Vdly__tb_ss__DOT__eng__DOT__ack_s;
    __Vdly__tb_ss__DOT__eng__DOT__ack_s = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__wr_pend;
    __Vdly__tb_ss__DOT__eng__DOT__wr_pend = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__rd_pend;
    __Vdly__tb_ss__DOT__eng__DOT__rd_pend = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__rd_out;
    __Vdly__tb_ss__DOT__eng__DOT__rd_out = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__resync;
    __Vdly__tb_ss__DOT__eng__DOT__resync = 0;
    CData/*4:0*/ __Vdly__tb_ss__DOT__eng__DOT__rd_lat;
    __Vdly__tb_ss__DOT__eng__DOT__rd_lat = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__fast_rdy;
    __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 0;
    IData/*28:0*/ __Vdly__tb_ss__DOT__eng__DOT__wdog;
    __Vdly__tb_ss__DOT__eng__DOT__wdog = 0;
    IData/*26:0*/ __Vdly__tb_ss__DOT__eng__DOT__wait_cnt;
    __Vdly__tb_ss__DOT__eng__DOT__wait_cnt = 0;
    CData/*6:0*/ __Vdly__tb_ss__DOT__eng__DOT__settle_cnt;
    __Vdly__tb_ss__DOT__eng__DOT__settle_cnt = 0;
    IData/*18:0*/ __Vdly__tb_ss__DOT__eng__DOT__vram_bytes;
    __Vdly__tb_ss__DOT__eng__DOT__vram_bytes = 0;
    IData/*18:0*/ __Vdly__tb_ss__DOT__eng__DOT__wram_bytes;
    __Vdly__tb_ss__DOT__eng__DOT__wram_bytes = 0;
    IData/*19:0*/ __Vdly__tb_ss__DOT__eng__DOT__total_bytes;
    __Vdly__tb_ss__DOT__eng__DOT__total_bytes = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__chk_magic;
    __Vdly__tb_ss__DOT__eng__DOT__chk_magic = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__chk_ver;
    __Vdly__tb_ss__DOT__eng__DOT__chk_ver = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__chk_core;
    __Vdly__tb_ss__DOT__eng__DOT__chk_core = 0;
    CData/*7:0*/ __Vdly__tb_ss__DOT__eng__DOT__pend_din;
    __Vdly__tb_ss__DOT__eng__DOT__pend_din = 0;
    IData/*16:0*/ __Vdly__tb_ss__DOT__eng__DOT__pend_addr;
    __Vdly__tb_ss__DOT__eng__DOT__pend_addr = 0;
    CData/*7:0*/ __Vdly__tb_ss__DOT__eng__DOT__fast_q;
    __Vdly__tb_ss__DOT__eng__DOT__fast_q = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__eng__DOT__fast_sel;
    __Vdly__tb_ss__DOT__eng__DOT__fast_sel = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__HS;
    __Vdly__tb_ss__DOT__HS = 0;
    CData/*0:0*/ __VdlyMask__tb_ss__DOT__HS;
    __VdlyMask__tb_ss__DOT__HS = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__VS;
    __Vdly__tb_ss__DOT__VS = 0;
    CData/*0:0*/ __VdlyMask__tb_ss__DOT__VS;
    __VdlyMask__tb_ss__DOT__VS = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__HBlank;
    __Vdly__tb_ss__DOT__HBlank = 0;
    CData/*0:0*/ __VdlyMask__tb_ss__DOT__HBlank;
    __VdlyMask__tb_ss__DOT__HBlank = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__VBlank;
    __Vdly__tb_ss__DOT__VBlank = 0;
    CData/*0:0*/ __VdlyMask__tb_ss__DOT__VBlank;
    __VdlyMask__tb_ss__DOT__VBlank = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v1;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v2;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v3;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v4;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v5;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v6;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v7;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8;
    __VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v1;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v2;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v3;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v4;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v4 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v5;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v5 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v6;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v6 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v7;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v7 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8;
    __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 = 0;
    CData/*2:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8;
    __VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__nvram__DOT__mem__v0;
    __VdlyVal__tb_ss__DOT__nvram__DOT__mem__v0 = 0;
    SData/*14:0*/ __VdlyDim0__tb_ss__DOT__nvram__DOT__mem__v0;
    __VdlyDim0__tb_ss__DOT__nvram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__nvram__DOT__mem__v0;
    __VdlySet__tb_ss__DOT__nvram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_ss__DOT__wram__DOT__mem__v0;
    __VdlyVal__tb_ss__DOT__wram__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_ss__DOT__wram__DOT__mem__v0;
    __VdlyDim0__tb_ss__DOT__wram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__wram__DOT__mem__v0;
    __VdlySet__tb_ss__DOT__wram__DOT__mem__v0 = 0;
    // Body
    __Vdly__tb_ss__DOT__ss_ack_s = vlSelfRef.tb_ss__DOT__ss_ack_s;
    __VdlySet__tb_ss__DOT__wram__DOT__mem__v0 = 0U;
    __VdlySet__tb_ss__DOT__nvram__DOT__mem__v0 = 0U;
    __Vdly__tb_ss__DOT__clkd = vlSelfRef.tb_ss__DOT__clkd;
    __Vdly__tb_ss__DOT__cepix_cnt = vlSelfRef.tb_ss__DOT__cepix_cnt;
    __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle 
        = vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__toggle;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0 = 0U;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 = 0U;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0 = 0U;
    __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 = 0U;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__bootloader_n 
        = vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__out2;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt;
    __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift 
        = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift;
    __Vdly__tb_ss__DOT__h_video = vlSelfRef.tb_ss__DOT__h_video;
    __Vdly__tb_ss__DOT__h_audio = vlSelfRef.tb_ss__DOT__h_audio;
    __Vdly__tb_ss__DOT__frames = vlSelfRef.tb_ss__DOT__frames;
    vlSelfRef.__Vdly__tb_ss__DOT__ss_din = vlSelfRef.tb_ss__DOT__ss_din;
    __Vdly__tb_ss__DOT__eng__DOT__was_load = vlSelfRef.tb_ss__DOT__eng__DOT__was_load;
    __Vdly__tb_ss__DOT__eng__DOT__hdr_ok = vlSelfRef.tb_ss__DOT__eng__DOT__hdr_ok;
    __Vdly__tb_ss__DOT__eng__DOT__hdr_done = vlSelfRef.tb_ss__DOT__eng__DOT__hdr_done;
    __Vdly__tb_ss__DOT__ss_mem_req = vlSelfRef.tb_ss__DOT__ss_mem_req;
    __Vdly__tb_ss__DOT__eng__DOT__ack_s = vlSelfRef.tb_ss__DOT__eng__DOT__ack_s;
    __Vdly__tb_ss__DOT__eng__DOT__wr_pend = vlSelfRef.tb_ss__DOT__eng__DOT__wr_pend;
    __Vdly__tb_ss__DOT__eng__DOT__rd_pend = vlSelfRef.tb_ss__DOT__eng__DOT__rd_pend;
    __Vdly__tb_ss__DOT__eng__DOT__rd_out = vlSelfRef.tb_ss__DOT__eng__DOT__rd_out;
    __Vdly__tb_ss__DOT__eng__DOT__resync = vlSelfRef.tb_ss__DOT__eng__DOT__resync;
    __Vdly__tb_ss__DOT__eng__DOT__rd_lat = vlSelfRef.tb_ss__DOT__eng__DOT__rd_lat;
    __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = vlSelfRef.tb_ss__DOT__eng__DOT__fast_rdy;
    __Vdly__tb_ss__DOT__eng__DOT__wdog = vlSelfRef.tb_ss__DOT__eng__DOT__wdog;
    __Vdly__tb_ss__DOT__eng__DOT__wait_cnt = vlSelfRef.tb_ss__DOT__eng__DOT__wait_cnt;
    __Vdly__tb_ss__DOT__eng__DOT__settle_cnt = vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt;
    __Vdly__tb_ss__DOT__eng__DOT__vram_bytes = vlSelfRef.tb_ss__DOT__eng__DOT__vram_bytes;
    __Vdly__tb_ss__DOT__eng__DOT__wram_bytes = vlSelfRef.tb_ss__DOT__eng__DOT__wram_bytes;
    __Vdly__tb_ss__DOT__eng__DOT__total_bytes = vlSelfRef.tb_ss__DOT__eng__DOT__total_bytes;
    __Vdly__tb_ss__DOT__eng__DOT__chk_magic = vlSelfRef.tb_ss__DOT__eng__DOT__chk_magic;
    __Vdly__tb_ss__DOT__eng__DOT__chk_ver = vlSelfRef.tb_ss__DOT__eng__DOT__chk_ver;
    __Vdly__tb_ss__DOT__eng__DOT__chk_core = vlSelfRef.tb_ss__DOT__eng__DOT__chk_core;
    __Vdly__tb_ss__DOT__eng__DOT__pend_din = vlSelfRef.tb_ss__DOT__eng__DOT__pend_din;
    __Vdly__tb_ss__DOT__eng__DOT__pend_addr = vlSelfRef.tb_ss__DOT__eng__DOT__pend_addr;
    __Vdly__tb_ss__DOT__eng__DOT__fast_q = vlSelfRef.tb_ss__DOT__eng__DOT__fast_q;
    __Vdly__tb_ss__DOT__eng__DOT__fast_sel = vlSelfRef.tb_ss__DOT__eng__DOT__fast_sel;
    vlSelfRef.__Vdly__tb_ss__DOT__ss_we = vlSelfRef.tb_ss__DOT__ss_we;
    __Vdly__tb_ss__DOT__ss_mem_addr = vlSelfRef.tb_ss__DOT__ss_mem_addr;
    __Vdly__tb_ss__DOT__eng__DOT__state = vlSelfRef.tb_ss__DOT__eng__DOT__state;
    vlSelfRef.__Vdly__tb_ss__DOT__ss_a = vlSelfRef.tb_ss__DOT__ss_a;
    __Vdly__tb_ss__DOT__cyc = vlSelfRef.tb_ss__DOT__cyc;
    if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (0x003cU 
                                                 == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
        __Vdly__tb_ss__DOT__VBlank = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                            >> 4U));
        __VdlyMask__tb_ss__DOT__VBlank = 1U;
        __Vdly__tb_ss__DOT__HBlank = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                            >> 5U));
        __VdlyMask__tb_ss__DOT__HBlank = 1U;
    } else if (vlSelfRef.tb_ss__DOT__ce_pix_g) {
        if ((0U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
            __Vdly__tb_ss__DOT__VBlank = 0U;
            __VdlyMask__tb_ss__DOT__VBlank = 1U;
        } else if (((IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount) 
                    == ((IData)(vlSelfRef.tb_ss__DOT__smode_M1)
                         ? 0x00e0U : ((IData)(vlSelfRef.tb_ss__DOT__smode_M3)
                                       ? 0x00f0U : 0x00c0U)))) {
            __Vdly__tb_ss__DOT__VBlank = 1U;
            __VdlyMask__tb_ss__DOT__VBlank = 1U;
        }
        if ((0U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))) {
            __Vdly__tb_ss__DOT__HBlank = 0U;
            __VdlyMask__tb_ss__DOT__HBlank = 1U;
        } else if ((0x0100U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))) {
            __Vdly__tb_ss__DOT__HBlank = 1U;
            __VdlyMask__tb_ss__DOT__HBlank = 1U;
        }
    }
    if (vlSelfRef.tb_ss__DOT__ss_we) {
        if ((0x0038U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
            vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount 
                = ((0x0100U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount)) 
                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount 
                = (0x000000ffU | (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount));
        } else if ((0x0039U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
            vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount 
                = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount)) 
                   | (0x00000100U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                     << 8U)));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount 
                = (0x00000100U | (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount));
        } else if ((0x003aU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
            vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount 
                = ((0x0100U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount)) 
                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount 
                = (0x000000ffU | (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount));
        } else if ((0x003bU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
            vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount 
                = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount)) 
                   | (0x00000100U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                     << 8U)));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount 
                = (0x00000100U | (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount));
        } else if ((0x003cU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
            __Vdly__tb_ss__DOT__HS = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                            >> 7U));
            __VdlyMask__tb_ss__DOT__HS = 1U;
            __Vdly__tb_ss__DOT__VS = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                            >> 6U));
            __VdlyMask__tb_ss__DOT__VS = 1U;
        }
    } else if (vlSelfRef.tb_ss__DOT__ce_pix_g) {
        if ((0x01e7U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))) {
            vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount)));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount = 0x01ffU;
            if (vlSelfRef.tb_ss__DOT__smode_M1) {
                if ((0x00eaU == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount = 0x01e5U;
                    vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount = 0x01ffU;
                } else if ((0x01e7U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                    __Vdly__tb_ss__DOT__VS = 1U;
                    __VdlyMask__tb_ss__DOT__VS = 1U;
                } else if ((0x01eaU == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                    __Vdly__tb_ss__DOT__VS = 0U;
                    __VdlyMask__tb_ss__DOT__VS = 1U;
                }
            } else if (vlSelfRef.tb_ss__DOT__smode_M3) {
                if ((0x0105U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount = 0U;
                    vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount = 0x01ffU;
                } else if ((0x0101U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                    __Vdly__tb_ss__DOT__VS = 1U;
                    __VdlyMask__tb_ss__DOT__VS = 1U;
                } else if ((0x0104U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                    __Vdly__tb_ss__DOT__VS = 0U;
                    __VdlyMask__tb_ss__DOT__VS = 1U;
                }
            } else if ((0x00daU == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount = 0x01d5U;
                vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount = 0x01ffU;
            } else if ((0x01d7U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                __Vdly__tb_ss__DOT__VS = 1U;
                __VdlyMask__tb_ss__DOT__VS = 1U;
            } else if ((0x01daU == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount))) {
                __Vdly__tb_ss__DOT__VS = 0U;
                __VdlyMask__tb_ss__DOT__VS = 1U;
            }
        }
        vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount 
            = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount)));
        vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount = 0x01ffU;
        if ((0x0127U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))) {
            vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount = 0x01d2U;
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount = 0x01ffU;
        }
        if ((0x0118U == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))) {
            __Vdly__tb_ss__DOT__HS = 1U;
            __VdlyMask__tb_ss__DOT__HS = 1U;
        } else if ((0x01daU == (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))) {
            __Vdly__tb_ss__DOT__HS = 0U;
            __VdlyMask__tb_ss__DOT__HS = 1U;
        }
    }
    __Vdly__tb_ss__DOT__ss_ack_s = ((6U & ((IData)(vlSelfRef.tb_ss__DOT__ss_ack_s) 
                                           << 1U)) 
                                    | (IData)(vlSelfRef.tb_ss__DOT__ss_mem_req));
    if (vlSelfRef.tb_ss__DOT____Vcellinp__wram__wren) {
        __VdlyVal__tb_ss__DOT__wram__DOT__mem__v0 = vlSelfRef.tb_ss__DOT____Vcellinp__wram__data;
        __VdlyDim0__tb_ss__DOT__wram__DOT__mem__v0 
            = vlSelfRef.tb_ss__DOT____Vcellinp__wram__address;
        __VdlySet__tb_ss__DOT__wram__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.tb_ss__DOT____Vcellinp__nvram__wren_a) {
        __VdlyVal__tb_ss__DOT__nvram__DOT__mem__v0 
            = vlSelfRef.tb_ss__DOT____Vcellinp__wram__data;
        __VdlyDim0__tb_ss__DOT__nvram__DOT__mem__v0 
            = vlSelfRef.tb_ss__DOT____Vcellinp__nvram__address_a;
        __VdlySet__tb_ss__DOT__nvram__DOT__mem__v0 = 1U;
    }
    if ((((IData)(vlSelfRef.tb_ss__DOT__nvmon) & (5U 
                                                  == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) 
         & (IData)(vlSelfRef.tb_ss__DOT__tb_wr_stb))) {
        vlSelfRef.tb_ss__DOT__nvrstbcnt = ((IData)(1U) 
                                           + vlSelfRef.tb_ss__DOT__nvrstbcnt);
    }
    if ((((IData)(vlSelfRef.tb_ss__DOT__nvmon) & (5U 
                                                  == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) 
         & ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_req) 
            != (IData)(vlSelfRef.tb_ss__DOT__eng_mem_req_prev)))) {
        vlSelfRef.tb_ss__DOT__nvwrcnt = ((IData)(1U) 
                                         + vlSelfRef.tb_ss__DOT__nvwrcnt);
        vlSelfRef.tb_ss__DOT__lastwaddr = vlSelfRef.tb_ss__DOT__ss_mem_addr;
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we) {
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0 
            = (0x000000ffU & vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[0U]);
        __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0 = 1U;
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v1 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[0U] 
                              >> 0x00000010U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v2 
            = (0x000000ffU & vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[1U]);
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v3 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[1U] 
                              >> 0x00000010U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v4 
            = (0x000000ffU & vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[2U]);
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v5 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[2U] 
                              >> 0x00000010U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v6 
            = (0x000000ffU & vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[3U]);
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v7 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[3U] 
                              >> 0x00000010U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[0U] 
                              >> 8U));
        __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0 = 1U;
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v1 
            = (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[0U] 
               >> 0x00000018U);
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v2 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[1U] 
                              >> 8U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v3 
            = (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[1U] 
               >> 0x00000018U);
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v4 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[2U] 
                              >> 8U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v5 
            = (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[2U] 
               >> 0x00000018U);
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v6 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[3U] 
                              >> 8U));
        __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v7 
            = (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[3U] 
               >> 0x00000018U);
    } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL) {
            __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL;
            __VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA;
            __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8 = 1U;
        }
        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH) {
            __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH;
            __VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA;
            __VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8 = 1U;
        }
    }
    if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) 
         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise))) {
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift = 0x8000U;
    } else if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel)) 
                & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                      >> 1U)))) {
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift 
            = ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                ? ((0x00ffU & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift)) 
                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                      << 8U)) : ((0xff00U & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift)) 
                                 | (IData)(vlSelfRef.tb_ss__DOT__ss_din)));
    } else if (vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) {
        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt))) {
            __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift 
                = ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift))
                    ? ((0x00008000U & (((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3))
                                         ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift) 
                                            ^ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift) 
                                               >> 3U))
                                         : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift)) 
                                       << 0x0000000fU)) 
                       | (0x00007fffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift) 
                                         >> 1U))) : 0x8000U);
        }
    }
    __Vdly__tb_ss__DOT__cyc = ((IData)(1U) + vlSelfRef.tb_ss__DOT__cyc);
    if (VL_UNLIKELY(((0U == VL_MODDIV_III(32, vlSelfRef.tb_ss__DOT__cyc, (IData)(0x001e8480U)))))) {
        VL_WRITEF_NX("cyc=%0d t=%0t frames=%0d vcount=%0d hcount=%0d pc=%04x reset=%b ssfrz=%b cepix=%b cecpu=%b clkd=%0d state=%0d\n",13, 'T',-9
                     , '#',32,vlSelfRef.tb_ss__DOT__cyc
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.tb_ss__DOT__frames
                     , '#',9,(IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount)
                     , '#',9,vlSelfRef.tb_ss__DOT__vid__DOT__hcount
                     , '#',16,(IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A)
                     , '#',1,vlSelfRef.tb_ss__DOT__reset
                     , '#',1,(IData)(vlSelfRef.tb_ss__DOT__ss_freeze)
                     , '#',1,vlSelfRef.tb_ss__DOT__ce_pix
                     , '#',1,(IData)(vlSelfRef.tb_ss__DOT__ce_cpu)
                     , '#',5,vlSelfRef.tb_ss__DOT__clkd
                     , '#',3,(IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state) 
                      != (IData)(vlSelfRef.tb_ss__DOT__state_prev))))) {
        VL_WRITEF_NX("eng %0d->%0d was_load=%b err=%b freeze=%b loaded=%b t=%0t\n",8, 'T',-9
                     , '#',3,vlSelfRef.tb_ss__DOT__state_prev
                     , '#',3,(IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)
                     , '#',1,vlSelfRef.tb_ss__DOT__eng__DOT__was_load
                     , '#',1,(IData)(vlSelfRef.tb_ss__DOT__eng__DOT__err)
                     , '#',1,vlSelfRef.tb_ss__DOT__ss_freeze
                     , '#',1,(IData)(vlSelfRef.tb_ss__DOT__ss_loaded)
                     , '#',64,VL_TIME_UNITED_Q(1000));
        vlSelfRef.tb_ss__DOT__state_prev = vlSelfRef.tb_ss__DOT__eng__DOT__state;
    }
    if (vlSelfRef.tb_ss__DOT__stat_rst) {
        __Vdly__tb_ss__DOT__cepix_cnt = 0U;
        __Vdly__tb_ss__DOT__h_video = 0ULL;
        __Vdly__tb_ss__DOT__h_audio = 0ULL;
        __Vdly__tb_ss__DOT__frames = 0U;
    } else {
        if (VL_UNLIKELY((((IData)(vlSelfRef.tb_ss__DOT__VS) 
                          & (~ (0U != vlSelfRef.tb_ss__DOT__vsync_prev)))))) {
            __Vdly__tb_ss__DOT__cepix_cnt = 0U;
            __Vdly__tb_ss__DOT__frames = ((IData)(1U) 
                                          + vlSelfRef.tb_ss__DOT__frames);
            VL_WRITEF_NX("frame %0d t=%0t wram0=%02x cepix=%0d disp=%b firqen=%b vbl=%b hbl=%b irqn=%b inte=%b\n",11, 'T',-9
                         , '~',32,((IData)(1U) + vlSelfRef.tb_ss__DOT__frames)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',8,vlSelfRef.tb_ss__DOT__wram__DOT__mem[0U]
                         , '#',32,vlSelfRef.tb_ss__DOT__cepix_cnt
                         , '#',1,(IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.display_on)
                         , '#',1,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.irq_frame_en
                         , '#',1,(IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vbl_irq)
                         , '#',1,vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.hbl_irq
                         , '#',1,(IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.IRQ_n)
                         , '#',1,vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1);
            vlSelfRef.tb_ss__DOT__frame_vh = vlSelfRef.tb_ss__DOT__h_video;
            vlSelfRef.tb_ss__DOT__frame_ah = vlSelfRef.tb_ss__DOT__h_audio;
        } else if (vlSelfRef.tb_ss__DOT__ce_pix_g) {
            __Vdly__tb_ss__DOT__cepix_cnt = ((IData)(1U) 
                                             + vlSelfRef.tb_ss__DOT__cepix_cnt);
        }
        if (vlSelfRef.tb_ss__DOT__vsync_prev2) {
            __Vdly__tb_ss__DOT__h_video = 0ULL;
            __Vdly__tb_ss__DOT__h_audio = 0ULL;
        } else if (vlSelfRef.tb_ss__DOT__ce_pix_g) {
            __Vdly__tb_ss__DOT__h_video = ((0x00000100000001b3ULL 
                                            * vlSelfRef.tb_ss__DOT__h_video) 
                                           ^ (((QData)((IData)(
                                                               (0x00000fffU 
                                                                & ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M4)
                                                                    ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__cram_vdp_D)
                                                                    : 
                                                                   (((2U 
                                                                      == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                      ? 0x04a2U
                                                                      : 
                                                                     ((3U 
                                                                       == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                       ? 0x07e6U
                                                                       : 
                                                                      ((4U 
                                                                        == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                        ? 0x0f55U
                                                                        : 
                                                                       ((5U 
                                                                         == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                         ? 0x0f88U
                                                                         : 
                                                                        ((6U 
                                                                          == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                          ? 0x055dU
                                                                          : 
                                                                         ((7U 
                                                                           == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                           ? 0x0ff4U
                                                                           : 
                                                                          ((8U 
                                                                            == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                            ? 0x055fU
                                                                            : 
                                                                           ((9U 
                                                                             == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                             ? 0x088fU
                                                                             : 
                                                                            ((0x0aU 
                                                                              == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                              ? 0x05ddU
                                                                              : 
                                                                             ((0x0bU 
                                                                               == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                               ? 0x08deU
                                                                               : 
                                                                              ((0x0cU 
                                                                                == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                                ? 0x04b2U
                                                                                : 
                                                                               ((0x0dU 
                                                                                == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))
                                                                                 ? 0x0a6bU
                                                                                 : 
                                                                                (0x0bbbU 
                                                                                | (- (IData)(
                                                                                (0x0eU 
                                                                                != (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color))))))))))))))))) 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                ((0U 
                                                                                == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color)) 
                                                                                | (1U 
                                                                                == (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__out_color)))))))))))) 
                                               << 9U) 
                                              | (QData)((IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount))));
            __Vdly__tb_ss__DOT__h_audio = ((0x00000100000001b3ULL 
                                            * vlSelfRef.tb_ss__DOT__h_audio) 
                                           ^ (QData)((IData)(
                                                             (((IData)(vlSelfRef.tb_ss__DOT__audio_l) 
                                                               << 0x00000010U) 
                                                              | (IData)(vlSelfRef.tb_ss__DOT__audio_r)))));
        }
    }
    if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) 
         | (6U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outR = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outL = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__noise = 0U;
    } else {
        vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outR = 
            (0x000007ffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                             & (- (IData)((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux))))) 
                            + (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                               >> 1U))))) 
                               + (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                                    >> 3U))))) 
                                  + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                                      >> 2U)))))))));
        vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outL = 
            (0x000007ffU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                             & (- (IData)((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                                 >> 4U))))) 
                            + (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                                & (- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                               >> 5U))))) 
                               + (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                                    >> 7U))))) 
                                  + ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux) 
                                                      >> 6U)))))))));
        if (vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) {
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2 
                = (0x000001ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__out2)
                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__u_vol__DOT__max)
                                   : (- (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__u_vol__DOT__max))));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1 
                = (0x000001ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out)
                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__u_vol__DOT__max)
                                   : (- (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__u_vol__DOT__max))));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0 
                = (0x000001ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out)
                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__u_vol__DOT__max)
                                   : (- (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__u_vol__DOT__max))));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__noise 
                = (0x000001ffU & ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift))
                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__u_vol__DOT__max)
                                   : (- (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__u_vol__DOT__max))));
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB_r 
            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)))) 
             & (0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB_r 
                = (3U | (4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA_r 
            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)))) 
             & (0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA_r 
                = (3U | (4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State) 
                               << 1U)));
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC 
            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To)));
        if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY) 
             | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC 
                = (2U | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                         << 2U));
        }
        if (((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY) 
               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL)) 
              & (0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) 
             | (6U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC 
                = (3U | (4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State) 
                               << 1U)));
        }
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__boot_rom_D_out 
        = vlSelfRef.tb_ss__DOT__sys__DOT__boot_rom_inst__DOT__mem
        [(0x00003fffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))];
    if ((1U & (~ ((~ (IData)(((0x00c0U == (0x00c0U 
                                           & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                  | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__RD_n))))) {
        if ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                    = ((0x7fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out)) 
                       | (((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                  >> 3U)) || (1U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                               >> 7U))) 
                          << 7U));
                vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                    = ((0x8fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out)) 
                       | (0x00000030U | (((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                                 >> 1U)) 
                                          || (1U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                               >> 5U))) 
                                         << 6U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                    = ((0xf0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out)) 
                       | (7U | (((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                        >> 2U)) || 
                                 (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                        >> 6U))) << 3U)));
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                    = ((0x1fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out)) 
                       | (0x000000c0U | (((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl)) 
                                          || (1U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                               >> 4U))) 
                                         << 5U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                    = (0x0000001fU | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out));
            }
        } else if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out = 0xffU;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                    = ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                        ? 0x38U : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_rxd));
            }
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out 
                = ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                    ? ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                        ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_txd)
                        : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr))
                    : ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                        ? ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr)) 
                           | (0x0000007fU & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr)) 
                                             | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr))))
                        : 0xffU));
        }
    }
    vlSelfRef.tb_ss__DOT__rom_do = vlSelfRef.tb_ss__DOT__rom__DOT__mem
        [((0x00006000U & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx)
                            ? ((0x00008000U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                                ? ((0x00004000U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                                    ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                       >> 0x0000000dU)
                                    : ((0x00002000U 
                                        & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                                        ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank3)
                                        : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank2)))
                                : ((0x00004000U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                                    ? ((0x00002000U 
                                        & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))
                                        ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank1)
                                        : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank0))
                                    : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                       >> 0x0000000dU)))
                            : ((2U & (((0U == (3U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                                >> 0x0000000eU)))
                                        ? ((~ ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies)) 
                                               & (0U 
                                                  == 
                                                  (0x3c00U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))) 
                                           & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank0))
                                        : ((1U == (3U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                                      >> 0x0000000eU)))
                                            ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank1)
                                            : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank2))) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                                    >> 0x0000000dU)))) 
                          << 0x0000000dU)) | (0x00001fffU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A)))];
    if (vlSelfRef.tb_ss__DOT__ss_loaded) {
        vlSelfRef.tb_ss__DOT__ss_loaded_seen = 1U;
    }
    if (vlSelfRef.tb_ss__DOT__reset) {
        vlSelfRef.tb_ss__DOT__ss_loaded_seen = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__state = 0U;
        vlSelfRef.tb_ss__DOT__ss_freeze = 0U;
        vlSelfRef.tb_ss__DOT__ss_reset = 0U;
        vlSelfRef.tb_ss__DOT__ss_loaded = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__ss_we = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__ss_a = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__ss_din = 0U;
        vlSelfRef.tb_ss__DOT__eng__DOT__err = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__was_load = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__hdr_ok = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__hdr_done = 0U;
        vlSelfRef.tb_ss__DOT__ss_img_rdy = 0U;
        vlSelfRef.tb_ss__DOT__ss_img_q = 0U;
        __Vdly__tb_ss__DOT__ss_mem_req = 0U;
        __Vdly__tb_ss__DOT__ss_mem_addr = 0U;
        vlSelfRef.tb_ss__DOT__ss_mem_din = 0U;
        vlSelfRef.tb_ss__DOT__ss_mem_we = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__ack_s = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__wr_pend = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__rd_pend = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__rd_out = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__resync = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__rd_lat = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__wdog = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__wait_cnt = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__settle_cnt = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__vram_bytes = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__wram_bytes = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__total_bytes = 0U;
    } else {
        vlSelfRef.__Vdly__tb_ss__DOT__ss_we = 0U;
        vlSelfRef.tb_ss__DOT__ss_loaded = 0U;
        __Vdly__tb_ss__DOT__eng__DOT__ack_s = ((2U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__ack_s) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.tb_ss__DOT__ss_ack_s) 
                                                     >> 2U)));
        if (((((IData)(vlSelfRef.tb_ss__DOT__tb_op_stb) 
               | (IData)(vlSelfRef.tb_ss__DOT__tb_rd_stb)) 
              | (IData)(vlSelfRef.tb_ss__DOT__tb_wr_stb)) 
             | (IData)(vlSelfRef.tb_ss__DOT__tb_taken))) {
            __Vdly__tb_ss__DOT__eng__DOT__wdog = 0U;
        } else if ((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
            __Vdly__tb_ss__DOT__eng__DOT__wdog = (0x1fffffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.tb_ss__DOT__eng__DOT__wdog));
        }
        if (vlSelfRef.tb_ss__DOT__tb_op_stb) {
            if ((4U & (IData)(vlSelfRef.tb_ss__DOT__tb_op))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__tb_op) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__tb_op)))) {
                        __Vdly__tb_ss__DOT__ss_mem_req 
                            = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_mem_req)));
                        __Vdly__tb_ss__DOT__eng__DOT__state = 0U;
                        vlSelfRef.tb_ss__DOT__ss_freeze = 0U;
                        vlSelfRef.tb_ss__DOT__ss_reset = 0U;
                        vlSelfRef.tb_ss__DOT__ss_img_rdy = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__wr_pend = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__rd_pend = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__rd_out = 0U;
                        vlSelfRef.tb_ss__DOT__ss_mem_we = 0U;
                        __Vdly__tb_ss__DOT__ss_mem_addr = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__resync = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.tb_ss__DOT__tb_op))) {
                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__tb_op))) {
                    if (((2U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
                         | (5U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)))) {
                        __Vdly__tb_ss__DOT__eng__DOT__settle_cnt = 0x40U;
                        __Vdly__tb_ss__DOT__eng__DOT__state = 6U;
                    }
                } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm_touched) {
                        vlSelfRef.tb_ss__DOT__eng__DOT__err = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__eng__DOT__err = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__was_load = 1U;
                        __Vdly__tb_ss__DOT__eng__DOT__hdr_ok = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__hdr_done = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__chk_magic = 1U;
                        __Vdly__tb_ss__DOT__eng__DOT__chk_ver = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__chk_core = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__vram_bytes = 0x00004000U;
                        __Vdly__tb_ss__DOT__eng__DOT__wram_bytes = 0x00002000U;
                        __Vdly__tb_ss__DOT__eng__DOT__total_bytes = 0x0000e600U;
                        vlSelfRef.tb_ss__DOT__ss_freeze = 1U;
                        __Vdly__tb_ss__DOT__eng__DOT__state = 3U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__tb_op))) {
                if ((0U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm_touched) {
                        vlSelfRef.tb_ss__DOT__eng__DOT__err = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__eng__DOT__err = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__was_load = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__vram_bytes = 0x00004000U;
                        __Vdly__tb_ss__DOT__eng__DOT__wram_bytes = 0x00002000U;
                        __Vdly__tb_ss__DOT__eng__DOT__total_bytes = 0x0000e600U;
                        __Vdly__tb_ss__DOT__eng__DOT__wait_cnt = 0U;
                        __Vdly__tb_ss__DOT__eng__DOT__state = 1U;
                    }
                }
            }
        } else if (((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
                    & (0x1fffffffU == vlSelfRef.tb_ss__DOT__eng__DOT__wdog))) {
            __Vdly__tb_ss__DOT__ss_mem_req = (1U & 
                                              (~ (IData)(vlSelfRef.tb_ss__DOT__ss_mem_req)));
            __Vdly__tb_ss__DOT__eng__DOT__state = 0U;
            vlSelfRef.tb_ss__DOT__ss_freeze = 0U;
            vlSelfRef.tb_ss__DOT__ss_reset = 0U;
            vlSelfRef.tb_ss__DOT__ss_img_rdy = 0U;
            __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 0U;
            __Vdly__tb_ss__DOT__eng__DOT__wr_pend = 0U;
            __Vdly__tb_ss__DOT__eng__DOT__rd_pend = 0U;
            __Vdly__tb_ss__DOT__eng__DOT__rd_out = 0U;
            vlSelfRef.tb_ss__DOT__ss_mem_we = 0U;
            __Vdly__tb_ss__DOT__ss_mem_addr = 0U;
            __Vdly__tb_ss__DOT__eng__DOT__resync = 1U;
            vlSelfRef.tb_ss__DOT__eng__DOT__err = 1U;
        }
        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)))) {
                    if (((0U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt)) 
                         & (0U == (IData)(vlSelfRef.tb_ss__DOT__clkd)))) {
                        vlSelfRef.tb_ss__DOT__ss_freeze = 0U;
                        if (vlSelfRef.tb_ss__DOT__eng__DOT__was_load) {
                            vlSelfRef.tb_ss__DOT__ss_loaded = 1U;
                        }
                        __Vdly__tb_ss__DOT__eng__DOT__state = 0U;
                    } else if ((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt))) {
                        __Vdly__tb_ss__DOT__eng__DOT__settle_cnt 
                            = (0x0000007fU & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt) 
                                              - (IData)(1U)));
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)))) {
                if ((0x10U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt))) {
                    vlSelfRef.tb_ss__DOT__ss_reset = 0U;
                }
                if ((0U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt))) {
                    __Vdly__tb_ss__DOT__eng__DOT__state = 5U;
                } else {
                    __Vdly__tb_ss__DOT__eng__DOT__settle_cnt 
                        = (0x0000007fU & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt) 
                                          - (IData)(1U)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                if (vlSelfRef.tb_ss__DOT__eng__DOT__hdr_done) {
                    __Vdly__tb_ss__DOT__eng__DOT__hdr_done = 0U;
                    if (vlSelfRef.tb_ss__DOT__eng__DOT__hdr_ok) {
                        __Vdly__tb_ss__DOT__eng__DOT__settle_cnt = 0x20U;
                        vlSelfRef.tb_ss__DOT__ss_reset = 1U;
                        __Vdly__tb_ss__DOT__eng__DOT__state = 4U;
                    } else {
                        vlSelfRef.tb_ss__DOT__eng__DOT__err = 1U;
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
            __Vdly__tb_ss__DOT__eng__DOT__wait_cnt 
                = (0x07ffffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__eng__DOT__wait_cnt));
            if ((((IData)(vlSelfRef.tb_ss__DOT__VBlank) 
                  & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__M1_n)) 
                     & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n)) 
                        & ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                           & ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                              & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle)) 
                                 & ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet)) 
                                    & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle)) 
                                       & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s)) 
                                          & (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.IRQ_n)))))))))) 
                 | (0x07ffffffU == vlSelfRef.tb_ss__DOT__eng__DOT__wait_cnt))) {
                vlSelfRef.tb_ss__DOT__ss_freeze = 1U;
                __Vdly__tb_ss__DOT__eng__DOT__state = 2U;
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__tb_wr_stb) 
             & ((3U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
                | (5U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))))) {
            if ((0x00000200U > vlSelfRef.tb_ss__DOT__tb_waddr)) {
                if ((3U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                    if ((0x000001ffU == vlSelfRef.tb_ss__DOT__tb_waddr)) {
                        __Vdly__tb_ss__DOT__eng__DOT__hdr_done = 1U;
                        __Vdly__tb_ss__DOT__eng__DOT__hdr_ok 
                            = (((((((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__chk_magic) 
                                    & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__chk_ver)) 
                                   & (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__chk_core)) 
                                  & (0ULL == vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags)) 
                                 & (vlSelfRef.tb_ss__DOT__eng__DOT__chk_total 
                                    == vlSelfRef.tb_ss__DOT__eng__DOT__total_bytes)) 
                                & (vlSelfRef.tb_ss__DOT__eng__DOT__chk_vram 
                                   == vlSelfRef.tb_ss__DOT__eng__DOT__vram_bytes)) 
                               & (vlSelfRef.tb_ss__DOT__eng__DOT__chk_wram 
                                  == vlSelfRef.tb_ss__DOT__eng__DOT__wram_bytes));
                    }
                    if ((1U & (~ (vlSelfRef.tb_ss__DOT__tb_waddr 
                                  >> 8U)))) {
                        if ((1U & (~ (vlSelfRef.tb_ss__DOT__tb_waddr 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelfRef.tb_ss__DOT__tb_waddr 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelfRef.tb_ss__DOT__tb_waddr 
                                              >> 5U)))) {
                                    if ((0x00000010U 
                                         & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                        if ((8U & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_ss__DOT__tb_waddr 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.tb_ss__DOT__tb_waddr))) {
                                                        vlSelfRef.tb_ss__DOT__eng__DOT__chk_wram 
                                                            = 
                                                            ((0x0000ffffU 
                                                              & vlSelfRef.tb_ss__DOT__eng__DOT__chk_wram) 
                                                             | (0x00070000U 
                                                                & ((IData)(vlSelfRef.tb_ss__DOT__tb_wdin) 
                                                                   << 0x00000010U)));
                                                    }
                                                } else {
                                                    vlSelfRef.tb_ss__DOT__eng__DOT__chk_wram 
                                                        = 
                                                        ((1U 
                                                          & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                          ? 
                                                         ((0x000700ffU 
                                                           & vlSelfRef.tb_ss__DOT__eng__DOT__chk_wram) 
                                                          | ((IData)(vlSelfRef.tb_ss__DOT__tb_wdin) 
                                                             << 8U))
                                                          : 
                                                         ((0x0007ff00U 
                                                           & vlSelfRef.tb_ss__DOT__eng__DOT__chk_wram) 
                                                          | (IData)(vlSelfRef.tb_ss__DOT__tb_wdin)));
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                            if ((2U 
                                                 & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.tb_ss__DOT__tb_waddr))) {
                                                    vlSelfRef.tb_ss__DOT__eng__DOT__chk_vram 
                                                        = 
                                                        ((0x0000ffffU 
                                                          & vlSelfRef.tb_ss__DOT__eng__DOT__chk_vram) 
                                                         | (0x00070000U 
                                                            & ((IData)(vlSelfRef.tb_ss__DOT__tb_wdin) 
                                                               << 0x00000010U)));
                                                }
                                            } else {
                                                vlSelfRef.tb_ss__DOT__eng__DOT__chk_vram 
                                                    = 
                                                    ((1U 
                                                      & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                      ? 
                                                     ((0x000700ffU 
                                                       & vlSelfRef.tb_ss__DOT__eng__DOT__chk_vram) 
                                                      | ((IData)(vlSelfRef.tb_ss__DOT__tb_wdin) 
                                                         << 8U))
                                                      : 
                                                     ((0x0007ff00U 
                                                       & vlSelfRef.tb_ss__DOT__eng__DOT__chk_vram) 
                                                      | (IData)(vlSelfRef.tb_ss__DOT__tb_wdin)));
                                            }
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                            if ((1U 
                                                 & (~ vlSelfRef.tb_ss__DOT__tb_waddr))) {
                                                vlSelfRef.tb_ss__DOT__eng__DOT__chk_total 
                                                    = 
                                                    ((0x0000ffffU 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_total) 
                                                     | (0x000f0000U 
                                                        & ((IData)(vlSelfRef.tb_ss__DOT__tb_wdin) 
                                                           << 0x00000010U)));
                                            }
                                        } else {
                                            vlSelfRef.tb_ss__DOT__eng__DOT__chk_total 
                                                = (
                                                   (1U 
                                                    & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                    ? 
                                                   ((0x000f00ffU 
                                                     & vlSelfRef.tb_ss__DOT__eng__DOT__chk_total) 
                                                    | ((IData)(vlSelfRef.tb_ss__DOT__tb_wdin) 
                                                       << 8U))
                                                    : 
                                                   ((0x000fff00U 
                                                     & vlSelfRef.tb_ss__DOT__eng__DOT__chk_total) 
                                                    | (IData)(vlSelfRef.tb_ss__DOT__tb_wdin)));
                                        }
                                    } else if ((8U 
                                                & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                        vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags 
                                            = ((4U 
                                                & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                     ? 
                                                    ((0x00ffffffffffffffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 0x00000038U))
                                                     : 
                                                    ((0xff00ffffffffffffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 0x00000030U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                     ? 
                                                    ((0xffff00ffffffffffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 0x00000028U))
                                                     : 
                                                    ((0xffffff00ffffffffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 0x00000020U))))
                                                : (
                                                   (2U 
                                                    & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                     ? 
                                                    ((0xffffffff00ffffffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 0x00000018U))
                                                     : 
                                                    ((0xffffffffff00ffffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 0x00000010U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.tb_ss__DOT__tb_waddr)
                                                     ? 
                                                    ((0xffffffffffff00ffULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | ((QData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin)) 
                                                        << 8U))
                                                     : 
                                                    ((0xffffffffffffff00ULL 
                                                      & vlSelfRef.tb_ss__DOT__eng__DOT__chk_flags) 
                                                     | (IData)((IData)(vlSelfRef.tb_ss__DOT__tb_wdin))))));
                                    } else if ((4U 
                                                & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                        if ((2U & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                            if ((1U 
                                                 & (~ vlSelfRef.tb_ss__DOT__tb_waddr))) {
                                                if (
                                                    (5U 
                                                     != (IData)(vlSelfRef.tb_ss__DOT__tb_wdin))) {
                                                    __Vdly__tb_ss__DOT__eng__DOT__chk_core = 0U;
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                            __Vdly__tb_ss__DOT__eng__DOT__chk_core 
                                                = (1U 
                                                   == (IData)(vlSelfRef.tb_ss__DOT__tb_wdin));
                                        } else {
                                            __Vdly__tb_ss__DOT__eng__DOT__chk_ver 
                                                = (1U 
                                                   == (IData)(vlSelfRef.tb_ss__DOT__tb_wdin));
                                        }
                                    } else if ((2U 
                                                & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                        if ((0x53U 
                                             != (IData)(vlSelfRef.tb_ss__DOT__tb_wdin))) {
                                            __Vdly__tb_ss__DOT__eng__DOT__chk_magic = 0U;
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.tb_ss__DOT__tb_waddr)) {
                                        if ((0x43U 
                                             != (IData)(vlSelfRef.tb_ss__DOT__tb_wdin))) {
                                            __Vdly__tb_ss__DOT__eng__DOT__chk_magic = 0U;
                                        }
                                    } else if ((0x54U 
                                                != (IData)(vlSelfRef.tb_ss__DOT__tb_wdin))) {
                                        __Vdly__tb_ss__DOT__eng__DOT__chk_magic = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                if ((0x00000600U > vlSelfRef.tb_ss__DOT__tb_waddr)) {
                    vlSelfRef.__Vdly__tb_ss__DOT__ss_a 
                        = (0x000003ffU & (vlSelfRef.tb_ss__DOT__tb_waddr 
                                          - (IData)(0x0200U)));
                    vlSelfRef.__Vdly__tb_ss__DOT__ss_din 
                        = vlSelfRef.tb_ss__DOT__tb_wdin;
                    vlSelfRef.__Vdly__tb_ss__DOT__ss_we = 1U;
                } else {
                    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a 
                        = vlSelfRef.tb_ss__DOT__tb_waddr;
                    if ((0x00004600U > __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a)) {
                        vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off 
                            = (0x000fffffU & (__Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a 
                                              - (IData)(0x00000600U)));
                        __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__Vfuncout 
                            = (0x00007fffU & vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off);
                    } else if ((0x00006600U > __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a)) {
                        vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off 
                            = (0x000fffffU & (__Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a 
                                              - (IData)(0x00004600U)));
                        __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__Vfuncout 
                            = (0x00008000U | (0x00007fffU 
                                              & vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off));
                    } else {
                        vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off 
                            = (0x000fffffU & (__Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__a 
                                              - (IData)(0x00006600U)));
                        __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__Vfuncout 
                            = (0x00010000U | (0x00007fffU 
                                              & vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off));
                    }
                    __Vdly__tb_ss__DOT__eng__DOT__wr_pend = 1U;
                    __Vdly__tb_ss__DOT__eng__DOT__pend_din 
                        = vlSelfRef.tb_ss__DOT__tb_wdin;
                    __Vdly__tb_ss__DOT__eng__DOT__pend_addr 
                        = __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__79__Vfuncout;
                }
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__tb_rd_stb) 
             & (2U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)))) {
            if ((0x00000200U > vlSelfRef.tb_ss__DOT__tb_raddr)) {
                __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a 
                    = (0x000001ffU & vlSelfRef.tb_ss__DOT__tb_raddr);
                __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__Vfuncout 
                    = ((0x00000100U & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                        ? 0U : ((0x00000080U & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                 ? 0U : ((0x00000040U 
                                          & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                          ? 0U : ((0x00000020U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                   ? 0U
                                                   : 
                                                  (0x000000ffU 
                                                   & ((0x00000010U 
                                                       & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 0U
                                                           : 
                                                          (7U 
                                                           & (vlSelfRef.tb_ss__DOT__eng__DOT__wram_bytes 
                                                              >> 0x10U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 
                                                          (vlSelfRef.tb_ss__DOT__eng__DOT__wram_bytes 
                                                           >> 8U)
                                                           : vlSelfRef.tb_ss__DOT__eng__DOT__wram_bytes)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 0U
                                                           : 
                                                          (7U 
                                                           & (vlSelfRef.tb_ss__DOT__eng__DOT__vram_bytes 
                                                              >> 0x10U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 
                                                          (vlSelfRef.tb_ss__DOT__eng__DOT__vram_bytes 
                                                           >> 8U)
                                                           : vlSelfRef.tb_ss__DOT__eng__DOT__vram_bytes))
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 0U
                                                           : 
                                                          (0x0000000fU 
                                                           & (vlSelfRef.tb_ss__DOT__eng__DOT__total_bytes 
                                                              >> 0x10U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 
                                                          (vlSelfRef.tb_ss__DOT__eng__DOT__total_bytes 
                                                           >> 8U)
                                                           : vlSelfRef.tb_ss__DOT__eng__DOT__total_bytes))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 0U
                                                           : 5U)
                                                          : 1U)
                                                         : 
                                                        ((2U 
                                                          & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                          ? 0x53U
                                                          : 
                                                         ((1U 
                                                           & (IData)(__Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__a))
                                                           ? 0x43U
                                                           : 0x54U))))))))));
                __Vdly__tb_ss__DOT__eng__DOT__fast_q 
                    = __Vfunc_tb_ss__DOT__eng__DOT__hdr_byte__80__Vfuncout;
                __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 1U;
                __Vdly__tb_ss__DOT__eng__DOT__fast_sel = 1U;
            } else if ((0x00000600U > vlSelfRef.tb_ss__DOT__tb_raddr)) {
                vlSelfRef.__Vdly__tb_ss__DOT__ss_a 
                    = (0x000003ffU & (vlSelfRef.tb_ss__DOT__tb_raddr 
                                      - (IData)(0x0200U)));
                __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 1U;
                __Vdly__tb_ss__DOT__eng__DOT__fast_sel = 0U;
            } else {
                __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a 
                    = vlSelfRef.tb_ss__DOT__tb_raddr;
                if ((0x00004600U > __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a)) {
                    vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off 
                        = (0x000fffffU & (__Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a 
                                          - (IData)(0x00000600U)));
                    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__Vfuncout 
                        = (0x00007fffU & vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off);
                } else if ((0x00006600U > __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a)) {
                    vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off 
                        = (0x000fffffU & (__Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a 
                                          - (IData)(0x00004600U)));
                    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__Vfuncout 
                        = (0x00008000U | (0x00007fffU 
                                          & vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off));
                } else {
                    vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off 
                        = (0x000fffffU & (__Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__a 
                                          - (IData)(0x00006600U)));
                    __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__Vfuncout 
                        = (0x00010000U | (0x00007fffU 
                                          & vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off));
                }
                __Vdly__tb_ss__DOT__eng__DOT__rd_pend = 1U;
                __Vdly__tb_ss__DOT__eng__DOT__pend_addr 
                    = __Vfunc_tb_ss__DOT__eng__DOT__mem_translate__81__Vfuncout;
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__fast_rdy) 
             & (~ (IData)(vlSelfRef.tb_ss__DOT__tb_taken)))) {
            vlSelfRef.tb_ss__DOT__ss_img_q = (0x000000ffU 
                                              & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__fast_sel)
                                                  ? (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__fast_q)
                                                  : 
                                                 (((0x001fU 
                                                    >= (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                    ? 
                                                   ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))) 
                                                    & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30))) 
                                                       & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))) 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                             >> 5U))))) 
                                                             & (((0x00000010U 
                                                                  & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                  ? 
                                                                 ((8U 
                                                                   & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                   ? 
                                                                  ((4U 
                                                                    & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                    ? 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((- (IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_a))))) 
                                                                     & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__M1_n) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate))))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle) 
                                                                       << 5U) 
                                                                      | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                                                                         << 2U))
                                                                      : 
                                                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ) 
                                                                      >> 8U)))
                                                                    : 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)
                                                                      : 
                                                                     (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus))))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[7U]
                                                                      : vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[7U])))
                                                                   : 
                                                                  ((4U 
                                                                    & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                    ? 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
                                                                       << 0x00000018U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
                                                                         >> 8U))
                                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U])
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                                                       << 8U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                                                         >> 0x00000018U))
                                                                      : 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                                                         >> 0x00000010U))))
                                                                    : 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                                                       << 0x00000018U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                                                                         >> 8U))
                                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U])
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                       << 8U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                         >> 0x00000018U))
                                                                      : 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                         >> 0x00000010U))))))
                                                                  : 
                                                                 ((8U 
                                                                   & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                   ? 
                                                                  ((4U 
                                                                    & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                    ? 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                       << 0x00000018U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                                                         >> 8U))
                                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U])
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                       << 8U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                         >> 0x00000018U))
                                                                      : 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                       << 0x00000010U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                         >> 0x00000010U))))
                                                                    : 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                       << 0x00000018U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                                                         >> 8U))
                                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U])
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC) 
                                                                      >> 8U)
                                                                      : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC))))
                                                                   : 
                                                                  ((4U 
                                                                    & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                    ? 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? 
                                                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP) 
                                                                      >> 8U)
                                                                      : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R)
                                                                      : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I)))
                                                                    : 
                                                                   ((2U 
                                                                     & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp)
                                                                      : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap))
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)
                                                                      : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC)))))) 
                                                                & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))))))
                                                    : 
                                                   (((0x0020U 
                                                      <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                     & (0x002fU 
                                                        >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                     ? 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                     >> 4U))))) 
                                                     & (((8U 
                                                          & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                          ? 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                           ? 
                                                          (((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n)
                                                             : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm_d)) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                             >> 1U))))))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm_a)
                                                             : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux))
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D)
                                                             : 
                                                            ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr) 
                                                             >> 8U))))
                                                          : 
                                                         ((4U 
                                                           & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                           ? 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr)
                                                             : 
                                                            (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check1) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check0)))
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? 
                                                            ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies_lock) 
                                                               << 4U) 
                                                              | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__lock_mapper_B) 
                                                                    << 2U))) 
                                                             | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx)))
                                                             : 
                                                            ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_cme) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_p) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_e)))))
                                                           : 
                                                          ((2U 
                                                            & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank3)
                                                             : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank2))
                                                            : 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank1)
                                                             : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank0))))) 
                                                        & (- (IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
                                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
                                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                                                                               & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                >> 5U)))))))))
                                                     : 
                                                    (((0x0030U 
                                                       <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                      & (0x0036U 
                                                         >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                      ? 
                                                     ((0x0030U 
                                                       == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                       ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl)
                                                       : 
                                                      ((0x0031U 
                                                        == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                        ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr)
                                                        : 
                                                       ((0x0032U 
                                                         == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                         ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_txd)
                                                         : 
                                                        ((0x0033U 
                                                          == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                          ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_rxd)
                                                          : 
                                                         ((0x0034U 
                                                           == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                           ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr)
                                                           : 
                                                          ((0x0035U 
                                                            == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? 
                                                           (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j2_th_dir) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j1_th_dir))
                                                            : 
                                                           ((- (IData)(vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[54U])) 
                                                            & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_select) 
                                                                << 2U) 
                                                               | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_player) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_upper))))))))))
                                                      : 
                                                     (((0x0100U 
                                                        <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                       & (0x0114U 
                                                          >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                       ? 
                                                      ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs)
                                                        ? 
                                                       ((0x0100U 
                                                         == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                         ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0)
                                                         : 
                                                        ((0x0101U 
                                                          == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                          ? 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0) 
                                                             >> 8U))
                                                          : 
                                                         ((0x0102U 
                                                           == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                           ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1)
                                                           : 
                                                          ((0x0103U 
                                                            == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1) 
                                                               >> 8U))
                                                            : 
                                                           ((0x0104U 
                                                             == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2)
                                                             : 
                                                            ((0x0105U 
                                                              == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                              ? 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2) 
                                                                 >> 8U))
                                                              : 
                                                             ((0x0106U 
                                                               == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                               ? 
                                                              (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1) 
                                                                << 4U) 
                                                               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0))
                                                               : 
                                                              (vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[263U]
                                                                ? 
                                                               (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3) 
                                                                 << 4U) 
                                                                | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2))
                                                                : 
                                                               ((0x0108U 
                                                                 == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                 ? 
                                                                (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__regn) 
                                                                  << 5U) 
                                                                 | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3) 
                                                                    << 2U))
                                                                 : 
                                                                ((0x0109U 
                                                                  == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                  ? 
                                                                 (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div) 
                                                                   << 4U) 
                                                                  | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) 
                                                                     << 3U))
                                                                  : 
                                                                 ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise) 
                                                                    << 7U) 
                                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__last_wr) 
                                                                      << 6U)) 
                                                                  & (- (IData)(
                                                                               (0x010aU 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))))))))))))))
                                                        : 
                                                       ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone0_sel)
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                          ? 
                                                         (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out) 
                                                           << 2U) 
                                                          | (3U 
                                                             & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt) 
                                                                >> 8U)))
                                                          : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone1_sel)
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                           ? 
                                                          (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out) 
                                                            << 2U) 
                                                           | (3U 
                                                              & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt) 
                                                                 >> 8U)))
                                                           : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt))
                                                          : 
                                                         ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone2_sel)
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? 
                                                           (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__out2) 
                                                             << 2U) 
                                                            | (3U 
                                                               & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt) 
                                                                  >> 8U)))
                                                            : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt))
                                                           : 
                                                          (((0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                             ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                              ? 
                                                             ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift) 
                                                              >> 8U)
                                                              : 
                                                             ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt)
                                                               : 
                                                              (7U 
                                                               & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt) 
                                                                  >> 8U))))) 
                                                           & (- (IData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel))))))))
                                                       : 
                                                      ((0x0040U 
                                                        == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                        ? 
                                                       ((((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.display_on) 
                                                            << 3U) 
                                                           | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__disable_hscroll) 
                                                              << 2U)) 
                                                          | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__disable_vscroll) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mask_column0))) 
                                                         << 4U) 
                                                        | ((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.irq_frame_en) 
                                                             << 3U) 
                                                            | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__irq_line_en) 
                                                               << 2U)) 
                                                           | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_shift) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_tall))))
                                                        : 
                                                       ((0x0041U 
                                                         == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                         ? 
                                                        ((((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_wide) 
                                                             << 3U) 
                                                            | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M4) 
                                                               << 2U)) 
                                                           | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M3) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M2))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M1) 
                                                              << 3U) 
                                                             | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__to_cram) 
                                                                << 2U)) 
                                                            | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__address_ff) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__data_write))))
                                                         : 
                                                        ((0x0042U 
                                                          == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                          ? 
                                                         (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__overscan) 
                                                           << 4U) 
                                                          | (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__bg_address))
                                                          : 
                                                         ((0x0043U 
                                                           == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                           ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__m2mg_address)
                                                           : 
                                                          ((0x0044U 
                                                            == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                            ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__m2ct_address)
                                                            : 
                                                           ((0x0045U 
                                                             == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                             ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__bg_scroll_x)
                                                             : 
                                                            ((0x0046U 
                                                              == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                              ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__bg_scroll_y)
                                                              : 
                                                             ((0x0047U 
                                                               == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                               ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__irq_line_count)
                                                               : 
                                                              ((0x0048U 
                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_address)
                                                                : 
                                                               ((0x0049U 
                                                                 == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_high_bits)
                                                                 : 
                                                                ((0x004aU 
                                                                  == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                  ? 
                                                                 (0x0000003fU 
                                                                  & ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__xram_cpu_A) 
                                                                     >> 8U))
                                                                  : 
                                                                 ((0x004bU 
                                                                   == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                   ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__xram_cpu_A)
                                                                   : 
                                                                  ((0x004cU 
                                                                    == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                    ? 
                                                                   (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__xram_cpu_A_incr) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__xram_cpu_read) 
                                                                        << 6U) 
                                                                       | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__reset_flags) 
                                                                          << 5U)))
                                                                    : 
                                                                   ((0x004dU 
                                                                     == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                     ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vram_cpu_D_outl)
                                                                     : 
                                                                    ((0x004eU 
                                                                      == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                      ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__cram_latch)
                                                                      : 
                                                                     ((0x004fU 
                                                                       == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                       ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vbl_irq)
                                                                       : 
                                                                      ((0x0050U 
                                                                        == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                        ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__hbl_counter)
                                                                        : 
                                                                       ((0x0051U 
                                                                         == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                         ? 
                                                                        ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.hbl_irq) 
                                                                         << 7U)
                                                                         : 
                                                                        ((0x0052U 
                                                                          == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                          ? 
                                                                         (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__irq_delay) 
                                                                           << 5U) 
                                                                          | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.IRQ_n) 
                                                                             << 4U))
                                                                          : 
                                                                         ((0x0053U 
                                                                           == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                           ? 
                                                                          (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__collide_flag) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__overflow_flag) 
                                                                               << 6U) 
                                                                              | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__line_overflow) 
                                                                                << 5U)))
                                                                           : 
                                                                          ((0x0054U 
                                                                            == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                            ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__latched_x)
                                                                            : 
                                                                           ((0x0055U 
                                                                             == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                             ? 
                                                                            (0x0000003fU 
                                                                             & ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__xspr_collide_shift) 
                                                                                >> 8U))
                                                                             : 
                                                                            ((0x0056U 
                                                                              == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                              ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__xspr_collide_shift)
                                                                              : 
                                                                             ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__ss_cram_rd)
                                                                               ? 
                                                                              ((1U 
                                                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                ? 
                                                                               (0x0000000fU 
                                                                                & (vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_cram_inst__DOT__ram
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                >> 1U))] 
                                                                                >> 8U))
                                                                                : vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_cram_inst__DOT__ram
                                                                               [
                                                                               (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                >> 1U))])
                                                                               : 
                                                                              ((((0x0070U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__state)
                                                                                 : 
                                                                                ((0x0071U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)
                                                                                 : 
                                                                                ((0x0072U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_spr_inst__DOT__index)
                                                                                 : 
                                                                                ((0x0073U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)
                                                                                 : 
                                                                                ((0x0074U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address) 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((0x0075U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags)
                                                                                 : 
                                                                                ((0x0076U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? 
                                                                                ((((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[7U]) 
                                                                                << 1U) 
                                                                                | vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[6U]) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[5U]) 
                                                                                << 1U) 
                                                                                | vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[4U]) 
                                                                                << 4U)) 
                                                                                | (((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[3U]) 
                                                                                << 1U) 
                                                                                | vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[2U]) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[1U]) 
                                                                                << 1U) 
                                                                                | vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[0U])))
                                                                                 : 
                                                                                (((0x0077U 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x009eU 
                                                                                >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? 
                                                                                (((0x0077U 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x00b7U 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                - (IData)(0x37U)))]
                                                                                 : 
                                                                                (((0x007fU 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x00bfU 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                - (IData)(0x3fU)))]
                                                                                 : 
                                                                                (((0x0087U 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x00c7U 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                - (IData)(7U)))]
                                                                                 : 
                                                                                (((0x008fU 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x00cfU 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                - (IData)(0x0fU)))]
                                                                                 : 
                                                                                (((0x0097U 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x00d7U 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3
                                                                                [
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                - (IData)(0x17U)))]
                                                                                 : 0U)))))
                                                                                 : 
                                                                                ((0x009fU 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? 
                                                                                ((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_collide) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__spr_overflow) 
                                                                                << 6U)) 
                                                                                | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__spr_color) 
                                                                                << 2U))
                                                                                 : 
                                                                                (((0x00a0U 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x01e0U 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                                                                                 ? vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift
                                                                                [
                                                                                (0x0000003fU 
                                                                                & VL_DIV_III(32, 
                                                                                ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                                                - (IData)(0x000000a0U)), (IData)(5U)))]
                                                                                 : 0U)))))))))) 
                                                                                | ((0x0060U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)
                                                                                 : 
                                                                                ((0x0061U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)
                                                                                 : 
                                                                                ((0x0062U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? 
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index) 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((0x0063U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? 
                                                                                ((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y) 
                                                                                << 5U) 
                                                                                | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette) 
                                                                                << 4U)) 
                                                                                | (((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__priority_latch) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__flip_x) 
                                                                                << 2U)))
                                                                                 : 
                                                                                ((0x0064U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac)
                                                                                 : 
                                                                                ((0x0065U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)
                                                                                 : 
                                                                                ((0x0066U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)
                                                                                 : 
                                                                                ((0x0067U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)
                                                                                 : 
                                                                                ((0x0068U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)
                                                                                 : 
                                                                                ((0x0069U 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0)
                                                                                 : 
                                                                                ((0x006aU 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1)
                                                                                 : 
                                                                                ((0x006bU 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2)
                                                                                 : 
                                                                                ((0x006cU 
                                                                                == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                                                 ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3)
                                                                                 : 
                                                                                ((((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette_reg) 
                                                                                << 7U) 
                                                                                | ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vdp_main_inst__DOT__bg_priority) 
                                                                                << 6U)) 
                                                                                & (- (IData)(vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[109U]))))))))))))))))) 
                                                                               & (- (IData)(
                                                                                ((0x0060U 
                                                                                <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                                                                & (0x00c0U 
                                                                                > (IData)(vlSelfRef.tb_ss__DOT__ss_a)))))))))))))))))))))))))))))))))) 
                                                  | ((0x0038U 
                                                      == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                      ? (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount)
                                                      : 
                                                     ((0x0039U 
                                                       == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                       ? 
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount) 
                                                          >> 8U))
                                                       : 
                                                      ((0x003aU 
                                                        == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                        ? (IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount)
                                                        : 
                                                       ((0x003bU 
                                                         == (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                         ? 
                                                        (1U 
                                                         & ((IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount) 
                                                            >> 8U))
                                                         : 
                                                        (((((IData)(vlSelfRef.tb_ss__DOT__HS) 
                                                            << 7U) 
                                                           | ((IData)(vlSelfRef.tb_ss__DOT__VS) 
                                                              << 6U)) 
                                                          | (((IData)(vlSelfRef.tb_ss__DOT__HBlank) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.tb_ss__DOT__VBlank) 
                                                                << 4U))) 
                                                         & (- (IData)(vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[60U]))))))))));
            vlSelfRef.tb_ss__DOT__ss_img_rdy = 1U;
            __Vdly__tb_ss__DOT__eng__DOT__fast_rdy = 0U;
        }
        if (vlSelfRef.tb_ss__DOT__tb_taken) {
            vlSelfRef.tb_ss__DOT__ss_img_rdy = 0U;
            __Vdly__tb_ss__DOT__eng__DOT__rd_out = 0U;
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__resync) 
             & ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_req) 
                == (1U & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__ack_s) 
                          >> 1U))))) {
            __Vdly__tb_ss__DOT__eng__DOT__resync = 0U;
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__rd_out) 
             & ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_req) 
                == (1U & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__ack_s) 
                          >> 1U))))) {
            if ((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__rd_lat))) {
                __Vdly__tb_ss__DOT__eng__DOT__rd_lat 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__rd_lat) 
                                      - (IData)(1U)));
            } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__tb_taken)))) {
                vlSelfRef.tb_ss__DOT__ss_img_q = ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                                       >> 0x0000000fU)))
                                                   ? (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__vram_cpu_D_out)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                                        >> 0x0000000fU)))
                                                    ? (IData)(vlSelfRef.tb_ss__DOT__ram_q)
                                                    : (IData)(vlSelfRef.tb_ss__DOT__nvram_q)));
                vlSelfRef.tb_ss__DOT__ss_img_rdy = 1U;
            }
        }
        if (((((~ (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__resync)) 
               & ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_req) 
                  == (1U & ((IData)(vlSelfRef.tb_ss__DOT__eng__DOT__ack_s) 
                            >> 1U)))) & (~ ((IData)(vlSelfRef.tb_ss__DOT__tb_op_stb) 
                                            & (4U == (IData)(vlSelfRef.tb_ss__DOT__tb_op))))) 
             & (~ (((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
                    & (0x1fffffffU == vlSelfRef.tb_ss__DOT__eng__DOT__wdog)) 
                   & (~ (IData)(vlSelfRef.tb_ss__DOT__tb_op_stb)))))) {
            if (vlSelfRef.tb_ss__DOT__eng__DOT__wr_pend) {
                __Vdly__tb_ss__DOT__ss_mem_req = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_mem_req)));
                __Vdly__tb_ss__DOT__eng__DOT__wr_pend = 0U;
                __Vdly__tb_ss__DOT__ss_mem_addr = vlSelfRef.tb_ss__DOT__eng__DOT__pend_addr;
                vlSelfRef.tb_ss__DOT__ss_mem_din = vlSelfRef.tb_ss__DOT__eng__DOT__pend_din;
                vlSelfRef.tb_ss__DOT__ss_mem_we = 1U;
            } else if (vlSelfRef.tb_ss__DOT__eng__DOT__rd_pend) {
                __Vdly__tb_ss__DOT__ss_mem_req = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_mem_req)));
                __Vdly__tb_ss__DOT__eng__DOT__rd_pend = 0U;
                __Vdly__tb_ss__DOT__ss_mem_addr = vlSelfRef.tb_ss__DOT__eng__DOT__pend_addr;
                vlSelfRef.tb_ss__DOT__ss_mem_we = 0U;
                __Vdly__tb_ss__DOT__eng__DOT__rd_out = 1U;
                __Vdly__tb_ss__DOT__eng__DOT__rd_lat = 0x18U;
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__bootloader_n = 1U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n = 1U;
        __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__RD_n = 1U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm_touched = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux = 0xffU;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0 = 0x0fU;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1 = 0x0fU;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2 = 0x0fU;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3 = 0x0fU;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3 = 4U;
        vlSelfRef.tb_ss__DOT__sys__DOT__det_D = 7U;
    } else {
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & 
             (0x0109U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                  >> 4U));
        } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div)));
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & 
             (0x002dU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__bootloader_n 
                = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
        } else if ((1U & ((~ ((~ ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A)) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35))) 
                              | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n))) 
                          & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n))))) {
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__bootloader_n = 1U;
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone1_sel))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt 
                    = ((0x00ffU & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt)) 
                       | (0x00000300U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         << 8U)));
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 2U));
            } else {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt 
                    = ((0x0300U & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt)) 
                       | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) {
            if ((6U > (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out = 1U;
            } else if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out 
                    = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out)));
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt 
                    = ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1))
                        ? 1U : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1));
            } else {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt 
                    = (0x000003ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt) 
                                      - (IData)(1U)));
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone0_sel))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt 
                    = ((0x00ffU & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt)) 
                       | (0x00000300U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         << 8U)));
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 2U));
            } else {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt 
                    = ((0x0300U & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt)) 
                       | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) {
            if ((6U > (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out = 1U;
            } else if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out 
                    = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out)));
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt 
                    = ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0))
                        ? 1U : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0));
            } else {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt 
                    = (0x000003ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt) 
                                      - (IData)(1U)));
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone2_sel))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt 
                    = ((0x00ffU & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt)) 
                       | (0x00000300U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         << 8U)));
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 2U));
            } else {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt 
                    = ((0x0300U & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt)) 
                       | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) {
            if ((6U > (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 = 1U;
            } else if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt))) {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 
                    = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__out2)));
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt 
                    = ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2))
                        ? 1U : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2));
            } else {
                __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt 
                    = (0x000003ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt) 
                                      - (IData)(1U)));
            }
        }
        if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel)) 
             & ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                >> 1U))) {
            __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt 
                = ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                    ? ((0x00ffU & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt)) 
                       | (0x00000700U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         << 8U))) : 
                   ((0x0700U & (IData)(__Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt)) 
                    | (IData)(vlSelfRef.tb_ss__DOT__ss_din)));
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16) {
            __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt 
                = (0x000007ffU & ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt))
                                   ? ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3))
                                       ? ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3))
                                           ? ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2))
                                               ? 2U
                                               : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2) 
                                                  << 1U))
                                           : 0x0080U)
                                       : ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3))
                                           ? 0x0040U
                                           : 0x0020U))
                                   : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt) 
                                      - (IData)(1U))));
        }
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n = 1U;
            vlSelfRef.tb_ss__DOT__sys__DOT__RD_n = 1U;
            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n 
                        = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__RD_n 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
                }
            } else {
                if ((((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                      & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead))) 
                     & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n 
                        = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__RD_n = 0U;
                }
                if (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n 
                        = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i)));
                }
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & 
             (0x003dU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle 
                = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
        } else {
            if (vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__toggle) {
                vlSelfRef.tb_ss__DOT__audio_r = (0x0000ffffU 
                                                 & vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__clipped);
            } else {
                vlSelfRef.tb_ss__DOT__audio_l = (0x0000ffffU 
                                                 & vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__clipped);
            }
            __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle 
                = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__toggle)));
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm_WR_n)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm_touched = 1U;
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & 
             ((0x0029U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
              | (0x002aU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))))) {
            if ((0x0029U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__PSG_mux 
                    = vlSelfRef.tb_ss__DOT__ss_din;
            }
            if ((0x0029U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__det_D 
                    = (7U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            }
        } else if ((1U & (~ ((~ ((0xf2U == (0x000000ffU 
                                            & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                             | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n))))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__det_D = 
                (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs))) {
            if (((((((((0x0100U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                       | (0x0101U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                      | (0x0102U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                     | (0x0103U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                    | (0x0104U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                   | (0x0105U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                  | (0x0106U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                 | (0x0107U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                if ((0x0100U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0 
                        = ((0x0300U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0)) 
                           | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                } else if ((0x0101U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0 
                        = ((0x00ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0)) 
                           | (0x00000300U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                             << 8U)));
                } else if ((0x0102U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1 
                        = ((0x0300U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1)) 
                           | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                } else if ((0x0103U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1 
                        = ((0x00ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1)) 
                           | (0x00000300U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                             << 8U)));
                } else if ((0x0104U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2 
                        = ((0x0300U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2)) 
                           | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                } else if ((0x0105U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2 
                        = ((0x00ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2)) 
                           | (0x00000300U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                             << 8U)));
                } else if ((0x0106U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                          >> 4U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                          >> 4U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                }
            } else if ((0x0108U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__regn 
                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 5U));
                vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3 
                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 2U));
            } else if ((0x0109U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                if ((0x010aU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 7U));
                }
            }
        } else if (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_WR_n)) 
                    & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__last_wr))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise 
                = (0x0eU == (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                            >> 4U)));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__regn 
                = vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel;
            if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                    if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3 
                            = (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3 
                            = (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2 
                        = ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in))
                            ? ((0x03f0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2)) 
                               | (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in)))
                            : ((0x000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2)) 
                               | (0x000003f0U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                                 << 4U))));
                }
            } else if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1 
                        = ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in))
                            ? ((0x03f0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1)) 
                               | (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in)))
                            : ((0x000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1)) 
                               | (0x000003f0U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                                 << 4U))));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0 
                    = (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0 
                    = ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in))
                        ? ((0x03f0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0)) 
                           | (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in)))
                        : ((0x000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0)) 
                           | (0x000003f0U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                             << 4U))));
            }
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise = 0U;
        }
    }
    vlSelfRef.tb_ss__DOT__cyc = __Vdly__tb_ss__DOT__cyc;
    vlSelfRef.tb_ss__DOT__frames = __Vdly__tb_ss__DOT__frames;
    vlSelfRef.tb_ss__DOT__cepix_cnt = __Vdly__tb_ss__DOT__cepix_cnt;
    vlSelfRef.tb_ss__DOT__h_video = __Vdly__tb_ss__DOT__h_video;
    vlSelfRef.tb_ss__DOT__h_audio = __Vdly__tb_ss__DOT__h_audio;
    vlSelfRef.tb_ss__DOT__vsync_prev2 = ((IData)(vlSelfRef.tb_ss__DOT__VS) 
                                         & (~ (0U != vlSelfRef.tb_ss__DOT__vsync_prev)));
    __Vtableidx1 = vlSelfRef.tb_ss__DOT__clkd;
    vlSelfRef.tb_ss__DOT__ce_vdp = Vtb_ss__ConstPool__TABLE_hb5a619ab_0
        [__Vtableidx1];
    vlSelfRef.tb_ss__DOT__ce_pix = Vtb_ss__ConstPool__TABLE_h8ae07725_0
        [__Vtableidx1];
    vlSelfRef.tb_ss__DOT__ce_cpu = Vtb_ss__ConstPool__TABLE_hc38de69d_0
        [__Vtableidx1];
    __Vdly__tb_ss__DOT__clkd = Vtb_ss__ConstPool__TABLE_hb713fc5b_0
        [__Vtableidx1];
    vlSelfRef.tb_ss__DOT__eng_mem_req_prev = vlSelfRef.tb_ss__DOT__ss_mem_req;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__noise) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__noise));
    vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__toggle 
        = __Vdly__tb_ss__DOT__sys__DOT__mix__DOT__toggle;
    vlSelfRef.tb_ss__DOT__eng__DOT__hdr_ok = __Vdly__tb_ss__DOT__eng__DOT__hdr_ok;
    vlSelfRef.tb_ss__DOT__eng__DOT__hdr_done = __Vdly__tb_ss__DOT__eng__DOT__hdr_done;
    vlSelfRef.tb_ss__DOT__eng__DOT__ack_s = __Vdly__tb_ss__DOT__eng__DOT__ack_s;
    vlSelfRef.tb_ss__DOT__eng__DOT__wr_pend = __Vdly__tb_ss__DOT__eng__DOT__wr_pend;
    vlSelfRef.tb_ss__DOT__eng__DOT__rd_pend = __Vdly__tb_ss__DOT__eng__DOT__rd_pend;
    vlSelfRef.tb_ss__DOT__eng__DOT__rd_out = __Vdly__tb_ss__DOT__eng__DOT__rd_out;
    vlSelfRef.tb_ss__DOT__eng__DOT__resync = __Vdly__tb_ss__DOT__eng__DOT__resync;
    vlSelfRef.tb_ss__DOT__eng__DOT__rd_lat = __Vdly__tb_ss__DOT__eng__DOT__rd_lat;
    vlSelfRef.tb_ss__DOT__eng__DOT__fast_rdy = __Vdly__tb_ss__DOT__eng__DOT__fast_rdy;
    vlSelfRef.tb_ss__DOT__eng__DOT__wdog = __Vdly__tb_ss__DOT__eng__DOT__wdog;
    vlSelfRef.tb_ss__DOT__eng__DOT__wait_cnt = __Vdly__tb_ss__DOT__eng__DOT__wait_cnt;
    vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt = __Vdly__tb_ss__DOT__eng__DOT__settle_cnt;
    vlSelfRef.tb_ss__DOT__eng__DOT__vram_bytes = __Vdly__tb_ss__DOT__eng__DOT__vram_bytes;
    vlSelfRef.tb_ss__DOT__eng__DOT__wram_bytes = __Vdly__tb_ss__DOT__eng__DOT__wram_bytes;
    vlSelfRef.tb_ss__DOT__eng__DOT__total_bytes = __Vdly__tb_ss__DOT__eng__DOT__total_bytes;
    vlSelfRef.tb_ss__DOT__ss_ack_s = __Vdly__tb_ss__DOT__ss_ack_s;
    vlSelfRef.tb_ss__DOT__eng__DOT__chk_magic = __Vdly__tb_ss__DOT__eng__DOT__chk_magic;
    vlSelfRef.tb_ss__DOT__eng__DOT__chk_ver = __Vdly__tb_ss__DOT__eng__DOT__chk_ver;
    vlSelfRef.tb_ss__DOT__eng__DOT__chk_core = __Vdly__tb_ss__DOT__eng__DOT__chk_core;
    vlSelfRef.tb_ss__DOT__eng__DOT__was_load = __Vdly__tb_ss__DOT__eng__DOT__was_load;
    vlSelfRef.tb_ss__DOT__eng__DOT__pend_din = __Vdly__tb_ss__DOT__eng__DOT__pend_din;
    vlSelfRef.tb_ss__DOT__eng__DOT__pend_addr = __Vdly__tb_ss__DOT__eng__DOT__pend_addr;
    vlSelfRef.tb_ss__DOT__eng__DOT__fast_q = __Vdly__tb_ss__DOT__eng__DOT__fast_q;
    vlSelfRef.tb_ss__DOT__eng__DOT__fast_sel = __Vdly__tb_ss__DOT__eng__DOT__fast_sel;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt;
    vlSelfRef.tb_ss__DOT__clkd = __Vdly__tb_ss__DOT__clkd;
    vlSelfRef.tb_ss__DOT__VBlank = (((IData)(__Vdly__tb_ss__DOT__VBlank) 
                                     & (IData)(__VdlyMask__tb_ss__DOT__VBlank)) 
                                    | ((IData)(vlSelfRef.tb_ss__DOT__VBlank) 
                                       & (~ (IData)(__VdlyMask__tb_ss__DOT__VBlank))));
    __VdlyMask__tb_ss__DOT__VBlank = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__out2;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt;
    vlSelfRef.tb_ss__DOT__HS = (((IData)(__Vdly__tb_ss__DOT__HS) 
                                 & (IData)(__VdlyMask__tb_ss__DOT__HS)) 
                                | ((IData)(vlSelfRef.tb_ss__DOT__HS) 
                                   & (~ (IData)(__VdlyMask__tb_ss__DOT__HS))));
    __VdlyMask__tb_ss__DOT__HS = 0U;
    vlSelfRef.tb_ss__DOT__HBlank = (((IData)(__Vdly__tb_ss__DOT__HBlank) 
                                     & (IData)(__VdlyMask__tb_ss__DOT__HBlank)) 
                                    | ((IData)(vlSelfRef.tb_ss__DOT__HBlank) 
                                       & (~ (IData)(__VdlyMask__tb_ss__DOT__HBlank))));
    __VdlyMask__tb_ss__DOT__HBlank = 0U;
    vlSelfRef.tb_ss__DOT__ss_mem_req = __Vdly__tb_ss__DOT__ss_mem_req;
    vlSelfRef.tb_ss__DOT__ss_mem_addr = __Vdly__tb_ss__DOT__ss_mem_addr;
    if (__VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[0U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v0;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[1U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v1;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[2U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v2;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[3U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v3;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[4U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v4;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[5U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v5;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[6U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v6;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[7U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v7;
    }
    if (__VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[__VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH__v8;
    }
    if (__VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[0U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v0;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[1U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v1;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[2U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v2;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[3U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v3;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[4U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v4;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[5U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v5;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[6U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v6;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[7U] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v7;
    }
    if (__VdlySet__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[__VdlyDim0__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL__v8;
    }
    vlSelfRef.tb_ss__DOT__eng__DOT__state = __Vdly__tb_ss__DOT__eng__DOT__state;
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div 
        = __Vdly__tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div;
    vlSelfRef.tb_ss__DOT__vsync_prev = vlSelfRef.tb_ss__DOT__VS;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (((QData)((IData)(
                                                                  (((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[2U]) 
                                                                      << 8U) 
                                                                     | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[2U]) 
                                                                    << 0x00000010U) 
                                                                   | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[1U]) 
                                                                       << 8U) 
                                                                      | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[1U])))) 
                                                  << 0x00000010U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[0U]) 
                                                                     << 8U) 
                                                                    | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[0U]))));
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT____Vcellinp__wram__wren)))) {
        vlSelfRef.tb_ss__DOT__ram_q = vlSelfRef.tb_ss__DOT__wram__DOT__mem
            [vlSelfRef.tb_ss__DOT____Vcellinp__wram__address];
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT____Vcellinp__nvram__wren_a)))) {
        vlSelfRef.tb_ss__DOT__nvram_q = vlSelfRef.tb_ss__DOT__nvram__DOT__mem
            [vlSelfRef.tb_ss__DOT____Vcellinp__nvram__address_a];
    }
    vlSelfRef.tb_ss__DOT__VS = (((IData)(__Vdly__tb_ss__DOT__VS) 
                                 & (IData)(__VdlyMask__tb_ss__DOT__VS)) 
                                | ((IData)(vlSelfRef.tb_ss__DOT__VS) 
                                   & (~ (IData)(__VdlyMask__tb_ss__DOT__VS))));
    __VdlyMask__tb_ss__DOT__VS = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[0U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[3U])) 
                                                             << 0x00000038U) 
                                                            | (((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[3U])) 
                                                                << 0x00000030U) 
                                                               | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[3U])) 
                                                              << 0x00000038U) 
                                                             | (((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[3U])) 
                                                                 << 0x00000030U) 
                                                                | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
                                                            >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[2U] = 
        (((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[5U]) 
            << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[5U]) 
          << 0x00000010U) | (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[4U]) 
                              << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[4U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[3U] = 
        (0x0000ffffU & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[6U]) 
                         << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[6U]));
    if (__VdlySet__tb_ss__DOT__wram__DOT__mem__v0) {
        vlSelfRef.tb_ss__DOT__wram__DOT__mem[__VdlyDim0__tb_ss__DOT__wram__DOT__mem__v0] 
            = __VdlyVal__tb_ss__DOT__wram__DOT__mem__v0;
    }
    if (__VdlySet__tb_ss__DOT__nvram__DOT__mem__v0) {
        vlSelfRef.tb_ss__DOT__nvram__DOT__mem[__VdlyDim0__tb_ss__DOT__nvram__DOT__mem__v0] 
            = __VdlyVal__tb_ss__DOT__nvram__DOT__mem__v0;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3))]);
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst)))) {
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs))) {
            if ((1U & (~ ((((((((0x0100U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                                | (0x0101U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                               | (0x0102U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                              | (0x0103U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                             | (0x0104U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                            | (0x0105U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                           | (0x0106U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                          | (0x0107U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))))) {
                if ((0x0108U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    if ((0x0109U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        if ((0x010aU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__last_wr 
                                = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         >> 6U));
                        }
                    }
                }
            }
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__last_wr 
                = vlSelfRef.tb_ss__DOT__sys__DOT__psg_WR_n;
        }
    }
    __VdfgRegularize_h6e95ff9d_0_36 = (0x00001fffU 
                                       & (- (IData)(
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D) 
                                                          >> 1U))) 
                                                     != 
                                                     (1U 
                                                      & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__toggle)
                                                  ? 
                                                 (((0x00001000U 
                                                    & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outR) 
                                                       << 2U)) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outR) 
                                                      << 1U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_36))
                                                  : 
                                                 (((0x00001000U 
                                                    & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outL) 
                                                       << 2U)) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__PSG_outL) 
                                                      << 1U)) 
                                                  & (IData)(__VdfgRegularize_h6e95ff9d_0_36)));
}

void Vtb_ss___024root___nba_sequent__TOP__2(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__2\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__Vfuncout;
    __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__L;
    __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__L = 0;
    SData/*9:0*/ __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__R;
    __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__R = 0;
    CData/*4:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch = 0;
    CData/*1:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate = 0;
    SData/*12:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount = 0;
    SData/*13:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix = 0;
    CData/*6:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count = 0;
    CData/*4:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0;
    __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0;
    __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 0;
    SData/*9:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0;
    CData/*4:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0;
    // Body
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 = 0U;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0U;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 = 0U;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0U;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0U;
    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch 
        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch;
    __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 0U;
    __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 0U;
    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                    if ((8U >= (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                               >> 3U)))) {
                        vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 
                            = (0x0000000fU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                              >> 0x14U));
                        vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 
                            = (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                              >> 3U));
                        vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count = 0x3fU;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count = 0x45U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count = 0x42U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count = 0x47U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch = 0U;
    } else {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count))));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count))));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count))));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count 
                = ((0x47U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                    ? 0U : (0x0000007fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))));
        }
        if ((9U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state))) {
            if ((8U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state))) {
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state;
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 1U;
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state)));
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr) {
            if ((8U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr))) {
                vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wdata;
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr;
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 1U;
            }
        }
        if ((0x26U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id))) {
            if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate))) {
                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id;
                __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate = 1U;
            } else if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate))) {
                __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate = 2U;
            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate))) {
                if ((0x25U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id))) {
                    vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_data;
                    vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id;
                    vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 = 1U;
                }
                __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id)));
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr) {
            if ((0x25U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr))) {
                vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wdata;
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr;
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 = 1U;
            }
        }
        if ((0x12U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot))) {
            if ((0x11U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot))) {
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot;
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 1U;
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot)));
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr) {
            if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                          >> 2U)))) {
                vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memin;
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 1U;
            }
        }
        if ((0x12U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot))) {
            if ((0x11U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot))) {
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot;
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 1U;
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot)));
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memwr) {
            if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                          >> 2U)))) {
                vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memin;
                vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 
                    = (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                      >> 2U));
                vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 1U;
            }
        }
        if ((0x12U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch))) {
            if ((0x12U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch))) {
                __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch;
                __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0 = 1U;
            }
            __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch)));
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wr) {
            if ((0x12U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr))) {
                __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wdata;
                __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr;
                __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1 = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                    if ((2U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                        if ((3U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wdata 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__li_data;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch = 0U;
    } else if ((9U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch))) {
        if ((8U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch))) {
            vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch;
            vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 1U;
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch)));
    } else if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wr) {
        if ((8U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_addr))) {
            vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wdata;
            vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_addr;
            vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                    if ((2U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                        if ((3U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count) 
                                          >> 2U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_addr 
                                    = (0x0000000fU 
                                       & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count) 
                                          >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__R 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__li_data;
                                __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__L 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_rdata;
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL 
                                    = (0x000007ffU 
                                       & ((0x00000200U 
                                           & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__L))
                                           ? ((IData)(1U) 
                                              + (~ 
                                                 (0x000001ffU 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__L))))
                                           : (0x000001ffU 
                                              & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__L))));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vR 
                                    = (0x000007ffU 
                                       & ((0x00000200U 
                                           & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__R))
                                           ? ((IData)(1U) 
                                              + (~ 
                                                 (0x000001ffU 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__R))))
                                           : (0x000001ffU 
                                              & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__R))));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL 
                                    = (0x000007ffU 
                                       & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                          + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vR)));
                                if ((0x00000400U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL 
                                        = (0x000007ffU 
                                           & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                                 - (IData)(1U))));
                                    __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__Vfuncout 
                                        = (0x00000200U 
                                           | (0x000001ffU 
                                              & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                                 >> 1U)));
                                } else {
                                    __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__Vfuncout 
                                        = (0x000001ffU 
                                           & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL) 
                                              >> 1U));
                                }
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wdata 
                                    = __Vfunc_tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__39__Vfuncout;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fb = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__FM_out = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__fb_buf 
                    = (7U & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                     >> 0x00000010U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fb 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__fb_buf;
            }
        }
        if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
            if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
                if ((0x11U == (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                              >> 2U)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__FM_out 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix;
                    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix = 0U;
                } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute)))) {
                    __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix 
                        = (0x00003fffU & ((0x00000200U 
                                           & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__mdata))
                                           ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix) 
                                              - (0x000001ffU 
                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__mdata)))
                                           : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix) 
                                              + (0x000001ffU 
                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__mdata)))));
                }
            }
        }
        if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr = 0U;
        } else if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
            if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr = 1U;
            } else if ((3U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr = 0U;
            }
        }
        if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
            if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                    if ((0U == (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                               >> 2U)))) {
                        __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount)));
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                        = (0x0000ffffU & (((0x000001ffU 
                                            & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fnum) 
                                               * vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__mltbl
                                               [vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__ml])) 
                                           << (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__blk)) 
                                          >> 2U));
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pm) {
                        if ((1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount) 
                                          >> 0x0bU)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x0003ffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                                  + 
                                                  (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                                   >> 7U)));
                        } else if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount) 
                                                 >> 0x0bU)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x0003ffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                                  - 
                                                  (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase 
                                                   >> 7U)));
                        }
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memin 
                        = ((((~ ((0x11U >= (0x0000001fU 
                                            & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                               >> 2U))) 
                                 && (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey 
                                           >> (0x0000001fU 
                                               & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                  >> 2U)))))) 
                             & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key)) 
                            & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm)) 
                               | ((0x0eU != (0x0000001fU 
                                             & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                >> 2U))) 
                                  & (0x11U != (0x0000001fU 
                                               & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                  >> 2U))))))
                            ? 0U : (0x0003ffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout 
                                                   + vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase)));
                    if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                  >> 2U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey 
                            = (((~ ((IData)(1U) << 
                                    (0x0000001fU & 
                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                      >> 2U)))) & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey) 
                               | (0x0003ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key) 
                                                 << 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                     >> 2U)))));
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pm 
                        = (1U & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                         >> 0x00000022U)));
                }
            }
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_rdata 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array
            [((0x12U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr))
               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr)
               : 0U)];
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__mdata 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array
            [((0x12U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr))
               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr)
               : 0U)];
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memwr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute = 1U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fnum = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__blk = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__ml = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
            if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memwr = 1U;
                } else if ((3U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memwr = 0U;
                }
            }
        }
        if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wr = 0U;
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wr = 0U;
        } else if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
            if ((2U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                if ((3U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wr = 1U;
                    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count) 
                                  >> 2U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wr = 1U;
                    }
                }
            }
        }
        if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
            if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm) {
                if ((0x00000040U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute 
                        = ((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                  >> 5U)) || ((1U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                >> 4U)) 
                                              || ((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                      >> 3U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                         >> 2U)))));
                    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                              >> 2U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr = 0x0dU;
                                }
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute 
                        = ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                     >> 5U))) && ((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                      >> 4U)) 
                                                  && ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                           >> 3U))) 
                                                      && (1U 
                                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                             >> 2U)))));
                    if ((0x00000020U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr 
                            = ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                ? ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                    ? ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                        ? 0x10U : 0x0eU)
                                    : ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                        ? 0x11U : 0x0fU))
                                : ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                    ? ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                        ? 0x0dU : 0x10U)
                                    : ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                        ? 0x0eU : 0x0bU)));
                    } else if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr 
                                = ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                    ? 9U : 7U);
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                             >> 2U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr = 0x11U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                ? ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                    ? 0x0fU : 5U) : 
                               ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                 ? 3U : 1U));
                    }
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute 
                    = ((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                              >> 6U)) || (1U & ((0x00000020U 
                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                                 ? 
                                                ((0x00000010U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                      >> 3U)) 
                                                  && (1U 
                                                      & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                         >> 2U)))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                      >> 3U)) 
                                                  || (1U 
                                                      & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                         >> 2U))))
                                                 : 
                                                ((0x00000010U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                   >> 3U))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                      >> 3U)) 
                                                  && (1U 
                                                      & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                         >> 2U)))))));
                if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                              >> 6U)))) {
                    if ((0x00000020U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                            if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                              >> 2U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr = 0x11U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr 
                                    = ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                        ? 0x0fU : 0x0dU);
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                          >> 2U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr = 0x0bU;
                            }
                        }
                    } else if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr 
                                = ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                    ? 9U : 7U);
                        }
                    } else if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                      >> 2U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr = 5U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__maddr 
                            = ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                ? 3U : 1U);
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fnum 
                    = (0x000001ffU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata);
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__blk 
                    = (7U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                             >> 9U));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__ml 
                    = (0x0000000fU & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                              >> 0x0000001cU)));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count) 
                                  >> 2U));
        }
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate 
        = __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate;
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch 
        = __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch;
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix 
        = __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix;
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount 
        = __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount;
    if (__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array[__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v0] = 0U;
    }
    if (__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array[__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1] 
            = __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array__v1;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count 
        = __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count;
}

void Vtb_ss___024root___nba_sequent__TOP__4(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__4\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B;
    __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mapper_codies;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_codies = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0 = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1 = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock0;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock0 = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock = 0;
    CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__bank1;
    __Vdly__tb_ss__DOT__sys__DOT__bank1 = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__nvram_e;
    __Vdly__tb_ss__DOT__sys__DOT__nvram_e = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate = 0;
    CData/*2:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 = 0;
    CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s = 0;
    // Body
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock0;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0 
        = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check0;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1 
        = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check1;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock;
    __Vdly__tb_ss__DOT__sys__DOT__bank1 = vlSelfRef.tb_ss__DOT__sys__DOT__bank1;
    __Vdly__tb_ss__DOT__sys__DOT__nvram_e = vlSelfRef.tb_ss__DOT__sys__DOT__nvram_e;
    __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B = vlSelfRef.tb_ss__DOT__sys__DOT__lock_mapper_B;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock 
        = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies_lock;
    __Vdly__tb_ss__DOT__sys__DOT__mapper_codies = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2;
    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle;
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState;
    if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
        __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_select = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_player = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr = 0xffU;
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_txd = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_rxd = 0xffU;
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we)))) {
            if (vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we) {
                __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate 
                    = (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                             >> 0x10U));
            } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                if ((1U & (~ ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                              & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                                    >> 2U)))))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRS) {
                        __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate 
                            = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate)));
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we)))) {
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                    if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                         & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                               >> 2U)))) {
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                            if ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                if ((3U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind = 0U;
                                    }
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind = 0U;
                            }
                        }
                    } else if ((6U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind = 1U;
                    }
                }
            }
        }
        if (vlSelfRef.tb_ss__DOT__ss_we) {
            if ((0x0030U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                if ((0x0031U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    if ((0x0032U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        if ((0x0033U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                            if ((0x0034U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                if ((0x0036U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_select 
                                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                 >> 2U));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_player 
                                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                 >> 1U));
                                }
                            }
                            if ((0x0034U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr 
                                    = vlSelfRef.tb_ss__DOT__ss_din;
                            }
                        }
                        if ((0x0033U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_rxd 
                                = vlSelfRef.tb_ss__DOT__ss_din;
                        }
                    }
                    if ((0x0032U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_txd 
                            = vlSelfRef.tb_ss__DOT__ss_din;
                    }
                }
                if ((0x0031U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr 
                        = vlSelfRef.tb_ss__DOT__ss_din;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst)))) {
        if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
              & (0x0020U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
             & (0x0028U >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            if (((((((((0x0020U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                       | (0x0021U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                      | (0x0022U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                     | (0x0023U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                    | (0x0024U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                   | (0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                  | (0x0026U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                 | (0x0027U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                if ((0x0020U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    if ((0x0021U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        if ((0x0022U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                            if ((0x0023U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                if ((0x0024U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    if ((0x0025U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                        if ((0x0026U 
                                             == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0 
                                                = (1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                                            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1 
                                                = (1U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      >> 1U));
                                        }
                                    }
                                    if ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                        __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock 
                                            = (1U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                >> 1U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & 
             ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
              | (0x0026U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))))) {
            if ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 2U));
                __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 4U));
                __Vdly__tb_ss__DOT__sys__DOT__mapper_codies 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                             >> 3U));
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
        vlSelfRef.tb_ss__DOT__sys__DOT__bank0 = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__bank1 = 1U;
        vlSelfRef.tb_ss__DOT__sys__DOT__bank2 = 2U;
        vlSelfRef.tb_ss__DOT__sys__DOT__bank3 = 3U;
        __Vdly__tb_ss__DOT__sys__DOT__nvram_e = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__nvram_p = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__nvram_cme = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__mapper_codies = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle = 1U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__M1_n = 1U;
        __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s = 0U;
    } else {
        if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
              & (0x0020U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
             & (0x0028U >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            if (((((((((0x0020U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                       | (0x0021U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                      | (0x0022U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                     | (0x0023U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                    | (0x0024U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                   | (0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                  | (0x0026U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                 | (0x0027U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                if ((0x0020U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__bank0 
                        = vlSelfRef.tb_ss__DOT__ss_din;
                } else if ((0x0021U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    __Vdly__tb_ss__DOT__sys__DOT__bank1 
                        = vlSelfRef.tb_ss__DOT__ss_din;
                } else if ((0x0022U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__bank2 
                        = vlSelfRef.tb_ss__DOT__ss_din;
                } else if ((0x0023U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__bank3 
                        = vlSelfRef.tb_ss__DOT__ss_din;
                } else if ((0x0024U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__nvram_cme 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 3U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__nvram_p 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 2U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 1U));
                    __Vdly__tb_ss__DOT__sys__DOT__nvram_e 
                        = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                } else if ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 4U));
                    __Vdly__tb_ss__DOT__sys__DOT__mapper_codies 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 3U));
                    __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 2U));
                }
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx) {
            if (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)) 
                 & (0U == (0xfffcU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))) {
                if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                        __Vdly__tb_ss__DOT__sys__DOT__bank1 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__bank0 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__bank3 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__bank2 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                }
            }
        } else {
            if (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)) 
                 & (0xfffcU == (0xfffcU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))) {
                __Vdly__tb_ss__DOT__sys__DOT__mapper_codies = 0U;
                if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__bank2 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                    } else {
                        __Vdly__tb_ss__DOT__sys__DOT__bank1 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__bank0 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                 >> 4U));
                    __Vdly__tb_ss__DOT__sys__DOT__nvram_e 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                 >> 3U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__nvram_p 
                        = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                 >> 2U));
                }
            }
            if ((1U & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)) 
                       & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_e))))) {
                if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__lock_mapper_B) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__bank0 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                        if (((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in)) 
                             & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies_lock)))) {
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bank1))) {
                                __Vdly__tb_ss__DOT__sys__DOT__mapper_codies = 1U;
                            }
                            __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock = 1U;
                        }
                    }
                } else if ((0x4000U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    if ((0x4000U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr))) {
                        __Vdly__tb_ss__DOT__sys__DOT__bank1 
                            = (0x0000007fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in));
                        vlSelfRef.tb_ss__DOT__sys__DOT__nvram_cme 
                            = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                                     >> 7U));
                        __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B = 1U;
                    }
                } else if ((0x8000U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    if ((0x8000U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__bank2 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                        __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B = 1U;
                    }
                } else if ((0xa000U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                    if ((0xa000U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__bank2 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                        }
                    }
                }
            }
        }
        if (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we) {
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 
                = (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] 
                         >> 0x00000013U));
            __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 
                = (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] 
                         >> 0x00000012U));
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we) {
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle 
                = (7U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                         >> 0x16U));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState 
                = (7U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                         >> 0x13U));
            vlSelfRef.tb_ss__DOT__sys__DOT__M1_n = 
                (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                       >> 0x12U));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF 
                = (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                         >> 0x11U));
        } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetEI) {
                    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = 1U;
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 = 1U;
                }
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN) {
                    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2;
                }
            }
            if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetDI) {
                    __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = 0U;
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 = 0U;
                }
            }
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) 
                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle))) {
                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF = 0U;
            }
            if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                 & (2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__M1_n = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusReq_s) 
                          & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck))))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck = 0U;
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF = 1U;
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusReq_s) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck = 1U;
                    } else {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState = 1U;
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NextIs_XY_Fetch) {
                            __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle;
                            if ((0x36U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                                __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M = 2U;
                            }
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle = 6U;
                        } else if ((7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M)));
                        } else if (((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle) 
                                      == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles)) 
                                     | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR)) 
                                    | (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                        & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ)) 
                                       & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDecZ)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__M1_n = 0U;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle = 1U;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle = 0U;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle = 0U;
                            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s) 
                                 & (0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix)))) {
                                __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s = 0U;
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle = 1U;
                                __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = 0U;
                            } else if (((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1) 
                                          & (~ (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.IRQ_n))) 
                                         & (0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) 
                                        & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetEI)))) {
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle = 1U;
                                __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = 0U;
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 = 0U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)));
                        }
                    }
                } else if ((1U & (~ (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait) 
                                      & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2))) 
                                     | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i) 
                                        & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1))))))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)));
                }
            }
            if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__M1_n = 0U;
            }
            __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1;
            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) {
                __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 = 0U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst)))) {
        if (vlSelfRef.tb_ss__DOT__ss_we) {
            if ((0x0030U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                if ((0x0031U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    if ((0x0032U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        if ((0x0033U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                            if ((0x0034U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                if ((0x0036U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__analog_upper 
                                        = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
              & (0x0020U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
             & (0x0028U >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            if (((((((((0x0020U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                       | (0x0021U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                      | (0x0022U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                     | (0x0023U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                    | (0x0024U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                   | (0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                  | (0x0026U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                 | (0x0027U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                if ((0x0020U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    if ((0x0021U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        if ((0x0022U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                            if ((0x0023U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                if ((0x0024U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    if ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx 
                                            = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                                    }
                                    if ((0x0025U != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                        if ((0x0026U 
                                             != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr 
                                                = (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr)) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x0028U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr 
                    = ((0x00ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr)) 
                       | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                          << 8U));
            }
        } else if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n) 
                    & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__last_read_addr 
                = vlSelfRef.tb_ss__DOT__sys__DOT__A;
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we)))) {
                if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusReq_s = 0U;
                }
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
        __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0 = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1 = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock0 = 0U;
        __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx = 0U;
    } else if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                & ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                   | (0x0026U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))))) {
        if ((0x0025U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock 
                = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                         >> 1U));
            vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx 
                = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
        } else {
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1 
                = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                         >> 1U));
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0 
                = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
        }
    } else if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n) 
                & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock)))) {
        if (vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n) {
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check0) 
                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check1))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx = 1U;
            }
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock 
                = vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock0;
        } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0 
                = (0x41U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_out));
        } else if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1 
                = (0x42U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_out));
            __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock0 = 1U;
        }
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate 
        = __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate;
    vlSelfRef.tb_ss__DOT__sys__DOT__lock_mapper_B = __Vdly__tb_ss__DOT__sys__DOT__lock_mapper_B;
    vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies_lock 
        = __Vdly__tb_ss__DOT__sys__DOT__mapper_codies_lock;
    vlSelfRef.tb_ss__DOT__sys__DOT__bank1 = __Vdly__tb_ss__DOT__sys__DOT__bank1;
    vlSelfRef.tb_ss__DOT__sys__DOT__mapper_codies = __Vdly__tb_ss__DOT__sys__DOT__mapper_codies;
    vlSelfRef.tb_ss__DOT__sys__DOT__nvram_e = __Vdly__tb_ss__DOT__sys__DOT__nvram_e;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M 
        = __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 
        = __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s 
        = __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 
        = __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1;
    vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock0 
        = __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock0;
    vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check0 
        = __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check0;
    vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_check1 
        = __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_check1;
    vlSelfRef.tb_ss__DOT__sys__DOT__mapper_msx_lock 
        = __Vdly__tb_ss__DOT__sys__DOT__mapper_msx_lock;
}

void Vtb_ss___024root___nba_sequent__TOP__9(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__9\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v0) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v0 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v1) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v1 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v2) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v2 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v3) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v3 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v4) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v4 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v5) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v5 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v6) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v6 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v7) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v7 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v8) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v8 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v9) {
        vlSelfRef.__VdlySet__tb_ss__DOT__stat_rst__v9 = 0U;
        vlSelfRef.tb_ss__DOT__stat_rst = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v0) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v0 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v1) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v1 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v2) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v2 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v3) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v3 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v4) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v4 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v5) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v5 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v6) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v6 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v7) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v7 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v8) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v8 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v9) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_wr_stb__v9 = 0U;
        vlSelfRef.tb_ss__DOT__tb_wr_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v0) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v0 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v1) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v1 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v2) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v2 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v3) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v3 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v4) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v4 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v5) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v5 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v6) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v6 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v7) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v7 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v8) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v8 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__reset__v9) {
        vlSelfRef.__VdlySet__tb_ss__DOT__reset__v9 = 0U;
        vlSelfRef.tb_ss__DOT__reset = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v0) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v0 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v0;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v1) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v1 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v1;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v2) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v2 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v2;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v3) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v3 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v3;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v4) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v4 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v4;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v5) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v5 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v5;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v6) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v6 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v6;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v7) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v7 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v7;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v8) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v8 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v8;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v9) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_waddr__v9 = 0U;
        vlSelfRef.tb_ss__DOT__tb_waddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_waddr__v9;
    }
}

void Vtb_ss___024root___nba_sequent__TOP__13(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__13\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v0) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v0 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v1) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v1 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v2) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v2 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v3) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v3 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v4) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v4 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v5) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v5 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v6) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v6 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v7) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v7 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v8) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v8 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v9) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v9 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v10) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v10 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v11) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v11 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v12) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v12 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v13) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v13 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v14) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v14 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v15) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v15 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v16) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v16 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v17) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v17 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v18) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v18 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v19) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v19 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v20) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v20 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v21) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v21 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v22) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v22 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v23) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v23 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v24) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v24 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v25) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v25 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v26) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v26 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v27) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op_stb__v27 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v0) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v0 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v0;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v1) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v1 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v2) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v2 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v2;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v3) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v3 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v4) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v4 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v4;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v5) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v5 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v6) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v6 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v6;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v7) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v7 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v8) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v8 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v8;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v9) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v9 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v10) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v10 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v10;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v11) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v11 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v12) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v12 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v12;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v13) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v13 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v14) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v14 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v14;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v15) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v15 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v16) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v16 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v16;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v17) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v17 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v18) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v18 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v18;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v19) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v19 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v20) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v20 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v20;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v21) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v21 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v22) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v22 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v22;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v23) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v23 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v24) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v24 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v24;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v25) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v25 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v26) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v26 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_op__v26;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v27) {
        vlSelfRef.__VdlySet__tb_ss__DOT__tb_op__v27 = 0U;
        vlSelfRef.tb_ss__DOT__tb_op = 0U;
    }
}

void Vtb_ss___024root___nba_sequent__TOP__16(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__16\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr;
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__ff_egout = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable = 0x0003ffffU;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase = 0x00008000U;
    } else {
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
            = (0x003fffffU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase);
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                    if ((2U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                        if ((3U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__unnamedblk1__DOT__opout_buf 
                                = ((0x2000U > (0x00003fffU 
                                               & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__ff_egout) 
                                                  + 
                                                  (0x00001fffU 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data)))))
                                    ? ((0x00002000U 
                                        & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data)) 
                                       | (0x00001fffU 
                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__ff_egout) 
                                             + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data))))
                                    : (0x1fffU | (0x00002000U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__unnamedblk1__DOT__opout_buf;
                        }
                    }
                    if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__ff_egout 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__egout;
                    }
                }
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                = ((1U & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable) 
                   | (0x0003fffeU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                                     << 1U)));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                = ((0x0003fffeU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable) 
                   | (1U & VL_REDXOR_32((0x00024000U 
                                         & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable))));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                = (0x000fffffU & ((IData)(1U) + vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase));
            if ((0x1fU == (0x0000001fU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                                          >> 0x0fU)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                    = (0x00008000U | (0x00007fffU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase));
            }
            if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate 
                    = (3U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memout 
                             >> 0x00000017U));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                    = (0x007fffffU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memout);
            } else if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                    if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                            = ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))
                                ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rr)
                                : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__dr));
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__tl) 
                                               << 6U) 
                                              + (0x00001fffU 
                                                 & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                                    >> 9U))));
                    } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__ar;
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__tl) 
                                               << 6U) 
                                              + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__ardata)));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp = 0x1fffU;
                    }
                    if (((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable 
                          & (0x38U == (0x78U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) 
                         & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & ((IData)(0x2000U) 
                                              + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp)));
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__am) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp 
                            = (0x00007fffU & ((0x00080000U 
                                               & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase)
                                               ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp) 
                                                  + 
                                                  (0x000003ffU 
                                                   & ((IData)(0x03c0U) 
                                                      - 
                                                      (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                                                       >> 9U))))
                                               : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp) 
                                                  + 
                                                  (0x000003ffU 
                                                   & ((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase 
                                                       >> 9U) 
                                                      - (IData)(0x0040U))))));
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__egout 
                        = ((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp) 
                                         >> 7U))) ? 
                           (0x00001fffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp))
                            : 0x00001fffU);
                    if ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                            = (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm) 
                                              + (3U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rks) 
                                                    >> 2U))));
                        if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm 
                                = (0x0000000fU | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm));
                        }
                        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (4U | (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rks)));
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x007fffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                                  << 
                                                  (0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm) 
                                                      - (IData)(1U)))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                = (0x007fffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                                  + vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase));
                        } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x0000001fU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase);
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = ((0x007fffc0U & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase) 
                                   | (0x0000003fU & 
                                      ((IData)(6U) 
                                       * (4U | (3U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rks))))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                = (0x007fffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase 
                                                  << 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                = (0x007fffffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                                  - vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase));
                        }
                    }
                    if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                            if ((0x0fU <= (0x0000001fU 
                                           & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                              >> 0x12U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 0U;
                            }
                        } else if (((0x0000001fU & 
                                     (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase 
                                      >> 0x12U)) >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__sl))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate))) {
                        if ((0x00400000U & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase)) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 2U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0x007fffffU;
                    }
                    if (((~ ((0x11U >= (0x0000001fU 
                                        & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                           >> 2U))) 
                             && (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey 
                                       >> (0x0000001fU 
                                           & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                              >> 2U)))))) 
                         & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = 0x003fffffU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 1U;
                    } else if (((((0x11U >= (0x0000001fU 
                                             & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                >> 2U))) 
                                  && (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey 
                                            >> (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                   >> 2U))))) 
                                 & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key))) 
                                & (0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = 3U;
                    }
                    if ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                  >> 2U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey 
                            = (((~ ((IData)(1U) << 
                                    (0x0000001fU & 
                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                      >> 2U)))) & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey) 
                               | (0x0003ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key) 
                                                 << 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                     >> 2U)))));
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memin 
                        = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate) 
                            << 0x00000017U) | vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memout 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set
            [((0x11U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__rslot))
               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__rslot)
               : 0U)];
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__dr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__ar = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__sl = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__rslot = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__dr 
                    = (0x0000000fU & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                              >> 8U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__ar 
                    = (0x0000000fU & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                              >> 0x0000000cU)));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__sl 
                    = (0x0000000fU & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                              >> 4U)));
            }
        }
        if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__rslot 
                = ((0x11U == (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                             >> 2U)))
                    ? 0U : (0x0000001fU & ((IData)(1U) 
                                           + ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                              >> 2U))));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__am 
                        = (1U & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                         >> 0x00000023U)));
                }
            }
        }
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0] = 0x01ffffffU;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
    }
}

void Vtb_ss___024root___nba_sequent__TOP__17(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__17\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data 
            = (0x00003fffU & ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_sign) 
                                << 0x0000000dU) | (0x00001fffU 
                                                   & ((0x00001fffU 
                                                       & (((0x00000fffU 
                                                            & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data1) 
                                                               - (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data0))) 
                                                           * (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_weight)) 
                                                          >> 7U)) 
                                                      + 
                                                      ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data0) 
                                                       << 2U)))) 
                              | (- (IData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_wf)))));
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__ardata 
            = (0x00001fffU & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1) 
                               << 6U) + (0x00001fffU 
                                         & (((0x000000ffU 
                                              & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2) 
                                                 - (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1))) 
                                             * (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w)) 
                                            >> 2U))));
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_sign 
            = (1U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                     >> 0x11U));
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_weight 
            = (0x000001ffU & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr);
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data1 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__sin_data
            [(0x0000007fU & ((0x7fU == (0x0000007fU 
                                        & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                                           >> 9U)))
                              ? (~ (- (IData)((1U & 
                                               (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                                                >> 0x00000010U)))))
                              : (((IData)(1U) + (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                                                 >> 9U)) 
                                 ^ (- (IData)((1U & 
                                               (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                                                >> 0x00000010U)))))))];
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data0 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__sin_data
            [(0x0000007fU & ((- (IData)((1U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                                               >> 0x00000010U)))) 
                             ^ (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                                >> 9U)))];
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_wf 
            = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__wf) 
               & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                  >> 0x11U));
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w 
            = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
                              >> 7U));
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust
            [(0x0000007fU & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
                             >> 0x0000000fU))];
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust
            [(0x0000007fU & (((IData)(1U) + (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
                                             >> 0x0000000fU)) 
                             | (- (IData)((0x7fU == 
                                           (0x0000007fU 
                                            & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
                                               >> 0x0000000fU)))))))];
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__HL = (1U & (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j1_th_dir)) 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                                    >> 1U)) 
                                                | ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j2_th_dir)) 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                                                      >> 3U))));
    if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (0x0035U 
                                                 == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j1_th_dir 
            = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j2_th_dir 
            = (1U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                     >> 1U));
    } else {
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j1_th_dir 
            = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                     >> 1U));
        vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__j2_th_dir 
            = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl) 
                     >> 3U));
    }
}

void Vtb_ss___024root___nba_sequent__TOP__19(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__19\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx;
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr 
                    = (0x0003ffffU & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm) 
                                       & ((0x0eU == 
                                           (0x0000001fU 
                                            & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count) 
                                               >> 2U))) 
                                          | (0x11U 
                                             == (0x0000001fU 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count) 
                                                    >> 2U)))))
                                       ? (0x0000fe00U 
                                          | (0x00020000U 
                                             & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__noise)) 
                                                << 0x00000011U)))
                                       : (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm) 
                                           & (0x3cU 
                                              == (0x7cU 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count))))
                                           ? (0x0000fe00U 
                                              | (0x00020000U 
                                                 & ((~ 
                                                     (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pgout 
                                                      >> 0x11U)) 
                                                    << 0x00000011U)))
                                           : (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm) 
                                               & (0x40U 
                                                  == 
                                                  (0x7cU 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count))))
                                               ? vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pgout
                                               : ((0x00000200U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fdata))
                                                   ? 
                                                  (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pgout 
                                                   - vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__w_modula)
                                                   : 
                                                  (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pgout 
                                                   + vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__w_modula))))));
            }
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fdata 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array
            [((8U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__faddr))
               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__faddr)
               : 0U)];
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout;
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__pgout 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf;
                    }
                }
            }
            if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                    if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count)))) {
                        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__faddr 
                                = ((8U == (0x0000000fU 
                                           & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count) 
                                              >> 3U)))
                                    ? 0U : (0x0000000fU 
                                            & ((IData)(1U) 
                                               + ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count) 
                                                  >> 3U))));
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__wf = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise14 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise17 = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__wf_buf 
                    = (1U & (IData)((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                     >> 0x00000013U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__wf 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__wf_buf;
            }
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__noise 
            = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise14) 
               ^ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise17));
        if ((0U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
            if ((1U != (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count)))) {
                    if ((0x0eU == (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                                  >> 2U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise14 
                            = (1U & (IData)((0x8888888911111110ULL 
                                             >> (0x0000003fU 
                                                 & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout 
                                                    >> 0x0aU)))));
                    } else if ((0x11U == (0x0000001fU 
                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                             >> 2U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise17 
                            = (1U & (0x0aU >> (7U & 
                                               (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout 
                                                >> 0x0bU))));
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout 
            = ((0x11U >= (0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                         >> 2U))) ? vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array
               [(0x0000001fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count) 
                                >> 2U))] : 0U);
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__tl = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rks = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                if ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                      >> 5U) & (0x0cU <= (0x0000001fU 
                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                             >> 2U))))) {
                    if ((0x00000040U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                              >> 3U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                                  ? 
                                                 ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                                  >> 1U)
                                                  : 
                                                 ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                                  >> 2U)));
                                }
                            }
                        }
                    } else if ((0x00000020U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                        if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag 
                                = (1U & ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                          ? ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                                              ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                                 >> 3U)
                                              : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag))
                                          : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                             >> 4U)));
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag = 0U;
                }
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll 
                    = (0x000000feU & ((vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__kl_table
                                       [(0x0000000fU 
                                         & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                            >> 5U))] 
                                       - (0x00000038U 
                                          & (((IData)(7U) 
                                              - (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                                 >> 9U)) 
                                             << 3U))) 
                                      << 1U));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag) 
                             | (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                >> 0x0cU)));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll 
                    = ((IData)((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll) 
                                 >> 7U) | (0U == (3U 
                                                  & (IData)(
                                                            (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                             >> 0x0000001aU))))))
                        ? 0U : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll) 
                                >> (3U & ((IData)(3U) 
                                          - (IData)(
                                                    (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                     >> 0x0000001aU))))));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rhythm 
                    = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                             >> 5U));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll 
                    = ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                         >> 5U) & ((0x0eU == (0x0000001fU 
                                              & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                 >> 2U))) 
                                   | (0x10U == (0x0000001fU 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                   >> 2U)))))
                        ? (0x00000078U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                          >> 0x00000011U))
                        : ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))
                            ? (0x00000078U & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                              >> 0x0000000dU))
                            : (0x0000007eU & ((IData)(
                                                      (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                       >> 0x00000014U)) 
                                              << 1U))));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__key 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag;
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rks 
                    = (0x0000000fU & ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                        >> 5U) & (0x0eU 
                                                  <= 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                      >> 2U))))
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                         >> 0x00000020U)))
                                           ? 5U : (3U 
                                                   & (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                                      >> 0x0aU)))
                                       : ((1U & (IData)(
                                                        (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                         >> 0x00000020U)))
                                           ? (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                              >> 8U)
                                           : (3U & 
                                              (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
                                               >> 0x0aU)))));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll) 
                                      + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll)));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__rr 
                    = (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag)
                                       ? ((1U & (IData)(
                                                        (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                         >> 0x00000021U)))
                                           ? 0U : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data))
                                       : ((1U & ((~ 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                   >> 2U)) 
                                                 & (~ 
                                                    (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                                      >> 5U) 
                                                     & (7U 
                                                        <= 
                                                        (0x0000000fU 
                                                         & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                            >> 3U)))))))
                                           ? 0U : (
                                                   (0x00002000U 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata)
                                                    ? 5U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
                                                                >> 0x00000021U)))
                                                     ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data)
                                                     : 7U)))));
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__tl 
                    = ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll))
                        ? 0x0000007fU : (0x0000007fU 
                                         & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll)));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices
            [((0x25U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr))
               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr)
               : 0U)];
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices
            [((0x25U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_addr))
               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_addr)
               : 0U)];
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_addr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__extra_mode = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_addr 
                = (0x0000003fU & ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag) 
                                    >> 5U) & (6U <= 
                                              (0x0000000fU 
                                               & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                  >> 3U))))
                                   ? ((IData)(0x20U) 
                                      + ((0x0000001fU 
                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                             >> 2U)) 
                                         - (IData)(0x0cU)))
                                   : ((((8U >= (0x0000000fU 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                                   >> 3U)))
                                         ? vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache
                                        [(0x0000000fU 
                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                             >> 3U))]
                                         : 0U) << 1U) 
                                      + (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                               >> 2U)))));
        }
        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
                if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllwr) {
                    if (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__extra_mode)) 
                         & (8U > (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata;
                        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                                if (((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr)) 
                                     == (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                        = ((0x0000000fffffff00ULL 
                                            & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                           | (IData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat)));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 1U;
                                }
                            } else if (((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr)) 
                                        == (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                    = ((0x0000000fffff00ffULL 
                                        & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                       | ((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat)) 
                                          << 8U));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 1U;
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                            if (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr)) 
                                 & (0U == (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                    = ((0x0000000ff00fffffULL 
                                        & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                       | ((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat)) 
                                          << 0x00000014U));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 1U;
                            } else if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr) 
                                        & (0U == (1U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                    = ((0x0000000ffff0ffffULL 
                                        & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                       | ((QData)((IData)(
                                                          (0x0000000fU 
                                                           & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat)))) 
                                          << 0x00000010U));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 1U;
                            } else if ((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr) 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                    = ((0x0000000ff3ffffffULL 
                                        & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                       | ((QData)((IData)(
                                                          (3U 
                                                           & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat) 
                                                              >> 6U)))) 
                                          << 0x0000001aU));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                    = ((0x0000000ffff7ffffULL 
                                        & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                       | ((QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat) 
                                                              >> 4U)))) 
                                          << 0x00000013U));
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 1U;
                            }
                        } else if (((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr)) 
                                    == (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp 
                                = ((0x000000000fffffffULL 
                                    & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp) 
                                   | ((QData)((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat)) 
                                      << 0x0000001cU));
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 1U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wdata 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp;
                    } else if ((0x0eU == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat;
                    } else if ((0x10U <= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                        if ((0x3fU >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                            if (((0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr)) 
                                 == (0x0000000fU & 
                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                      >> 3U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata;
                                if ((1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr) 
                                                  >> 4U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                        = ((0x00ffff00U 
                                            & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp) 
                                           | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr = 1U;
                                } else if ((2U == (3U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr) 
                                                      >> 4U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                        = ((0x00ffc0ffU 
                                            & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp) 
                                           | (0x00003f00U 
                                              & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat) 
                                                 << 8U)));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr = 1U;
                                } else if ((3U == (3U 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr) 
                                                      >> 4U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp 
                                        = ((0x0000ffffU 
                                            & vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp) 
                                           | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat) 
                                              << 0x00000010U));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr = 1U;
                                }
                                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wdata 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp;
                            }
                        } else if ((0xf0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__extra_mode 
                                = (0x80U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat));
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex 
                = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                         >> 2U));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex;
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr = 0U;
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata 
            = ((8U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr))
                ? vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array
               [vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr]
                : 0U);
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllwr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr = 0U;
    } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllwr 
            = vlSelfRef.tb_ss__DOT__sys__DOT__fm_a;
        if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm_a)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opllptr 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm_d;
        }
        if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr 
                = (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count) 
                                  >> 3U));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset)))) {
        if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
            if (vlSelfRef.tb_ss__DOT__sys__DOT__fm_a) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__oplldat 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__fm_d;
            }
        }
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count;
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count;
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__w_modula 
        = ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count))
            ? (0x000ff800U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fdata) 
                              << 0x0000000bU)) : ((
                                                   (0x0007fc00U 
                                                    & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fdata) 
                                                       << 0x0000000aU)) 
                                                   >> 
                                                   (7U 
                                                    & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fb)))) 
                                                  & (- (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__fb))))));
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata;
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1) {
        vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array[vlSelfRef.__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1] 
            = vlSelfRef.__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count;
}
