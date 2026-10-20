// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

VL_ATTR_COLD void Vtb_ss_vdp__M3f___eval_static__TOP__tb_ss__DOT__sys__DOT__vdp_inst(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___eval_static__TOP__tb_ss__DOT__sys__DOT__vdp_inst\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum;
    __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum = 0;
    CData/*0:0*/ __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active = 0;
    CData/*0:0*/ __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active = 0;
    // Body
    vlSelfRef.__PVT__irq_line_count = 0xffU;
    vlSelfRef.__PVT__m2ct_address = 0xffU;
    vlSelfRef.__PVT__irq_delay = 7U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelfRef.__PVT__unnamedblk1__DOT__reset_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4419563653136380957ull);
    __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum = 0;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active = 0;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active = 0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__y9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14547664691734052749ull);
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11498931274634157729ull);
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14775631595972131244ull);
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12951988621012779876ull);
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16157254036293595092ull);
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__data_address = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6608729767918033579ull);
}

VL_ATTR_COLD void Vtb_ss_vdp__M3f___stl_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___stl_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ y1;
    y1 = 0;
    SData/*8:0*/ __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum;
    __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum = 0;
    CData/*0:0*/ __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active = 0;
    CData/*0:0*/ __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active = 0;
    // Body
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load 
        = ((~ (IData)(vlSelfRef.__PVT__spr_shift)) 
           & (0x0100U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)));
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224 
        = ((~ (IData)(vlSelfRef.__PVT__mode_M4)) & 
           ((0x00dfU > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
            | (0x01e0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))));
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248 
        = ((IData)(vlSelfRef.__PVT__spr_shift) & ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                  & ((0x00f8U 
                                                      > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
                                                     | (0x01f8U 
                                                        <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))));
    if ((0U != (IData)(vlSymsp->TOP.tb_ss__DOT__eng__DOT__state))) {
        vlSelfRef.__Vcellinp__vdp_vram_inst__address_a 
            = (0x00003fffU & vlSymsp->TOP.tb_ss__DOT__ss_mem_addr);
        vlSelfRef.__Vcellinp__vdp_vram_inst__wren_a 
            = (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_mem_we) 
                & (0U == (0x00018000U & vlSymsp->TOP.tb_ss__DOT__ss_mem_addr))) 
               & (0U != (IData)(vlSymsp->TOP.tb_ss__DOT__eng__DOT__state)));
    } else {
        vlSelfRef.__Vcellinp__vdp_vram_inst__address_a 
            = (((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__vdp_se_bank) 
                << 0x0000000eU) | (IData)(vlSelfRef.__PVT__xram_cpu_A));
        vlSelfRef.__Vcellinp__vdp_vram_inst__wren_a 
            = ((~ (IData)(vlSelfRef.__PVT__to_cram)) 
               & (IData)(vlSelfRef.__PVT__data_write));
    }
    vlSelfRef.__PVT__ss_cram_rd = ((0x00c0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                                   & (0x00ffU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)));
    vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color = 
        ((((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette_reg) 
           << 4U) | (((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3) 
                             >> 6U)) | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2) 
                                              >> 7U))) 
                     << 2U)) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0) 
                                                     >> 7U))));
    if (vlSelfRef.__PVT__mode_M4) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[0U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[1U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[2U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[3U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[4U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[5U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[6U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[7U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[8U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[9U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[10U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[11U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[12U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[13U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[14U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[15U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[16U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[17U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[18U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[19U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[20U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[21U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[22U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[23U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[24U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[25U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[26U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[27U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[28U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[29U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[30U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[31U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[32U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[33U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[34U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[35U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[36U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[37U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[38U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[39U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[40U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[41U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[42U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[43U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[44U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[45U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[46U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[47U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[48U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[49U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[50U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[51U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[52U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[53U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[54U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[55U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[56U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[57U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[58U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[59U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[60U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[61U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[62U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[63U] 
            = (0x0000000fU & ((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2) 
                                                     >> 7U))) 
                               << 2U) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1) 
                                                >> 6U)) 
                                         | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U)))));
    } else {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[0U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[1U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[2U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[3U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[4U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[5U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[6U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[7U] 
            = (0x0000000fU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[8U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[9U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[10U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[11U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[12U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[13U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[14U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[15U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[16U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[17U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[18U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[19U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[20U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[21U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[22U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[23U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[24U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[25U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[26U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[27U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[28U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[29U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[30U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[31U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[32U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[33U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[34U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[35U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[36U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[37U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[38U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[39U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[40U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[41U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[42U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[43U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[44U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[45U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[46U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[47U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[48U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[49U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[50U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[51U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[52U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[53U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[54U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[55U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[56U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[57U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[58U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[59U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[60U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[61U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[62U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[63U] 
            = (0x0000000fU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3) 
                              & (- (IData)((1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0) 
                                                  >> 7U))))));
    }
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[19U] 
        = (((0x00ffU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0)
             : ((0x0100U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1)
                 : ((0x0101U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2)
                     : ((0x0102U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00ffU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0104U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
        = (((QData)((IData)(((((((((2U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0) 
                                           >> 6U) | 
                                          (((IData)(vlSelfRef.__PVT__mode_M4) 
                                            << 1U) 
                                           & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1) 
                                               | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2) 
                                                  | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3))) 
                                              >> 6U)))) 
                                   | (1U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0) 
                                             >> 7U) 
                                            | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1) 
                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2) 
                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3))) 
                                                  >> 7U))))) 
                                  << 6U) | (((2U & 
                                              (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0) 
                                                >> 6U) 
                                               | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                   << 1U) 
                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1) 
                                                      | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2) 
                                                         | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3))) 
                                                     >> 6U)))) 
                                             | (1U 
                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0) 
                                                    >> 7U) 
                                                   | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                      & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1) 
                                                          | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2) 
                                                             | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3))) 
                                                         >> 7U))))) 
                                            << 4U)) 
                                | ((((2U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0) 
                                             >> 6U) 
                                            | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                << 1U) 
                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1) 
                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2) 
                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3))) 
                                                  >> 6U)))) 
                                     | (1U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0) 
                                               >> 7U) 
                                              | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1) 
                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2) 
                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3))) 
                                                    >> 7U))))) 
                                    << 2U) | ((2U & 
                                               (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0) 
                                                 >> 6U) 
                                                | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                    << 1U) 
                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1) 
                                                       | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2) 
                                                          | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3))) 
                                                      >> 6U)))) 
                                              | (1U 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0) 
                                                     >> 7U) 
                                                    | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                       & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1) 
                                                           | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2) 
                                                              | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3))) 
                                                          >> 7U))))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0) 
                                                           >> 6U) 
                                                          | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                              << 1U) 
                                                             & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1) 
                                                                 | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2) 
                                                                    | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3))) 
                                                                >> 6U)))) 
                                                      | (1U 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0) 
                                                             >> 7U) 
                                                            | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1) 
                                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2) 
                                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3))) 
                                                                  >> 7U))))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0) 
                                                             >> 6U) 
                                                            | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                << 1U) 
                                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1) 
                                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2) 
                                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3))) 
                                                                  >> 6U)))) 
                                                        | (1U 
                                                           & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0) 
                                                               >> 7U) 
                                                              | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 7U))))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0) 
                                                             >> 6U) 
                                                            | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                << 1U) 
                                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1) 
                                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2) 
                                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3))) 
                                                                  >> 6U)))) 
                                                        | (1U 
                                                           & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0) 
                                                               >> 7U) 
                                                              | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 7U))))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 << 1U) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 6U)))) 
                                                         | (1U 
                                                            & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0) 
                                                                >> 7U) 
                                                               | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1) 
                                                                      | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2) 
                                                                         | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3))) 
                                                                     >> 7U))))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0) 
                                             >> 6U) 
                                            | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                << 1U) 
                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1) 
                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2) 
                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3))) 
                                                  >> 6U)))) 
                                     | (1U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0) 
                                               >> 7U) 
                                              | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1) 
                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2) 
                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3))) 
                                                    >> 7U))))) 
                                    << 6U) | (((2U 
                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0) 
                                                    >> 6U) 
                                                   | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                       << 1U) 
                                                      & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1) 
                                                          | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2) 
                                                             | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3))) 
                                                         >> 6U)))) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0) 
                                                      >> 7U) 
                                                     | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1) 
                                                            | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2) 
                                                               | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3))) 
                                                           >> 7U))))) 
                                              << 4U)) 
                                  | ((((2U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0) 
                                               >> 6U) 
                                              | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                  << 1U) 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1) 
                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2) 
                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3))) 
                                                    >> 6U)))) 
                                       | (1U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0) 
                                                 >> 7U) 
                                                | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1) 
                                                       | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2) 
                                                          | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3))) 
                                                      >> 7U))))) 
                                      << 2U) | ((2U 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0) 
                                                     >> 6U) 
                                                    | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                        << 1U) 
                                                       & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1) 
                                                           | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2) 
                                                              | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3))) 
                                                          >> 6U)))) 
                                                | (1U 
                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0) 
                                                       >> 7U) 
                                                      | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1) 
                                                             | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2) 
                                                                | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3))) 
                                                            >> 7U))))))) 
                                 << 8U) | (((((2U & 
                                               (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0) 
                                                 >> 6U) 
                                                | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                    << 1U) 
                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1) 
                                                       | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2) 
                                                          | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3))) 
                                                      >> 6U)))) 
                                              | (1U 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0) 
                                                     >> 7U) 
                                                    | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                       & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1) 
                                                           | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2) 
                                                              | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3))) 
                                                          >> 7U))))) 
                                             << 6U) 
                                            | (((2U 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0) 
                                                     >> 6U) 
                                                    | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                        << 1U) 
                                                       & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1) 
                                                           | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2) 
                                                              | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3))) 
                                                          >> 6U)))) 
                                                | (1U 
                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0) 
                                                       >> 7U) 
                                                      | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1) 
                                                             | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2) 
                                                                | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3))) 
                                                            >> 7U))))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0) 
                                                     >> 6U) 
                                                    | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                        << 1U) 
                                                       & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1) 
                                                           | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2) 
                                                              | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3))) 
                                                          >> 6U)))) 
                                                | (1U 
                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0) 
                                                       >> 7U) 
                                                      | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1) 
                                                             | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2) 
                                                                | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3))) 
                                                            >> 7U))))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0) 
                                                      >> 6U) 
                                                     | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                         << 1U) 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1) 
                                                            | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2) 
                                                               | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3))) 
                                                           >> 6U)))) 
                                                 | (1U 
                                                    & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0) 
                                                        >> 7U) 
                                                       | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1) 
                                                              | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2) 
                                                                 | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3))) 
                                                             >> 7U))))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0) 
                                                          >> 6U) 
                                                         | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                             << 1U) 
                                                            & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1) 
                                                                | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2) 
                                                                   | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3))) 
                                                               >> 6U)))) 
                                                     | (1U 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0) 
                                                            >> 7U) 
                                                           | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                              & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1) 
                                                                  | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2) 
                                                                     | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3))) 
                                                                 >> 7U))))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0) 
                                                            >> 6U) 
                                                           | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                               << 1U) 
                                                              & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1) 
                                                                  | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2) 
                                                                     | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3))) 
                                                                 >> 6U)))) 
                                                       | (1U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0) 
                                                              >> 7U) 
                                                             | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 7U))))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0) 
                                                            >> 6U) 
                                                           | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                               << 1U) 
                                                              & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1) 
                                                                  | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2) 
                                                                     | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3))) 
                                                                 >> 6U)))) 
                                                       | (1U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0) 
                                                              >> 7U) 
                                                             | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 7U))))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0) 
                                                             >> 6U) 
                                                            | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                << 1U) 
                                                               & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1) 
                                                                   | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2) 
                                                                      | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3))) 
                                                                  >> 6U)))) 
                                                        | (1U 
                                                           & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0) 
                                                               >> 7U) 
                                                              | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 7U))))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0) 
                                                            >> 6U) 
                                                           | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                               << 1U) 
                                                              & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1) 
                                                                  | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2) 
                                                                     | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3))) 
                                                                 >> 6U)))) 
                                                       | (1U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0) 
                                                              >> 7U) 
                                                             | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 7U))))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 << 1U) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 6U)))) 
                                                         | (1U 
                                                            & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0) 
                                                                >> 7U) 
                                                               | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1) 
                                                                      | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2) 
                                                                         | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3))) 
                                                                     >> 7U))))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 << 1U) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 6U)))) 
                                                         | (1U 
                                                            & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0) 
                                                                >> 7U) 
                                                               | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1) 
                                                                      | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2) 
                                                                         | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3))) 
                                                                     >> 7U))))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0) 
                                                               >> 6U) 
                                                              | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  << 1U) 
                                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 6U)))) 
                                                          | (1U 
                                                             & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0) 
                                                                 >> 7U) 
                                                                | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1) 
                                                                       | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2) 
                                                                          | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3))) 
                                                                      >> 7U))))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0) 
                                                            >> 6U) 
                                                           | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                               << 1U) 
                                                              & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1) 
                                                                  | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2) 
                                                                     | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3))) 
                                                                 >> 6U)))) 
                                                       | (1U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0) 
                                                              >> 7U) 
                                                             | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 7U))))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 << 1U) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 6U)))) 
                                                         | (1U 
                                                            & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0) 
                                                                >> 7U) 
                                                               | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1) 
                                                                      | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2) 
                                                                         | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3))) 
                                                                     >> 7U))))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 << 1U) 
                                                                & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1) 
                                                                    | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2) 
                                                                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3))) 
                                                                   >> 6U)))) 
                                                         | (1U 
                                                            & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0) 
                                                                >> 7U) 
                                                               | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1) 
                                                                      | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2) 
                                                                         | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3))) 
                                                                     >> 7U))))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0) 
                                                               >> 6U) 
                                                              | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  << 1U) 
                                                                 & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 6U)))) 
                                                          | (1U 
                                                             & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0) 
                                                                 >> 7U) 
                                                                | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                   & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1) 
                                                                       | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2) 
                                                                          | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3))) 
                                                                      >> 7U))))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0) 
                                                             >> 6U) 
                                                            | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                << 1U) 
                                                               & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1) 
                                                                   | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2) 
                                                                      | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3))) 
                                                                  >> 6U)))) 
                                                        | (1U 
                                                           & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0) 
                                                               >> 7U) 
                                                              | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                 & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 7U))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0) 
                                                               >> 6U) 
                                                              | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  << 1U) 
                                                                 & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 6U)))) 
                                                          | (1U 
                                                             & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0) 
                                                                 >> 7U) 
                                                                | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                   & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1) 
                                                                       | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2) 
                                                                          | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3))) 
                                                                      >> 7U))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0) 
                                                               >> 6U) 
                                                              | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                  << 1U) 
                                                                 & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1) 
                                                                     | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2) 
                                                                        | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3))) 
                                                                    >> 6U)))) 
                                                          | (1U 
                                                             & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0) 
                                                                 >> 7U) 
                                                                | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                   & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1) 
                                                                       | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2) 
                                                                          | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3))) 
                                                                      >> 7U))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0) 
                                                                >> 6U) 
                                                               | (((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                   << 1U) 
                                                                  & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1) 
                                                                      | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2) 
                                                                         | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3))) 
                                                                     >> 6U)))) 
                                                           | (1U 
                                                              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0) 
                                                                  >> 7U) 
                                                                 | ((IData)(vlSelfRef.__PVT__mode_M4) 
                                                                    & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1) 
                                                                        | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2) 
                                                                           | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3))) 
                                                                       >> 7U))))))))))));
    __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum = 0U;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__disable_vscroll)) 
               | (0x000000c8U > ((IData)(0x00000010U) 
                                 + (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))))) {
        __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum 
            = (0x000001ffU & ((IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount) 
                              + (IData)(vlSelfRef.__PVT__bg_scroll_y)));
        if ((1U & ((~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1)) 
                   & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))))) {
            if ((0x00e0U <= (IData)(__PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum))) {
                __PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum 
                    = (0x000001ffU & ((IData)(__PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum) 
                                      - (IData)(0x00e0U)));
            }
        }
        vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y = 
            (0x000000ffU & (IData)(__PVT__vdp_main_inst__DOT__unnamedblk1__DOT__sum));
    } else {
        vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y = 
            (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount));
    }
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[0U] 
        = (((0x00a0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0)
             : ((0x00a1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1)
                 : ((0x00a2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[163U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00a0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00a5U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[1U] 
        = (((0x00a5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0)
             : ((0x00a6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1)
                 : ((0x00a7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[168U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00a5U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00aaU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[2U] 
        = (((0x00aaU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0)
             : ((0x00abU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1)
                 : ((0x00acU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[173U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00aaU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00afU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[3U] 
        = (((0x00afU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0)
             : ((0x00b0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1)
                 : ((0x00b1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[178U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00afU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00b4U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[4U] 
        = (((0x00b4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0)
             : ((0x00b5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1)
                 : ((0x00b6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[183U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00b4U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00b9U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[5U] 
        = (((0x00b9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0)
             : ((0x00baU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1)
                 : ((0x00bbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[188U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00b9U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00beU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[6U] 
        = (((0x00beU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0)
             : ((0x00bfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1)
                 : ((0x00c0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[193U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00beU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00c3U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[7U] 
        = (((0x00c3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0)
             : ((0x00c4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1)
                 : ((0x00c5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[198U]
                         ? (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00c3U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00c8U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[8U] 
        = (((0x00c8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0)
             : ((0x00c9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1)
                 : ((0x00caU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[203U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00c8U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00cdU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[9U] 
        = (((0x00cdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0)
             : ((0x00ceU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1)
                 : ((0x00cfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[208U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00cdU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00d2U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[10U] 
        = (((0x00d2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0)
             : ((0x00d3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1)
                 : ((0x00d4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[213U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00d7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00d2U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[11U] 
        = (((0x00d7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0)
             : ((0x00d8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1)
                 : ((0x00d9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[218U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00d7U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00dcU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[12U] 
        = (((0x00dcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0)
             : ((0x00ddU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1)
                 : ((0x00deU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[223U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00dcU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00e1U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[13U] 
        = (((0x00e1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0)
             : ((0x00e2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1)
                 : ((0x00e3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[228U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00e1U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00e6U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[14U] 
        = (((0x00e6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0)
             : ((0x00e7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1)
                 : ((0x00e8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[233U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00e6U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00ebU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[15U] 
        = (((0x00ebU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0)
             : ((0x00ecU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1)
                 : ((0x00edU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[238U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00ebU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00f0U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[16U] 
        = (((0x00f0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0)
             : ((0x00f1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1)
                 : ((0x00f2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[243U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00f0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00f5U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[17U] 
        = (((0x00f5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0)
             : ((0x00f6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1)
                 : ((0x00f7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[248U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00f5U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00faU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[18U] 
        = (((0x00faU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0)
             : ((0x00fbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1)
                 : ((0x00fcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[253U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x00faU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x00ffU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[20U] 
        = (((0x0104U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0)
             : ((0x0105U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1)
                 : ((0x0106U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[263U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0104U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0109U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[21U] 
        = (((0x0109U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0)
             : ((0x010aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1)
                 : ((0x010bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[268U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0109U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x010eU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[22U] 
        = (((0x010eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0)
             : ((0x010fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1)
                 : ((0x0110U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[273U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x010eU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0113U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[23U] 
        = (((0x0113U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0)
             : ((0x0114U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1)
                 : ((0x0115U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[278U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0113U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0118U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[24U] 
        = (((0x0118U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0)
             : ((0x0119U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1)
                 : ((0x011aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[283U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0118U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x011dU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[25U] 
        = (((0x011dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0)
             : ((0x011eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1)
                 : ((0x011fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[288U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x011dU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0122U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[26U] 
        = (((0x0122U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0)
             : ((0x0123U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1)
                 : ((0x0124U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[293U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0122U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0127U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[27U] 
        = (((0x0127U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0)
             : ((0x0128U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1)
                 : ((0x0129U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[298U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0127U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x012cU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[28U] 
        = (((0x012cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0)
             : ((0x012dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1)
                 : ((0x012eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[303U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x012cU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0131U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[29U] 
        = (((0x0131U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0)
             : ((0x0132U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1)
                 : ((0x0133U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[308U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0131U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0136U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[30U] 
        = (((0x0136U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0)
             : ((0x0137U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1)
                 : ((0x0138U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[313U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0136U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x013bU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[31U] 
        = (((0x013bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0)
             : ((0x013cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1)
                 : ((0x013dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[318U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x013bU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0140U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[32U] 
        = (((0x0140U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0)
             : ((0x0141U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1)
                 : ((0x0142U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[323U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0140U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0145U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[33U] 
        = (((0x0145U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0)
             : ((0x0146U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1)
                 : ((0x0147U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[328U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0145U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x014aU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[34U] 
        = (((0x014aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0)
             : ((0x014bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1)
                 : ((0x014cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[333U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x014aU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x014fU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[35U] 
        = (((0x014fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0)
             : ((0x0150U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1)
                 : ((0x0151U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[338U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x014fU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0154U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[36U] 
        = (((0x0154U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0)
             : ((0x0155U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1)
                 : ((0x0156U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[343U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0154U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0159U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[37U] 
        = (((0x0159U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0)
             : ((0x015aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1)
                 : ((0x015bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[348U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0159U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x015eU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[38U] 
        = (((0x015eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0)
             : ((0x015fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1)
                 : ((0x0160U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[353U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x015eU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0163U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[39U] 
        = (((0x0163U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0)
             : ((0x0164U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1)
                 : ((0x0165U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[358U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0163U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0168U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[40U] 
        = (((0x0168U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0)
             : ((0x0169U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1)
                 : ((0x016aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[363U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0168U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x016dU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[41U] 
        = (((0x016dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0)
             : ((0x016eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1)
                 : ((0x016fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[368U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x016dU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0172U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[42U] 
        = (((0x0172U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0)
             : ((0x0173U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1)
                 : ((0x0174U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[373U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0172U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0177U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[43U] 
        = (((0x0177U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0)
             : ((0x0178U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1)
                 : ((0x0179U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[378U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0177U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x017cU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[44U] 
        = (((0x017cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0)
             : ((0x017dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1)
                 : ((0x017eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[383U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x017cU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0181U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[45U] 
        = (((0x0181U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0)
             : ((0x0182U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1)
                 : ((0x0183U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[388U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0181U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0186U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[46U] 
        = (((0x0186U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0)
             : ((0x0187U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1)
                 : ((0x0188U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[393U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0186U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x018bU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[47U] 
        = (((0x018bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0)
             : ((0x018cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1)
                 : ((0x018dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[398U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x018bU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0190U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[48U] 
        = (((0x0190U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0)
             : ((0x0191U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1)
                 : ((0x0192U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[403U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0190U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x0195U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[49U] 
        = (((0x0195U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0)
             : ((0x0196U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1)
                 : ((0x0197U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[408U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x0195U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x019aU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[50U] 
        = (((0x019aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0)
             : ((0x019bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1)
                 : ((0x019cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[413U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x019aU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x019fU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[51U] 
        = (((0x019fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0)
             : ((0x01a0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1)
                 : ((0x01a1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[418U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x019fU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01a4U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[52U] 
        = (((0x01a4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0)
             : ((0x01a5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1)
                 : ((0x01a6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[423U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01a4U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01a9U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[53U] 
        = (((0x01a9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0)
             : ((0x01aaU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1)
                 : ((0x01abU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[428U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01a9U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01aeU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[54U] 
        = (((0x01aeU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0)
             : ((0x01afU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1)
                 : ((0x01b0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[433U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01aeU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01b3U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[55U] 
        = (((0x01b3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0)
             : ((0x01b4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1)
                 : ((0x01b5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[438U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01b3U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01b8U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[56U] 
        = (((0x01b8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0)
             : ((0x01b9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1)
                 : ((0x01baU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[443U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01b8U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01bdU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[57U] 
        = (((0x01bdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0)
             : ((0x01beU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1)
                 : ((0x01bfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[448U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01bdU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01c2U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[58U] 
        = (((0x01c2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0)
             : ((0x01c3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1)
                 : ((0x01c4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[453U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01c2U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01c7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[59U] 
        = (((0x01c7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0)
             : ((0x01c8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1)
                 : ((0x01c9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[458U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01c7U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01ccU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[60U] 
        = (((0x01ccU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0)
             : ((0x01cdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1)
                 : ((0x01ceU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[463U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01ccU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01d1U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[61U] 
        = (((0x01d1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0)
             : ((0x01d2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1)
                 : ((0x01d3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[468U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01d1U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01d6U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[62U] 
        = (((0x01d6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0)
             : ((0x01d7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1)
                 : ((0x01d8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[473U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01d6U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01dbU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[63U] 
        = (((0x01dbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
             ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0)
             : ((0x01dcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                 ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1)
                 : ((0x01ddU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                     ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2)
                     : (vlSymsp->TOP.__VdfgBinToOneHot_Tab_ha8957302_0_0[478U]
                         ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3)
                         : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock))))) 
           & (- (IData)(((0x01e0U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                         & (0x01dbU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))));
    vlSelfRef.__PVT__ss_cram_win = ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) 
                                    & (IData)(vlSelfRef.__PVT__ss_cram_rd));
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active = 0U;
    __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active = 0U;
    y1 = 1U;
    if ((((((0x0030U < (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
            & (0x00d0U >= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
           | ((0x0100U >= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
              & (0U < (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
          & ((~ (IData)(vlSelfRef.__PVT__mask_column0)) 
             | (9U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
         & (IData)(vlSelfRef.display_on))) {
        if ((((((((0x0018U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                  & (0x00a8U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount))) 
                 & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
                | (((0x0028U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                    & (0x00b8U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount))) 
                   & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
               | (0x00c0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount))) 
              | ((IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1) 
                 & (0x00e0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)))) 
             | ((IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3) 
                & (0x00f0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount))))) {
            __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active 
                = (0U != (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color));
            __PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active 
                = (0U != (0x0000000fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color)));
            if ((1U & ((~ (IData)(__PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active)) 
                       & (~ (IData)(__PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active))))) {
                vlSelfRef.__PVT__vdp_main_inst__DOT__out_color 
                    = vlSelfRef.__PVT__overscan;
                vlSelfRef.__PVT__cram_vdp_A = (0x00000010U 
                                               & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color));
                y1 = 0U;
            } else if ((((~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_priority)) 
                         & (IData)(__PVT__vdp_main_inst__DOT__unnamedblk2__DOT__spr_active)) 
                        | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_priority) 
                           & (~ (IData)(__PVT__vdp_main_inst__DOT__unnamedblk2__DOT__bg_active))))) {
                vlSelfRef.__PVT__vdp_main_inst__DOT__out_color 
                    = vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color;
                vlSelfRef.__PVT__cram_vdp_A = (0x00000010U 
                                               | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color));
            } else {
                vlSelfRef.__PVT__cram_vdp_A = vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color;
                vlSelfRef.__PVT__vdp_main_inst__DOT__out_color 
                    = (0x0000000fU & ((0U == (0x0000000fU 
                                              & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color)))
                                       ? (IData)(vlSelfRef.__PVT__overscan)
                                       : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color)));
            }
        } else {
            vlSelfRef.__PVT__cram_vdp_A = (0x00000010U 
                                           | (IData)(vlSelfRef.__PVT__overscan));
            vlSelfRef.__PVT__vdp_main_inst__DOT__out_color 
                = vlSelfRef.__PVT__overscan;
        }
    } else {
        vlSelfRef.__PVT__cram_vdp_A = (0x00000010U 
                                       | (IData)(vlSelfRef.__PVT__overscan));
        vlSelfRef.__PVT__vdp_main_inst__DOT__out_color 
            = vlSelfRef.__PVT__overscan;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                                 & (IData)(vlSelfRef.__PVT__ss_cram_win));
}

VL_ATTR_COLD void Vtb_ss_vdp__M3f___ctor_var_reset(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___ctor_var_reset\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_sys = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408254059745156541ull);
    vlSelf->ce_vdp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13656042693191080643ull);
    vlSelf->ce_pix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5281599081232318353ull);
    vlSelf->ce_sp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7549155432977346544ull);
    vlSelf->gg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11596500424625732877ull);
    vlSelf->ggres = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10164397724414594635ull);
    vlSelf->se_bank = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14632647803821524519ull);
    vlSelf->sp64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12179504034889699913ull);
    vlSelf->HL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2433170483699231469ull);
    vlSelf->RD_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14205087410918495952ull);
    vlSelf->WR_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 645934061092443658ull);
    vlSelf->IRQ_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2894841137382162950ull);
    vlSelf->WR_direct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7548831694397886085ull);
    vlSelf->A_direct = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12731231534726635002ull);
    vlSelf->A = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3969090544990846983ull);
    vlSelf->D_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8371100533903966356ull);
    vlSelf->D_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12258651673811892487ull);
    vlSelf->x = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9409450202036847209ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11123243248953317070ull);
    vlSelf->color = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 465961873555653160ull);
    vlSelf->palettemode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17505008617507724757ull);
    vlSelf->y1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4698530864673795457ull);
    vlSelf->mask_column = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16440401433494960829ull);
    vlSelf->black_column = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1983163421058990868ull);
    vlSelf->smode_M1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12903824447329990021ull);
    vlSelf->smode_M2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6984051858900821553ull);
    vlSelf->smode_M3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7348494864617838740ull);
    vlSelf->__PVT__smode_M4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952564848535977764ull);
    vlSelf->ysj_quirk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7561591905031069519ull);
    vlSelf->reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    vlSelf->ss_a = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17644560378561589971ull);
    vlSelf->ss_din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4723296112298386485ull);
    vlSelf->ss_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13150386821881685194ull);
    vlSelf->ss_dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16607975174106361039ull);
    vlSelf->ss_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1233590994656171618ull);
    vlSelf->ss_vram_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2875196878840972781ull);
    vlSelf->ss_vram_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14411299777947173630ull);
    vlSelf->ss_vram_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13740698066339799408ull);
    vlSelf->ss_vram_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3312982471480762885ull);
    vlSelf->__PVT__old_RD_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10187617435926522895ull);
    vlSelf->__PVT__old_WR_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13831840863574509601ull);
    vlSelf->__PVT__old_HL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9250129139042829573ull);
    vlSelf->__PVT__data_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8673424022260227415ull);
    vlSelf->__PVT__address_ff = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17598195367499990823ull);
    vlSelf->__PVT__to_cram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8482833358318168990ull);
    vlSelf->__PVT__spr_collide = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12807010530443910172ull);
    vlSelf->__PVT__spr_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11249985542296629988ull);
    vlSelf->__PVT__ss_cram_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1816167468912812260ull);
    vlSelf->__PVT__xram_cpu_A = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6778642891481362736ull);
    vlSelf->__PVT__vram_cpu_D_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16103590179856028879ull);
    vlSelf->__PVT__vram_cpu_D_outl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8269137113017445979ull);
    vlSelf->__PVT__xram_cpu_A_incr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 591198595296485251ull);
    vlSelf->__PVT__xram_cpu_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13516602459476554067ull);
    vlSelf->__PVT__vram_vdp_D = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4461008057415533639ull);
    vlSelf->__PVT__cram_vdp_A = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16662819331645264016ull);
    vlSelf->__PVT__cram_vdp_D = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15036497197305069219ull);
    vlSelf->display_on = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16227721242754849698ull);
    vlSelf->__PVT__disable_hscroll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2141078494637978907ull);
    vlSelf->__PVT__disable_vscroll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4286555329807754089ull);
    vlSelf->__PVT__mask_column0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17718126874435784996ull);
    vlSelf->__PVT__overscan = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15826574105668293712ull);
    vlSelf->irq_frame_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13484189672933150181ull);
    vlSelf->__PVT__irq_line_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9857799359631459225ull);
    vlSelf->__PVT__bg_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12667417157485354132ull);
    vlSelf->__PVT__m2mg_address = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13795299108245510650ull);
    vlSelf->__PVT__bg_scroll_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8699110224439166888ull);
    vlSelf->__PVT__bg_scroll_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1096998343800453109ull);
    vlSelf->__PVT__spr_address = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1023468195334544406ull);
    vlSelf->__PVT__spr_shift = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3006866036563950436ull);
    vlSelf->__PVT__spr_tall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12331834433235584961ull);
    vlSelf->__PVT__spr_wide = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16609134977166660582ull);
    vlSelf->__PVT__spr_high_bits = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1302982575202140780ull);
    vlSelf->__PVT__last_x0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2777839736167775916ull);
    vlSelf->__PVT__reset_flags = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 772049646427551450ull);
    vlSelf->__PVT__collide_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 48199746110552715ull);
    vlSelf->__PVT__xspr_collide_shift = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 65139916305072334ull);
    vlSelf->__PVT__overflow_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587411758492373891ull);
    vlSelf->__PVT__line_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347405522675118386ull);
    vlSelf->__PVT__hbl_counter = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4475860259132506415ull);
    vlSelf->vbl_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 141325613171118780ull);
    vlSelf->hbl_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10089815470277584393ull);
    vlSelf->__PVT__latched_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13128792417097515087ull);
    vlSelf->__PVT__cram_latch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12535804420622230390ull);
    vlSelf->__PVT__mode_M1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13528315072722808681ull);
    vlSelf->__PVT__mode_M2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2845618949083072344ull);
    vlSelf->__PVT__mode_M3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5429385383978522739ull);
    vlSelf->__PVT__mode_M4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7219991380225097434ull);
    vlSelf->__Vcellinp__vdp_vram_inst__wren_a = 0;
    vlSelf->__Vcellinp__vdp_vram_inst__address_a = 0;
    vlSelf->__PVT__ss_cram_win = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3091761350302224226ull);
    vlSelf->__PVT__cram_ss_lo = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8820106523169379005ull);
    vlSelf->__PVT__vdp_main_inst__DOT__bg_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17070874357300345220ull);
    vlSelf->__PVT__vdp_main_inst__DOT__bg_vram_A = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6021667874305870400ull);
    vlSelf->__PVT__vdp_main_inst__DOT__bg_color = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5218190781750987048ull);
    vlSelf->__PVT__vdp_main_inst__DOT__bg_priority = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2452532308689691900ull);
    vlSelf->__PVT__vdp_main_inst__DOT__out_color = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15340471171546684947ull);
    vlSelf->__PVT__vdp_main_inst__DOT__spr_color = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3606004021281058888ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__ss_shift[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8040523871613443849ull);
    }
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 165798714952528153ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10617759302871776637ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__index = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16199604416365579964ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4833903236845134500ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11066817761062092105ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8946162211950246554ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5704212166992563001ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15723779369441386916ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10226398320050301226ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8825320267465939888ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9824795379150610629ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5913818104538395186ull);
    }
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7667975430622524660ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224 = 0;
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248 = 0;
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load = 0;
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16829230561620171193ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15659975405369917077ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5031979934106025649ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6138444493580815342ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1521457197573494833ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9800581037968913622ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4652448905821962650ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7993572993461196926ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4701004598715856172ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6910273955185424626ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087627395634270652ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10069288429838811427ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1872794539452106426ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11234575187632009496ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13770840331979357061ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6301325710878383985ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11232540080157605470ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7741329820103745368ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17227469498952614640ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6022274199923629030ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11196240726120221903ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2259717460206513006ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3050316278308844343ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16749635694058247828ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16838532601983450021ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13302335054768013655ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13250200131555368258ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12477978722979328220ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15430085060497114244ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5074593768608569472ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10457684002573637630ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17375421849137414650ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3485481127634235867ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13895890070487985614ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12531059064390995109ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12231485114851987405ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8479103612445406742ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15438501663096602456ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8024426001468984042ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16283470901827487775ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17774403487576514020ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7937360107821276008ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17064344009171862447ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2996679793127125993ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14933439611023933137ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11583439018960967896ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16438768412609666974ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16562121486522651447ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2486470599442562665ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12560695367689087843ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6823581240204909077ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4502671555061734555ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17176789960255060410ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17164758166821590259ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13570461763456598294ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15571930062728093682ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18283545846024854576ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9280604664599096841ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5595166679574337761ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13461271099850170384ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1737448595231009548ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14820391427310603256ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7517775780577288848ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4324125378240941368ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10999675261465188644ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9868214731328096693ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3610634960695365836ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15496116230800835321ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6413838658884194397ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8709088150073591481ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405490310508028519ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 727431293528971294ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6805707700626135667ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16567388883862093259ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 955882424265181026ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5512996479965904162ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11613030344109939138ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13261495576087607229ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7594996421086655855ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15291222806743513107ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9955656992643698790ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4775006125990914999ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5360316857858170976ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15008487270773019745ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12491127947612409578ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1276702507299561972ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11159514359099652553ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3767879412004608456ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11523017704459505104ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16540578839556283900ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11543832620918418502ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16788386129545683067ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7270900340154693157ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15286949721732206424ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7279592999180135280ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8396916570408635501ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5443859651131798083ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11348937071810774561ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16560758615835269201ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11206129105743792134ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10109810043419792937ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5566200973093310296ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 578360599506993268ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8282363395913255031ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17493843294064560307ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14215002924145508059ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10510247277738280114ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2320115345422898791ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4953459191601246902ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8442514486400352097ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17692009826332980646ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4596935635772823708ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14168490036396553313ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11054919013825547502ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2879770172735873870ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7900195784750776431ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6374627903154468072ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1052971057199481527ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1066276728265832825ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15249995152569905260ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4661253573056449314ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12095953961949671685ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4286322856429636447ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10600595885419987465ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14999891807121478787ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10718866487989633896ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3618097500990482948ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17663531262788712594ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17780418168802338646ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12633691072687680167ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5147895395875950712ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15038923147465032526ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3205249472879176185ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13537417690477803913ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8075392106566090047ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15839519060568933757ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 771968111163742258ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14009929806490872557ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15133390006770967187ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2971164880516681264ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10723413567541239109ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18092351265584806239ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6153436482433122836ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15157401803223443336ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7351481326748565253ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 623811185606823827ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8194893545179897752ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10134697887916202847ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2714933572250280581ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6729416259949366851ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16530161681541833583ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12312052828560841686ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7269436015121981661ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14242617281935039187ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16016184533856392765ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1753629659582608888ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6885986782636183492ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16213380314001780673ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14517490215020420604ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12316878992989638191ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3074007445798732449ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3918465257854747312ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14199532503991559890ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4231433044697924165ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15364819261784553269ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8311071629562824001ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11984540416777536718ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13586392820199935929ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13480357855794207706ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14080935305674626518ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15107405482107385030ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15769502178197479752ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 406044793233144660ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12930464226559856272ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 319709505854296126ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11351835538596421277ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6094706770581513500ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1281020473604210707ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11628806880614823737ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9019989665050356631ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11282485639553506150ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 891520585337747449ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 598148901760981301ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12964283390721512128ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6633363715626858336ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14062460779911425331ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13341649971588780749ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13920811482368633978ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18061845167276112866ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6914393947870161695ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16033967630757517687ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10738924069761116079ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 528924756922372617ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3424488730510909308ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17708994645060970386ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3396206023322739830ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 508676265934387954ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7460440957579089061ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1942683207556068240ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13747237898793279764ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1765571015725963418ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17080771257996064564ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11478376300059818889ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13140095700470925543ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4964946859381152628ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5330082083366792684ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1343564697067492439ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13368814767597870570ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16922647563494793738ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11675698390079491472ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15744026220418591490ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3196558628089440710ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17216936711545497766ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7655773049412817184ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12102316897856177758ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1158932649109557051ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1546297838572551920ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10971299119497446960ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6665796108481846083ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17655914997014517108ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8297586337855087194ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15137477257339911988ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16175840887219606866ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18334078957468386886ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10483912718609261517ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13924047549793247687ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3388330154987849853ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16617103463585647289ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5779580865380908748ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15796732381339940129ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16177016027845499488ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15322614329623550707ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7904403201050306157ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4063862489044078772ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6527575562174402319ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 688380084226968693ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12323434601727637389ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13959143233605608559ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16080947112873883763ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8240853461131159815ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4781740718355543238ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3257905492640192909ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16707904432821510165ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1205633337623314279ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13590039185652131191ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11006658947656699041ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15650226508196900094ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9770275655663861850ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5785690101242321585ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6812781268941544235ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15468847228790230073ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3122832926859142285ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13882821423866348622ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9241837749535843955ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8119578060387313413ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16499057175301536399ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15038885803887506155ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13318009711805421961ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10409864873816631388ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8294564163732519410ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8862216432441339631ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6821006809810438616ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16250002346567953221ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16714876777727526187ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1545150753962750943ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12757449375755189913ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13531934730437489676ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3776472453530171235ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13657108276252498394ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11088683142284452167ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13399480492469777521ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9316665447581465782ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11113197814243729289ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7103998407132979029ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14603978666157006081ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2652424880580155294ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6657956599231698142ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11346512203760942955ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17115079214791012173ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14290661188522184772ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16812257159400733435ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1555586541889051212ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9189645106669728020ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18118179866164142345ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8685892050111421834ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 740946309845858115ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11574825647085336462ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8642645258666621574ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14466884045606961378ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18189386036210956438ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4180162915191364952ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 804667040280429872ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1768930059370489015ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12185423821658308538ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2874928209420222242ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7457912671359540105ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1893856914732921319ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1293591128076639079ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7683050656544003011ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1344633549967645579ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944018861292629788ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10161772205392017967ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10890555878579314999ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3404946433016378431ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10505378196877605278ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9411641317255156512ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9521722735770345876ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3148036788690383846ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2831748127327600026ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1125425641050680669ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16325751960625158106ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8222322431000785195ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4433912113408821699ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16388959555072471384ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13577616916345253571ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5749368405233361418ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18253650196418204084ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5889912650695305694ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6122882437472449568ull);
    vlSelf->vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7194212243338296414ull);
    vlSelf->vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6339434444943097387ull);
    vlSelf->vdp_main_inst__DOT__vdp_bg_inst__DOT__x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11643660766666485349ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6402123604405494675ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4066131922925892072ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__priority_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14556380049710199324ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__flip_x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 631469743012612999ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15888529136523518054ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4730113608458937327ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1184970414544516759ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13213131291993286006ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15931285024741438998ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16812300241908711559ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10066428606827631130ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8250009268050040430ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10982157268487371370ull);
    vlSelf->__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9547194923787123600ull);
    for (int __Vi0 = 0; __Vi0 < 32768; ++__Vi0) {
        vlSelf->vdp_vram_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1158977512592528711ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__vdp_cram_inst__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4699878104915309430ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__Vdly__hbl_irq = 0;
    vlSelf->__Vdly__collide_flag = 0;
    vlSelf->__Vdly__irq_delay = 0;
    vlSelf->__Vdly__spr_overflow = 0;
    vlSelf->__Vdly__reset_flags = 0;
    vlSelf->__Vdly__address_ff = 0;
    vlSelf->__Vdly__xram_cpu_read = 0;
    vlSelf->__Vdly__vram_cpu_D_outl = 0;
    vlSelf->__Vdly__xram_cpu_A_incr = 0;
    vlSelf->__Vdly__xram_cpu_A = 0;
    vlSelf->__Vdly__to_cram = 0;
    vlSelf->__VdlyVal__vdp_vram_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__vdp_vram_inst__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__vdp_vram_inst__DOT__mem__v0 = 0;
}
