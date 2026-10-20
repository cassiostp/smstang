// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

VL_ATTR_COLD void Vtb_ss___024root___eval_static__TOP(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss_vdp__M3f___eval_static__TOP__tb_ss__DOT__sys__DOT__vdp_inst(Vtb_ss_vdp__M3f* vlSelf);
extern const VlUnpacked<CData/*7:0*/, 64> Vtb_ss__ConstPool__TABLE_h5d47f540_0;
void Vtb_ss___024root___timing_ready(Vtb_ss___024root* vlSelf);

VL_ATTR_COLD void Vtb_ss___024root___eval_static(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_static\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ss___024root___eval_static__TOP(vlSelf);
    Vtb_ss_vdp__M3f___eval_static__TOP__tb_ss__DOT__sys__DOT__vdp_inst((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000800ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000001000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000002000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000004000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000008000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000010000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000020000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000040000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000080000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000100000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000200000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000400000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000800000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000001000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000002000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000004000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000008000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000010000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000020000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000040000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000080000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000100000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000200000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000400000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000800000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0 = 0U;
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
    Vtb_ss___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ss___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_ss___024root___stl_sequent__TOP__0(Vtb_ss___024root* vlSelf);
VL_ATTR_COLD void Vtb_ss_vdp__M3f___stl_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf);

VL_ATTR_COLD bool Vtb_ss___024root___eval_stl(Vtb_ss___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_stl\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ss___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_ss___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_ss___024root___stl_sequent__TOP__0(vlSelf);
                Vtb_ss_vdp__M3f___stl_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__stl(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_dump_triggers__stl\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ss___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__ico(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_dump_triggers__ico\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ss___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__act(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_dump_triggers__act\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ss___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__nba(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_dump_triggers__nba\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_ss___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__obs(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_dump_triggers__obs\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ss___024root___eval_dump_triggers__react(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_dump_triggers__react\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ss___024root___eval_final(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_final\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ss___024root___eval_static__TOP(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_static__TOP\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t = 0;
    SData/*8:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q = 0;
    CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD = 0;
    CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS = 0;
    CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair = 0;
    CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB = 0;
    // Body
    vlSelfRef.tb_ss__DOT__clk_sys = 0U;
    vlSelfRef.tb_ss__DOT__ce_cpu = 0U;
    vlSelfRef.tb_ss__DOT__ce_vdp = 0U;
    vlSelfRef.tb_ss__DOT__ce_pix = 0U;
    vlSelfRef.tb_ss__DOT__clkd = 0U;
    vlSelfRef.tb_ss__DOT__reset = 1U;
    vlSelfRef.tb_ss__DOT__tb_op = 0U;
    vlSelfRef.tb_ss__DOT__tb_op_stb = 0U;
    vlSelfRef.tb_ss__DOT__tb_raddr = 0U;
    vlSelfRef.tb_ss__DOT__tb_waddr = 0U;
    vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
    vlSelfRef.tb_ss__DOT__tb_taken = 0U;
    vlSelfRef.tb_ss__DOT__tb_wr_stb = 0U;
    vlSelfRef.tb_ss__DOT__tb_wdin = 0U;
    vlSelfRef.tb_ss__DOT__ss_ack_s = 0U;
    vlSelfRef.tb_ss__DOT__h_video = 0ULL;
    vlSelfRef.tb_ss__DOT__h_audio = 0ULL;
    vlSelfRef.tb_ss__DOT__stat_rst = 0U;
    vlSelfRef.tb_ss__DOT__vsync_prev = 0U;
    vlSelfRef.tb_ss__DOT__frames = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelfRef.tb_ss__DOT__eng_save_block__Vstatic__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3110402811671427446ull);
    vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13318100300098508298ull);
    vlSelfRef.tb_ss__DOT__eng_load_block__Vstatic__v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11807232581321321768ull);
    vlSelfRef.tb_ss__DOT__wait_frames__Vstatic__target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3413256694680880153ull);
    vlSelfRef.tb_ss__DOT__cyc = 0U;
    vlSelfRef.tb_ss__DOT__state_prev = 0U;
    vlSelfRef.tb_ss__DOT__cepix_cnt = 0U;
    vlSelfRef.tb_ss__DOT__frame_vh = 0ULL;
    vlSelfRef.tb_ss__DOT__frame_ah = 0ULL;
    vlSelfRef.tb_ss__DOT__vsync_prev2 = 0U;
    vlSelfRef.tb_ss__DOT__nvmon = 0U;
    vlSelfRef.tb_ss__DOT__eng_mem_req_prev = 0U;
    vlSelfRef.tb_ss__DOT__nvwrcnt = 0U;
    vlSelfRef.tb_ss__DOT__nvrstbcnt = 0U;
    vlSelfRef.tb_ss__DOT__lastwaddr = 0U;
    vlSelfRef.tb_ss__DOT__ss_loaded_seen = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__fm_touched = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16076202104832077133ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vR = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 2238066664757891405ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 720778258004858740ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1913123897900800007ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4102022352881156317ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 704043239922498018ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9618344828253439453ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14864254883255458703ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2940154510774540574ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8909392125082596876ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 13811751511573651736ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10150452938803705960ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7758936469855831223ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10047510937829843726ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2667657936218054255ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14670937057411107796ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 11978714189840174036ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__fb_buf = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3911580457793464543ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__wf_buf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7183916107277261455ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__extra_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14988307315806187313ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6935400696886428941ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9672680492403109195ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5801298628700602848ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__unnamedblk1__DOT__opout_buf = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18099973657547395924ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2607006891922748408ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10059716236077396987ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7796227514868660316ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 361665411840600956ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 11549116961893706631ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15379345088965826337ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6419580307674386488ull);
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17952093068030839282ull);
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t = 0;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q = 0;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD = 0;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS = 0;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair = 0;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB = 0;
    vlSelfRef.tb_ss__DOT__eng__DOT__state = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__err = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__was_load = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__settle_cnt = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__wdog = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__wait_cnt = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__ack_s = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__wr_pend = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__rd_pend = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__rd_out = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__resync = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__rd_lat = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__pend_addr = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__pend_din = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__fast_rdy = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__fast_q = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__fast_sel = 0U;
    vlSelfRef.tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10575281711430893311ull);
    vlSelfRef.__VdfgBinToOneHot_Pre_ha8957302_0_0 = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0.fill(0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ss___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_ss___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___trigger_anySet__stl\n"); );
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

extern const VlWide<16>/*511:0*/ Vtb_ss__ConstPool__CONST_h39c01a5a_0;

VL_ATTR_COLD void Vtb_ss___024root___stl_sequent__TOP__0(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___stl_sequent__TOP__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ tb_ss__DOT__sys__DOT__FM_gated;
    tb_ss__DOT__sys__DOT__FM_gated = 0;
    CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB = 0;
    IData/*16:0*/ tb_ss__DOT__sys__DOT__mix__DOT__sum;
    tb_ss__DOT__sys__DOT__mix__DOT__sum = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    // Body
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone2_sel 
        = ((0x010fU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
           | (0x0110U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)));
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel 
        = ((0x0111U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
           & (0x0115U > (IData)(vlSelfRef.tb_ss__DOT__ss_a)));
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs 
        = ((0x0100U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
           & (0x010bU > (IData)(vlSelfRef.tb_ss__DOT__ss_a)));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[0U] 
        = ((vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U] 
            << 0x00000010U) | (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U] 
                               >> 0x00000010U));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[1U] 
        = ((vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U] 
            << 0x00000010U) | (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U] 
                               >> 0x00000010U));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[2U] 
        = ((vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U] 
            << 0x00000010U) | (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U] 
                               >> 0x00000010U));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR[3U] 
        = ((vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] 
            << 0x00000010U) | (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U] 
                               >> 0x00000010U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((0x00000600U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__noise) 
                                                                    >> 8U)))) 
                                                     << 9U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__noise));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                     >> 9U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                     >> 8U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                     >> 7U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                     >> 6U)));
    vlSelfRef.tb_ss__DOT__ce_vdp_g = ((~ (IData)(vlSelfRef.tb_ss__DOT__ss_freeze)) 
                                      & (IData)(vlSelfRef.tb_ss__DOT__ce_vdp));
    vlSelfRef.tb_ss__DOT__ce_pix_g = ((~ (IData)(vlSelfRef.tb_ss__DOT__ss_freeze)) 
                                      & (IData)(vlSelfRef.tb_ss__DOT__ce_pix));
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel 
        = (7U & ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in))
                  ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                     >> 4U) : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__regn)));
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__u_vol__DOT__max 
        = (0x000000ffU & Vtb_ss__ConstPool__CONST_h39c01a5a_0
           [(0x07ffffffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3))]);
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res 
        = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates) 
           == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait 
        = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) 
           & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC 
        = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH
                    [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC]) 
            << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL
           [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC]);
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
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NextIs_XY_Fetch 
        = ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)) 
           & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind)) 
              & ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To)) 
                 | ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                    & ((0xcbU == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)) 
                       | (0x36U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)))))));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux 
        = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp)
            ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB)
            : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r)
                ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q)
                : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg)));
    vlSelfRef.tb_ss__DOT__ce_cpu_g = ((~ (IData)(vlSelfRef.tb_ss__DOT__ss_freeze)) 
                                      & (IData)(vlSelfRef.tb_ss__DOT__ce_cpu));
    vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst 
        = ((IData)(vlSelfRef.tb_ss__DOT__ss_reset) 
           | (IData)(vlSelfRef.tb_ss__DOT__reset));
    tb_ss__DOT__sys__DOT__FM_gated = (0x00001fffU & 
                                      ((((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__FM_out) 
                                                >> 0x0000000dU)) 
                                         == (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__FM_out) 
                                                   >> 0x0000000cU)))
                                         ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__FM_out)
                                         : ((0x00001000U 
                                             & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__FM_out) 
                                                >> 1U)) 
                                            | (0x00000fffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__FM_out) 
                                                                >> 0x0000000cU))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D))))));
    __VdfgRegularize_h6e95ff9d_0_36 = (0x00001fffU 
                                       & (- (IData)(
                                                    ((1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D) 
                                                          >> 1U))) 
                                                     != 
                                                     (1U 
                                                      & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D))))));
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
    __VdfgRegularize_h6e95ff9d_0_14 = ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                                       | ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                                          & ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                             & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16) 
                                                >> 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n)) 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__M1_n));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_cme) 
                                                 & (0xa000U 
                                                    == 
                                                    (0xe000U 
                                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex) 
                                                 & (0xc000U 
                                                    == 
                                                    (0xc000U 
                                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_e) 
                                                 & (0x8000U 
                                                    == 
                                                    (0xc000U 
                                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))));
    if ((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
        vlSelfRef.tb_ss__DOT____Vcellinp__wram__address 
            = (0x00001fffU & ((- (IData)((1U == (3U 
                                                 & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                                    >> 0x0000000fU))))) 
                              & vlSelfRef.tb_ss__DOT__ss_mem_addr));
        vlSelfRef.tb_ss__DOT____Vcellinp__wram__data 
            = vlSelfRef.tb_ss__DOT__ss_mem_din;
        vlSelfRef.tb_ss__DOT____Vcellinp__nvram__address_a 
            = (0x00007fffU & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                              & (- (IData)((2U == (3U 
                                                   & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                                      >> 0x0000000fU)))))));
        vlSelfRef.tb_ss__DOT____Vcellinp__wram__wren 
            = ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_we) 
               & (0x00008000U == (0x00018000U & vlSelfRef.tb_ss__DOT__ss_mem_addr)));
        vlSelfRef.tb_ss__DOT____Vcellinp__nvram__wren_a 
            = ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_we) 
               & (0x00010000U == (0x00018000U & vlSelfRef.tb_ss__DOT__ss_mem_addr)));
    } else {
        vlSelfRef.tb_ss__DOT____Vcellinp__wram__address 
            = (0x00001fffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A));
        vlSelfRef.tb_ss__DOT____Vcellinp__wram__data 
            = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
        vlSelfRef.tb_ss__DOT____Vcellinp__nvram__address_a 
            = (0x00007fffU & ((((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                    >> 0x0000000eU)) 
                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_p)) 
                               << 0x0000000eU) | (0x00003fffU 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))));
        vlSelfRef.tb_ss__DOT____Vcellinp__wram__wren 
            = (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n)) 
                & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n))) 
               & (0xc000U == (0xc000U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))));
        vlSelfRef.tb_ss__DOT____Vcellinp__nvram__wren_a 
            = ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n)) 
               & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)) 
                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34) 
                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)))));
    }
    __VdfgRegularize_h6e95ff9d_0_15 = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                                       & (3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)));
    vlSelfRef.tb_ss__DOT__smode_M1 = ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M2) 
                                      & (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M1));
    vlSelfRef.tb_ss__DOT__smode_M3 = ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M3) 
                                      & (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = (0x0000001fU 
                                                 & ((0x0000000fU 
                                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)) 
                                                    + 
                                                    ((1U 
                                                      & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r) 
                                                          >> 1U) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                                          & (1U 
                                                             == 
                                                             (5U 
                                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r)))))) 
                                                     + 
                                                     (0x0000000fU 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                                          ? 
                                                         (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB))
                                                          : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB))))));
    vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_ha8957302_0_0] = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[vlSelfRef.tb_ss__DOT__ss_a] = 1U;
    vlSelfRef.__VdfgBinToOneHot_Pre_ha8957302_0_0 = vlSelfRef.tb_ss__DOT__ss_a;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn 
        = ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck)) 
           & (IData)(vlSelfRef.tb_ss__DOT__ce_cpu_g));
    vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset 
        = ((6U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
           | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x00c0U 
                                                           & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_WR_n = (1U 
                                                & ((~ (IData)(
                                                              ((0x0040U 
                                                                == 
                                                                (0x00c0U 
                                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)));
    vlSelfRef.tb_ss__DOT__sys__DOT__vdp_WR_n = (1U 
                                                & ((~ (IData)(
                                                              ((0x0080U 
                                                                == 
                                                                (0x00c0U 
                                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)));
    vlSelfRef.tb_ss__DOT__sys__DOT__vdp_RD_n = (1U 
                                                & ((~ 
                                                    (((2U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                                           >> 6U))) 
                                                      | (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                                             >> 6U)))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__RD_n)));
    vlSelfRef.tb_ss__DOT__sys__DOT__fm_WR_n = (1U & 
                                               ((~ (IData)(
                                                           ((0x00f0U 
                                                             == 
                                                             (0x00feU 
                                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                                                | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)));
    vlSelfRef.tb_ss__DOT__sys__DOT__D_out = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                                                  ? (IData)(vlSelfRef.tb_ss__DOT__nvram_q)
                                                  : 
                                                 (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex)) 
                                                   & (0xc000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))
                                                   ? (IData)(vlSelfRef.tb_ss__DOT__ram_q)
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                                                    ? (IData)(vlSelfRef.tb_ss__DOT__nvram_q)
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                     ? (IData)(vlSelfRef.tb_ss__DOT__nvram_q)
                                                     : 
                                                    (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n)) 
                                                      & (0U 
                                                         == 
                                                         (0xc000U 
                                                          & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))
                                                      ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__boot_rom_D_out)
                                                      : (IData)(vlSelfRef.tb_ss__DOT__rom_do))))))
                                              : ((0xf2U 
                                                  == 
                                                  (0x000000ffU 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A)))
                                                  ? 
                                                 (0x000000f8U 
                                                  | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                                       >> 6U)))
                                                   ? 
                                                  ((0xffffff80U 
                                                    & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n) 
                                                        << 7U) 
                                                       & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out))) 
                                                   | (0x0000007fU 
                                                      & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out)))
                                                   : (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.D_out))));
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
            ? (1U | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                     << 2U)) : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB_r));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_14) 
            & (0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)))
            ? (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16)))
            : (((IData)(__VdfgRegularize_h6e95ff9d_0_14) 
                & (2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State) 
                               << 1U))) : ((IData)(__VdfgRegularize_h6e95ff9d_0_15)
                                            ? (2U | 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))
                                                ? (1U 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA_r)))));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                 >> 4U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = (0x0000000fU 
                                                 & ((7U 
                                                     & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                                        >> 4U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                         >> 4U)) 
                                                     + 
                                                     (7U 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                           >> 4U))
                                                          : 
                                                         ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                          >> 4U))))));
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone1_sel 
        = ((0x010eU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
           | vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[269U]);
    vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone0_sel 
        = ((0x010bU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
           | vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[268U]);
    tb_ss__DOT__sys__DOT__mix__DOT__sum = (0x0001ffffU 
                                           & (((0x00010000U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                   << 4U)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                  << 3U)) 
                                              + ((0x00010000U 
                                                  & ((IData)(tb_ss__DOT__sys__DOT__FM_gated) 
                                                     << 4U)) 
                                                 | ((IData)(tb_ss__DOT__sys__DOT__FM_gated) 
                                                    << 3U))));
    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
            = (IData)((0x0000ffffffffffffULL & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[3U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[2U])))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
            = (((IData)(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                          << 0x00000010U) | (QData)((IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] 
                                                             >> 0x00000010U))))) 
                << 0x00000010U) | (IData)(((0x0000ffffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[3U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[2U])))) 
                                           >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
            = (((IData)(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                          << 0x00000010U) | (QData)((IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] 
                                                             >> 0x00000010U))))) 
                >> 0x00000010U) | ((IData)((((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                              << 0x00000010U) 
                                             | (QData)((IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] 
                                                                >> 0x00000010U)))) 
                                            >> 0x00000020U)) 
                                   << 0x00000010U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
            = ((IData)((((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                          << 0x00000010U) | (QData)((IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] 
                                                             >> 0x00000010U)))) 
                        >> 0x00000020U)) >> 0x00000010U);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[3U];
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB 
        = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH
                    [tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB]) 
            << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL
           [tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB]);
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA 
        = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH
                    [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA]) 
            << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL
           [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA]);
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                 >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = (3U 
                                                 & ((1U 
                                                     & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                                        >> 7U)) 
                                                    + 
                                                    ((1U 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                         >> 3U)) 
                                                     + 
                                                     (1U 
                                                      & ((2U 
                                                          & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                           >> 7U))
                                                          : 
                                                         ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                          >> 7U))))));
    vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__clipped 
        = (0x0001ffffU & ((1U & VL_REDXOR_32((3U & 
                                              (tb_ss__DOT__sys__DOT__mix__DOT__sum 
                                               >> 0x0000000fU))))
                           ? (- (IData)((1U & (tb_ss__DOT__sys__DOT__mix__DOT__sum 
                                               >> 0x00000010U))))
                           : tb_ss__DOT__sys__DOT__mix__DOT__sum));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16 
        = (0x0000ffffU & ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))
                           ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA) 
                              - (IData)(1U)) : ((IData)(1U) 
                                                + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA))));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v 
        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                 >> 1U));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v 
        = ((0x00000080U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                           << 7U)) | ((0x00000070U 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                          << 4U)) | 
                                      (0x0000000fU 
                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))));
}

bool Vtb_ss___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ss___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_ss___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ss___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ss___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_ss.clk_sys)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_ss.sys.__Vcellinp__psg2_inst__rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_ss.sys.fm.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_ss.clk_sys)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_ss.sys.z80_inst.u0.ALU_Op_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_ss.sys.z80_inst.u0.Auto_Wait_t1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_ss.sys.z80_inst.u0.ExchangeDH)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_ss.sys.z80_inst.u0.IncDec_16)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_ss.sys.z80_inst.u0.MCycle)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( tb_ss.sys.z80_inst.u0.Read_To_Reg_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( tb_ss.sys.z80_inst.u0.Save_ALU_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( tb_ss.sys.z80_inst.u0.TState)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( 1'h1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( tb_ss.sys.z80_inst.u0.ID16)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( tb_ss.sys.z80_inst.u0.RegBusA_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( tb_ss.sys.z80_inst.u0.RegBusB)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( tb_ss.sys.z80_inst.u0.Save_Mux)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( tb_ss.sys.z80_inst.u0.alu.Carry7_v)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( tb_ss.sys.z80_inst.u0.alu.Carry_v)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( tb_ss.sys.z80_inst.u0.alu.Q_v)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( tb_ss.sys.z80_inst.u0.Arith16_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( tb_ss.sys.z80_inst.u0.BusA)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( tb_ss.sys.z80_inst.u0.BusB)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @( tb_ss.sys.z80_inst.u0.F)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @( tb_ss.sys.z80_inst.u0.ISet)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @( tb_ss.sys.z80_inst.u0.WZ)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @( tb_ss.sys.z80_inst.u0.XY_State)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @( tb_ss.sys.z80_inst.u0.Z16_r)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @( tb_ss.sys.z80_inst.u0.alu.HalfCarry_v)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @( tb_ss.sys.z80_inst.u0.alu.Overflow_v)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @( (TABLE_h5d47f540_0[tb_ss.sys.z80_inst.u0.IR[5:0]]))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @( tb_ss.sys.z80_inst.u0.IR[5:0])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @( tb_ss.sys.z80_inst.u0.IR)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @( tb_ss.sys.z80_inst.u0.IntCycle)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @( tb_ss.sys.z80_inst.u0.NMICycle)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @([initial_nba])\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ss___024root___ctor_var_reset(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___ctor_var_reset\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_ss__DOT__rom_do = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9608445035547015676ull);
    vlSelf->tb_ss__DOT__ram_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15871446151916844835ull);
    vlSelf->tb_ss__DOT__nvram_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7116661257354154268ull);
    vlSelf->tb_ss__DOT__audio_l = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3489928784526805469ull);
    vlSelf->tb_ss__DOT__audio_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11296943205668575882ull);
    vlSelf->tb_ss__DOT__smode_M1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2582229406638368338ull);
    vlSelf->tb_ss__DOT__smode_M3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5524738812013410091ull);
    vlSelf->tb_ss__DOT__HBlank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8122119736283879849ull);
    vlSelf->tb_ss__DOT__VBlank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1969738430956273862ull);
    vlSelf->tb_ss__DOT__HS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7958791544994328355ull);
    vlSelf->tb_ss__DOT__VS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9422584438337647588ull);
    vlSelf->tb_ss__DOT__ss_freeze = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10786226119428165526ull);
    vlSelf->tb_ss__DOT__ss_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11726271716337048171ull);
    vlSelf->tb_ss__DOT__ss_loaded = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16165365138613911684ull);
    vlSelf->tb_ss__DOT__ss_a = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13953650231030239134ull);
    vlSelf->tb_ss__DOT__ss_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12252115654145797693ull);
    vlSelf->tb_ss__DOT__ss_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13217397248894082712ull);
    vlSelf->tb_ss__DOT__ss_mem_addr = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 1368898633195329194ull);
    vlSelf->tb_ss__DOT__ss_mem_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10701083555434636316ull);
    vlSelf->tb_ss__DOT__ss_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15681430964240180460ull);
    vlSelf->tb_ss__DOT__ss_mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1725391315290262333ull);
    vlSelf->tb_ss__DOT__ss_img_rdy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6316465284002877391ull);
    vlSelf->tb_ss__DOT__ss_img_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14025904790316861721ull);
    vlSelf->tb_ss__DOT__ce_cpu_g = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1291200477271724318ull);
    vlSelf->tb_ss__DOT__ce_vdp_g = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15653975414509129223ull);
    vlSelf->tb_ss__DOT__ce_pix_g = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5020224859939249227ull);
    vlSelf->tb_ss__DOT____Vcellinp__wram__data = 0;
    vlSelf->tb_ss__DOT____Vcellinp__wram__wren = 0;
    vlSelf->tb_ss__DOT____Vcellinp__wram__address = 0;
    vlSelf->tb_ss__DOT____Vcellinp__nvram__wren_a = 0;
    vlSelf->tb_ss__DOT____Vcellinp__nvram__address_a = 0;
    for (int __Vi0 = 0; __Vi0 < 58880; ++__Vi0) {
        vlSelf->tb_ss__DOT__imgA[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1487269883130170309ull);
    }
    for (int __Vi0 = 0; __Vi0 < 58880; ++__Vi0) {
        vlSelf->tb_ss__DOT__imgA2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8483885796347883173ull);
    }
    for (int __Vi0 = 0; __Vi0 < 58880; ++__Vi0) {
        vlSelf->tb_ss__DOT__imgB2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3595759622881071735ull);
    }
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        vlSelf->tb_ss__DOT__vhA[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17825131404157108407ull);
    }
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        vlSelf->tb_ss__DOT__ahA[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3820146168498317590ull);
    }
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        vlSelf->tb_ss__DOT__vhB[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5780747676351223598ull);
    }
    for (int __Vi0 = 0; __Vi0 < 80; ++__Vi0) {
        vlSelf->tb_ss__DOT__ahB[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4920541964853142844ull);
    }
    vlSelf->tb_ss__DOT__eng_save_block__Vstatic__blk = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17376118653668025653ull);
    vlSelf->tb_ss__DOT__eng_save_block__Vstatic__base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6097716841803934403ull);
    vlSelf->tb_ss__DOT__sys__DOT__RD_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 362357980097839275ull);
    vlSelf->tb_ss__DOT__sys__DOT__WR_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7818644252997333449ull);
    vlSelf->tb_ss__DOT__sys__DOT__IORQ_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13012671463121642853ull);
    vlSelf->tb_ss__DOT__sys__DOT__M1_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12973614688061852484ull);
    vlSelf->tb_ss__DOT__sys__DOT__MREQ_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12811725935124131897ull);
    vlSelf->tb_ss__DOT__sys__DOT__A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1792060544488035667ull);
    vlSelf->tb_ss__DOT__sys__DOT__D_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9922410128604907760ull);
    vlSelf->tb_ss__DOT__sys__DOT__D_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9231963749027537495ull);
    vlSelf->tb_ss__DOT__sys__DOT__last_read_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6749272130513882228ull);
    vlSelf->tb_ss__DOT__sys__DOT__vdp_RD_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2482059739294424039ull);
    vlSelf->tb_ss__DOT__sys__DOT__vdp_WR_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12263354787425309324ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_D_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15121467756600190604ull);
    vlSelf->tb_ss__DOT__sys__DOT__boot_rom_D_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18027813608558738367ull);
    vlSelf->tb_ss__DOT__sys__DOT__bootloader_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16679084006827418942ull);
    vlSelf->tb_ss__DOT__sys__DOT__bank0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5695485109920038587ull);
    vlSelf->tb_ss__DOT__sys__DOT__bank1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16656939479918182959ull);
    vlSelf->tb_ss__DOT__sys__DOT__bank2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9943978007256900819ull);
    vlSelf->tb_ss__DOT__sys__DOT__bank3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12845190576555964519ull);
    vlSelf->tb_ss__DOT__sys__DOT__vdp_se_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2624115855931404629ull);
    vlSelf->tb_ss__DOT__sys__DOT__PSG_outL = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4841186370574240182ull);
    vlSelf->tb_ss__DOT__sys__DOT__PSG_outR = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8280042238707614785ull);
    vlSelf->tb_ss__DOT__sys__DOT__PSG_mux = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2825710748100496127ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_WR_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16902882470886473372ull);
    vlSelf->tb_ss__DOT__sys__DOT__FM_out = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11919484763504772583ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11039308896468490434ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13969572224084454128ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm_WR_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4948217976529934261ull);
    vlSelf->tb_ss__DOT__sys__DOT__det_D = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14688073316656918545ull);
    vlSelf->tb_ss__DOT__sys__DOT__HL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4704308828935970102ull);
    vlSelf->tb_ss__DOT__sys__DOT__nvram_e = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1503265448286916331ull);
    vlSelf->tb_ss__DOT__sys__DOT__nvram_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5288541017356545594ull);
    vlSelf->tb_ss__DOT__sys__DOT__nvram_p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11378963921138919822ull);
    vlSelf->tb_ss__DOT__sys__DOT__nvram_cme = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10872025499036958324ull);
    vlSelf->tb_ss__DOT__sys__DOT__lock_mapper_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 595253239729988238ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_codies = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1548058761590299874ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_codies_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9854162634891258145ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_msx_check0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14105850066635455763ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_msx_check1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11824247228015085690ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_msx_lock0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 103949229764790794ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_msx_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13625805577075082776ull);
    vlSelf->tb_ss__DOT__sys__DOT__mapper_msx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778374568964610975ull);
    vlSelf->tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst = 0;
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17362887431367445345ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__opllptr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4620852042542612946ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__oplldat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3594476233458839762ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__opllwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16516025909474962184ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__am = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16357731442040133967ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__pm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16415904332473759266ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__wf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5552367479456795918ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__tl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12620180997015563561ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__fb = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17066216847349342901ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__ar = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3924342049045821461ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__dr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7925188695348660910ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__sl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3421840726997464137ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__rr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8066208673866162586ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__ml = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 33569242822404655ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__fnum = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 597123314584878351ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__blk = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13410048777659779643ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__rks = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16640618825287005267ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__key = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13264493822331781779ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__rhythm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822572660644220648ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__noise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13443702159843979729ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__pgout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 5437759787189115055ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__egout = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18209862005462624102ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__opout = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 678766071540815552ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__faddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18240212338581804155ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__maddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6528176024798923158ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__fdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10404416513570703675ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__mdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8968914740191043221ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15567506445324263872ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6879284163776876490ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7695053852094961449ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18159366656784608208ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__li_data = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15522159257521065962ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17236884747473188469ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14315737179831582763ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_rdata = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16352637125165175776ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6816826139922342188ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_weight = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 840467073230591226ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7169504855669000036ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15283374087722062943ull);
    for (int __Vi0 = 0; __Vi0 < 19; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7966446445985190345ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11200772642589469635ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8330636237787318766ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__rslot = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7732134390046037699ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memin = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13914020199389572450ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memout = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14783415816278855973ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3339609072444861727ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 17171275283865959363ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__ardata = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4733465093585281641ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7903908543175016482ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17466886137946103112ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17505862385047704259ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 901787732170165293ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15619001119693578380ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5681740932974454144ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8074755060411469793ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1747583351923376617ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1565024145357346239ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 4329717294433385114ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wdata = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 18354025745366080726ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16487552669909210040ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1578106552010540036ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1409383227996842405ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wdata = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16723621013485511704ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2446140693302948816ull);
    for (int __Vi0 = 0; __Vi0 < 38; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices[__Vi0] = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15290020782413551441ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10539811579369554281ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_data = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2765588549454206430ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1500990375457082071ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16460224261525605789ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15553429272872468992ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__w_modula = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1632761523382216183ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__ff_egout = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2815143030143016495ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15181176905169729945ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data1 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 16371777661266056038ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18325674741453896244ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_wf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13837176384266515368ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_weight = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16860128143317449405ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12574506177059420648ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6512129251142395149ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9747160665880895384ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memin = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 3908657569715325418ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8322322124077864318ull);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 1887477029614510815ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13601915785447705893ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4398984279542703108ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11214397701421113400ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15981689336977404952ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15660153828875007533ull);
    vlSelf->tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2737918821356134515ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15759327400977180056ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14500339624387422568ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11564914800340452787ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__noise = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13799836258987730993ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3908028377504157010ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone0_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942679393578780944ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone1_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2874215460314037021ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone2_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13109629615606413088ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15794140931809478986ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2133552731971406121ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5643959653174713241ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2158077003991999800ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4175676325550059440ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6138765524878797985ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 975142100113981473ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10594259521810923763ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3139797943676926725ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__regn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 960375520113313907ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5131711639490800955ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11642172085088950101ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4067544826664401215ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__last_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6710923716877245359ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8775991062574100540ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__out2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4483182767334590743ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4544316344074672120ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__u_vol__DOT__max = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16315455000451778679ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2219309159068711320ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9013068271655472337ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__u_vol__DOT__max = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5625631315808971248ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16517216260402599469ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6778998146282473856ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__u_vol__DOT__max = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17609366426596438961ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2181575508084436155ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14339754737058698755ull);
    vlSelf->tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__u_vol__DOT__max = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9069724524830253994ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9304659855248922021ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 84010112675701080ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1096420179113069224ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9652805677968096738ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7411509675319773572ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5601278760923399239ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11209468650981725132ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16314826364788948503ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5732040283409166510ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3104345286668115953ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15806202396187040439ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17311609032317127590ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3220664572834174512ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10728586488410894964ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4948340362207855ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11653676243700958868ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15372600344361201413ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13944992172144113474ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18209198987676781655ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB_r = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3064212504126411447ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9011340385777017428ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7835769570311808776ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8888147335945769569ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12826582305895996599ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13095964133161714762ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8516246905742196247ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12753098336620304663ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3012290096754006386ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17284716693939658036ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17249630781992724370ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13290834673072552460ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18113434905614075899ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14168360321893986621ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15379496503458370302ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2087803789764662821ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusReq_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11076078955172912179ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1931900965579965190ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10711176618346436946ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13720739421755168091ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5392096368838186416ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6071869660613742499ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5810422917083885216ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3743975573591072867ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NextIs_XY_Fetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13009263150154133239ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15644158084030274558ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3897775212656017911ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BTR_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12586917585739832159ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2180661639977269337ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18045639455581398886ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11369834662918253087ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDecZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3451981501482218683ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1955470610531951856ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8920508164459080772ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3191525891430211885ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13420625848413448134ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14566980184357914056ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16433608460321086706ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8370177134961239250ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11764890450307742764ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15212933207478861148ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12784145619312874118ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9712096262815164168ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12988834695306160702ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15714586317546931119ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15426794233143924314ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11454810135010967789ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2236945053899415510ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4014332132113147329ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10988071074696793465ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2024467705960648490ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1289534241033790101ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17072700030999725081ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12670544423119071535ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10298424887378060623ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17397066095791707770ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13446296242651160510ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13127534676855054543ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1463612758548844987ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14972788889544535351ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5251001085253921169ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9916003051636759846ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10792883363197339725ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1631734285356783920ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14469229957465732496ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2099477543064049089ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11294407326113481959ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8194090367897741147ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11529356563268931786ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5865870093539192875ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6665854996691488733ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16617788598230982157ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeAF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3584018024216328300ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4889230629744378428ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15162337281430163693ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CPL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12480711220889708510ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CCF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13707206653036035638ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_SCF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14692401626689220807ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11262590040154344899ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11350322162272497171ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251216040856610886ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5444204823924571985ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RLD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12883330954435395536ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RRD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17499996007633647287ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RXDD = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 809741823810316733ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12970777951371907402ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5623723656615538156ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetDI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13564842115023041905ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetEI = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10495507934833398521ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13459486176189067158ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15976850576924146325ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393467665065576283ull);
    VL_ZERO_RESET_W(128, vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4965142067116601887ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5706985864798183490ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 376285327495957113ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4888020637134204343ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11716797969808869514ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16164385819254015791ull);
    vlSelf->tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16148342269397026053ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_ss__DOT__sys__DOT__boot_rom_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2967904621175881203ull);
    }
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3868286738688213889ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2599471216697940157ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__gg_txd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6769443274313045705ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__gg_rxd = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17736003033065335680ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15155095924426941959ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__j1_th_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1193135502719177779ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__j2_th_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5097931065314170302ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__analog_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16705928077043494154ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__analog_player = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14018388332786478033ull);
    vlSelf->tb_ss__DOT__sys__DOT__io_inst__DOT__analog_upper = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11157075415377971611ull);
    vlSelf->tb_ss__DOT__sys__DOT__mix__DOT__clipped = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 7001637360971035233ull);
    vlSelf->tb_ss__DOT__sys__DOT__mix__DOT__toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2283066504975040167ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_ss__DOT__nvram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11539512713096104190ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->tb_ss__DOT__rom__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2572969249294936861ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_ss__DOT__wram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13870997128929795657ull);
    }
    vlSelf->tb_ss__DOT__eng__DOT__vram_bytes = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 14239170039184486807ull);
    vlSelf->tb_ss__DOT__eng__DOT__wram_bytes = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 2196156734957263481ull);
    vlSelf->tb_ss__DOT__eng__DOT__total_bytes = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12000405648887152246ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_magic = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 981235360181708470ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_ver = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9808514280604450307ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15687511078999734696ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_flags = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5820383266842208791ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_total = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 10380095520895669847ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_vram = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 10229703970649277901ull);
    vlSelf->tb_ss__DOT__eng__DOT__chk_wram = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 15505143303452951191ull);
    vlSelf->tb_ss__DOT__eng__DOT__hdr_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10899181101842168059ull);
    vlSelf->tb_ss__DOT__eng__DOT__hdr_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 559057948703134234ull);
    vlSelf->tb_ss__DOT__vid__DOT__hcount = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7770680565378470142ull);
    vlSelf->tb_ss__DOT__vid__DOT__vcount = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8271137766294478938ull);
    VL_ZERO_RESET_W(112, vlSelf->__VdfgRegularize_h6e95ff9d_0_0);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    VL_ZERO_RESET_W(112, vlSelf->__VdfgRegularize_h6e95ff9d_0_4);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__bootloader_n = 0;
    vlSelf->__Vdly__tb_ss__DOT__ss_we = 0;
    vlSelf->__Vdly__tb_ss__DOT__ss_a = 0;
    vlSelf->__Vdly__tb_ss__DOT__ss_din = 0;
    vlSelf->__Vdly__tb_ss__DOT__vid__DOT__hcount = 0;
    vlSelf->__VdlyMask__tb_ss__DOT__vid__DOT__hcount = 0;
    vlSelf->__Vdly__tb_ss__DOT__vid__DOT__vcount = 0;
    vlSelf->__VdlyMask__tb_ss__DOT__vid__DOT__vcount = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count = 0;
    vlSelf->__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v3 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v3 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v5 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v5 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v7 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v3 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v9 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v9 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_wdin__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wdin__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v2 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_wdin__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wdin__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v3 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v3 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v10 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v10 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v10 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v11 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v11 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v12 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v12 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v12 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v13 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v13 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v9 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v10 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v11 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v14 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v14 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v14 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v15 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v15 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v7 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v16 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v16 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v16 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v17 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v17 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v4 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_wdin__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wdin__v2 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v5 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v5 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v5 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v18 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v18 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v18 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v19 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v19 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__stat_rst__v9 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__reset__v9 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v20 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v20 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v20 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v21 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v21 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v12 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v13 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_raddr__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_raddr__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_taken__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v14 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_rd_stb__v15 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v22 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v22 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v22 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v23 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v23 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v24 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v24 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v24 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v25 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v25 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v6 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_wdin__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wdin__v3 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v6 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v7 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v7 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__nvmon__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v8 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_wdin__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wdin__v4 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v8 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_wr_stb__v9 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_waddr__v9 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_waddr__v9 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__nvmon__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__tb_op__v26 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v26 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v26 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op_stb__v27 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__tb_op__v27 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0 = 0;
    vlSelf->__VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0;
    vlSelf->__VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0;
    vlSelf->__VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__fm__DOT__reset__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState__0 = 0;
    vlSelf->__Vtrigprevexpr_h6c597b80__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v__0 = 0;
    vlSelf->__Vtrigprevexpr_hbd471de6__0 = 0;
    vlSelf->__Vtrigprevexpr_h0a86ca6f__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
