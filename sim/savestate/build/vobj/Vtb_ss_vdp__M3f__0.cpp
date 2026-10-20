// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

void Vtb_ss_vdp__M3f___eval_initial__TOP__tb_ss__DOT__sys__DOT__vdp_inst(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___eval_initial__TOP__tb_ss__DOT__sys__DOT__vdp_inst\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[0U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[1U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[2U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[3U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[4U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[5U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[6U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[7U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[8U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[9U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[10U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[11U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[12U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[13U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[14U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[15U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[16U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[17U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[18U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[19U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[20U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[21U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[22U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[23U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[24U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[25U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[26U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[27U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[28U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[29U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[30U] = 0x0fffU;
    vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[31U] = 0x0fffU;
}

void Vtb_ss_vdp__M3f___act_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___act_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0\n"); );
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
}

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__hbl_counter;
    __Vdly__hbl_counter = 0;
    SData/*13:0*/ __Vdly__xspr_collide_shift;
    __Vdly__xspr_collide_shift = 0;
    CData/*2:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0;
    CData/*2:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0;
    CData/*6:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0;
    CData/*6:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0;
    CData/*5:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0;
    CData/*5:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0;
    SData/*13:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0;
    CData/*0:0*/ __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*0:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock;
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__x;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0;
    CData/*7:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x;
    __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0;
    SData/*13:0*/ __Vdly__vdp_main_inst__DOT__bg_vram_A;
    __Vdly__vdp_main_inst__DOT__bg_vram_A = 0;
    SData/*8:0*/ __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0;
    SData/*8:0*/ __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index;
    __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 = 0;
    CData/*7:0*/ __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v1;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v1 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v2;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v2 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v3;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v3 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v4;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v4 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v5;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v5 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v6;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v6 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v7;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v7 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v8;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v8 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v9;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v9 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v10;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v10 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v11;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v11 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v12;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v12 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v13;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v13 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v14;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v14 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v15;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v15 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v16;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v16 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v17;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v17 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v18;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v18 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v19;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v19 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v20;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v20 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v21;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v21 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v22;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v22 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v23;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v23 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v24;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v24 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v25;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v25 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v26;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v26 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v27;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v27 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v28;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v28 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v29;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v29 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v30;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v30 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v31;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v31 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v32;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v32 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v33;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v33 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v34;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v34 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v35;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v35 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v36;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v36 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v37;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v37 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v38;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v38 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v39;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v39 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v40;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v40 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v41;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v41 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v42;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v42 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v43;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v43 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v44;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v44 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v45;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v45 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v46;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v46 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v47;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v47 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v48;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v48 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v49;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v49 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v50;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v50 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v51;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v51 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v52;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v52 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v53;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v53 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v54;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v54 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v55;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v55 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v56;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v56 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v57;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v57 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v58;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v58 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v59;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v59 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v60;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v60 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v61;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v61 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v62;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v62 = 0;
    CData/*0:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v63;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v63 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v64;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v64 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v65;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v65 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v2;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v2 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2 = 0;
    CData/*7:0*/ __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2;
    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 = 0;
    CData/*5:0*/ __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2;
    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 = 0;
    CData/*0:0*/ __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 = 0;
    SData/*11:0*/ __VdlyVal__vdp_cram_inst__DOT__ram__v0;
    __VdlyVal__vdp_cram_inst__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__vdp_cram_inst__DOT__ram__v0;
    __VdlyDim0__vdp_cram_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__vdp_cram_inst__DOT__ram__v0;
    __VdlySet__vdp_cram_inst__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.__VdlySet__vdp_vram_inst__DOT__mem__v0 = 0U;
    vlSelfRef.__Vdly__collide_flag = vlSelfRef.__PVT__collide_flag;
    __Vdly__xspr_collide_shift = vlSelfRef.__PVT__xspr_collide_shift;
    __VdlySet__vdp_cram_inst__DOT__ram__v0 = 0U;
    __Vdly__hbl_counter = vlSelfRef.__PVT__hbl_counter;
    vlSelfRef.__Vdly__hbl_irq = vlSelfRef.hbl_irq;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__Vdly__irq_delay = vlSelfRef.__PVT__irq_delay;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address;
    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v64 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v65 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128 = 0U;
    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129 = 0U;
    vlSelfRef.__Vdly__spr_overflow = vlSelfRef.__PVT__spr_overflow;
    __Vdly__vdp_main_inst__DOT__bg_vram_A = vlSelfRef.__PVT__vdp_main_inst__DOT__bg_vram_A;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2;
    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 
        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3;
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00c3U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00c8U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00c3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00c4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00c5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00c6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00c7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[7U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[7U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[7U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[7U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[7U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[7U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[7U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[7U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00beU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00c3U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00beU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00bfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00c0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00c1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00c2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[6U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[6U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[6U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[6U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[6U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[6U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[6U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[6U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00b9U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00beU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00b9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00baU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00bbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00bcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00bdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[5U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[5U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[5U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[5U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[5U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[5U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[5U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[5U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00b4U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00b9U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00b4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00b5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00b6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00b7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00b8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[4U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[4U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[4U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[4U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[4U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[4U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[4U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[4U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00afU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00b4U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00afU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00b0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00b1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00b2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00b3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[3U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[3U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[3U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[3U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[3U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[3U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[3U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[3U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00aaU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00afU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00aaU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00abU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00acU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00adU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00aeU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[2U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[2U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[2U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[2U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[2U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[2U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[2U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[2U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00a5U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00aaU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00a5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00a6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00a7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00a8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00a9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[1U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[1U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[1U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[1U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[1U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[1U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[1U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[1U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00a0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00a5U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00a0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0xffU;
        } else if ((0x00a1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0xffU;
        } else if ((0x00a2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0xffU;
        } else if ((0x00a3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0xffU;
        } else if ((0x00a4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[0U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[0U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[0U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[0U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[0U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[0U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[0U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[0U];
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0xffU;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0xffU;
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                    = (0x000000feU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0xffU;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
                    = (1U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0xffU;
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock)));
        }
        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         (0x0060U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__x 
            = vlSymsp->TOP.tb_ss__DOT__ss_din;
        __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0xffU;
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__x 
            = (0x000000ffU & ((0x01e8U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))
                               ? ((IData)(vlSelfRef.__PVT__mode_M4)
                                   ? ((1U & ((~ (IData)(vlSelfRef.__PVT__disable_hscroll)) 
                                             | (0x0010U 
                                                <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount))))
                                       ? ((IData)(0xe8U) 
                                          - (IData)(vlSelfRef.__PVT__bg_scroll_x))
                                       : 0xe8U) : 0xf0U)
                               : ((IData)(1U) + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))));
        __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0xffU;
    }
    if (vlSelfRef.__Vcellinp__vdp_vram_inst__wren_a) {
        vlSelfRef.__VdlyVal__vdp_vram_inst__DOT__mem__v0 
            = vlSymsp->TOP.tb_ss__DOT____Vcellinp__wram__data;
        vlSelfRef.__VdlyDim0__vdp_vram_inst__DOT__mem__v0 
            = vlSelfRef.__Vcellinp__vdp_vram_inst__address_a;
        vlSelfRef.__VdlySet__vdp_vram_inst__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         (((0x0052U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
           & (0x0053U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
          | ((0x0055U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
             & (0x0056U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))))) {
        if ((0x0052U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            if ((0x0053U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                vlSelfRef.__Vdly__collide_flag = (1U 
                                                  & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                     >> 7U));
            } else if ((0x0055U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                __Vdly__xspr_collide_shift = ((0x00ffU 
                                               & (IData)(__Vdly__xspr_collide_shift)) 
                                              | (0x00003f00U 
                                                 & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                    << 8U)));
            } else if ((0x0056U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                __Vdly__xspr_collide_shift = ((0x3f00U 
                                               & (IData)(__Vdly__xspr_collide_shift)) 
                                              | (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            }
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
        __Vdly__xspr_collide_shift = ((0x00003ffeU 
                                       & ((IData)(vlSelfRef.__PVT__xspr_collide_shift) 
                                          << 1U)) | 
                                      ((0x0100U >= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
                                       & (IData)(vlSelfRef.__PVT__spr_collide)));
        if (((((IData)(vlSelfRef.__PVT__xspr_collide_shift) 
               >> 0x0dU) & (IData)(vlSelfRef.display_on)) 
             & ((0x00eaU > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                | (((~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1)) 
                    & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))) 
                   & (0x01f0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)))))) {
            vlSelfRef.__Vdly__collide_flag = 1U;
        }
        if (vlSelfRef.__PVT__reset_flags) {
            vlSelfRef.__Vdly__collide_flag = 0U;
        }
    }
    if ((((IData)(vlSelfRef.__PVT__to_cram) & (IData)(vlSelfRef.__PVT__data_write)) 
         | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))) {
        __VdlyVal__vdp_cram_inst__DOT__ram__v0 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                                   ? 
                                                  ((0x00000f00U 
                                                    & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                       << 8U)) 
                                                   | (IData)(vlSelfRef.__PVT__cram_ss_lo))
                                                   : 
                                                  ((((0x00000030U 
                                                      & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in)) 
                                                     | (0x0000000fU 
                                                        & ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                                           >> 2U))) 
                                                    << 6U) 
                                                   | ((0x0000003cU 
                                                       & ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in)))));
        __VdlyDim0__vdp_cram_inst__DOT__ram__v0 = (0x0000001fU 
                                                   & ((IData)(vlSelfRef.__PVT__ss_cram_win)
                                                       ? 
                                                      ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                                       >> 1U)
                                                       : (IData)(vlSelfRef.__PVT__xram_cpu_A)));
        __VdlySet__vdp_cram_inst__DOT__ram__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         ((0x0050U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
          | (0x0051U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))) {
        if ((0x0050U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__hbl_counter = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else {
            vlSelfRef.__Vdly__hbl_irq = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
        if (((0x01e6U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
             & ((IData)(vlSelfRef.__PVT__last_x0) != 
                (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))))) {
            if (((((0x00c0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                   | ((0x00f0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                      & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))) 
                  | ((0x00e0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                     & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
                 | (0x01ffU == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)))) {
                if ((0U == (IData)(vlSelfRef.__PVT__hbl_counter))) {
                    vlSelfRef.__Vdly__hbl_irq = ((IData)(vlSelfRef.hbl_irq) 
                                                 | (IData)(vlSelfRef.__PVT__irq_line_en));
                    __Vdly__hbl_counter = vlSelfRef.__PVT__irq_line_count;
                } else {
                    __Vdly__hbl_counter = (0x000000ffU 
                                           & ((IData)(vlSelfRef.__PVT__hbl_counter) 
                                              - (IData)(1U)));
                }
            } else {
                __Vdly__hbl_counter = vlSelfRef.__PVT__irq_line_count;
            }
        } else if (vlSelfRef.__PVT__reset_flags) {
            vlSelfRef.__Vdly__hbl_irq = 0U;
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00ffU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0104U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00ffU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0100U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0101U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0102U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0103U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[19U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[19U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[19U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[19U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[19U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[19U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[19U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[19U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01dbU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01e0U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01dbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01dcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01ddU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01deU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01dfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[63U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[63U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[63U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[63U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[63U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[63U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[63U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[63U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01d6U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01dbU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01d6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01daU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[62U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[62U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[62U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[62U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[62U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[62U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[62U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[62U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01d1U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01d6U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01d1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[61U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[61U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[61U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[61U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[61U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[61U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[61U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[61U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01ccU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01d1U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01ccU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01cdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01ceU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01cfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01d0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[60U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[60U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[60U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[60U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[60U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[60U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[60U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[60U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01c7U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01ccU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01c7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01caU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01cbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[59U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[59U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[59U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[59U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[59U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[59U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[59U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[59U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01c2U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01c7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01c2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[58U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[58U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[58U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[58U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[58U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[58U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[58U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[58U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01bdU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01c2U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01bdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01beU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01bfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01c1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[57U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[57U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[57U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[57U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[57U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[57U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[57U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[57U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01b8U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01bdU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01b8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01baU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01bbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01bcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[56U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[56U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[56U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[56U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[56U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[56U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[56U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[56U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01b3U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01b8U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01b3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[55U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[55U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[55U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[55U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[55U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[55U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[55U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[55U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01aeU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01b3U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01aeU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01afU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01b2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[54U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[54U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[54U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[54U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[54U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[54U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[54U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[54U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01a9U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01aeU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01a9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01aaU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01abU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01acU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01adU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[53U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[53U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[53U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[53U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[53U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[53U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[53U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[53U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x01a4U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01a9U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x01a4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[52U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[52U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[52U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[52U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[52U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[52U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[52U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[52U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x019fU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x01a4U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x019fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x01a3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[51U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[51U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[51U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[51U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[51U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[51U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[51U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[51U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x019aU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x019fU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x019aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x019bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x019cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x019dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x019eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[50U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[50U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[50U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[50U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[50U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[50U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[50U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[50U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0195U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x019aU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0195U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0196U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0197U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0198U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0199U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[49U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[49U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[49U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[49U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[49U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[49U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[49U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[49U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0190U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0195U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0190U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0191U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0192U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0193U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0194U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[48U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[48U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[48U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[48U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[48U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[48U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[48U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[48U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x018bU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0190U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x018bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x018cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x018dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x018eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x018fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[47U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[47U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[47U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[47U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[47U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[47U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[47U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[47U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0186U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x018bU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0186U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0187U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0188U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0189U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x018aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[46U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[46U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[46U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[46U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[46U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[46U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[46U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[46U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0181U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0186U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0181U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0182U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0183U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0184U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0185U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[45U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[45U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[45U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[45U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[45U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[45U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[45U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[45U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x017cU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0181U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x017cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x017dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x017eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x017fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0180U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[44U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[44U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[44U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[44U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[44U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[44U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[44U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[44U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0177U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x017cU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0177U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0178U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0179U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x017aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x017bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[43U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[43U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[43U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[43U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[43U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[43U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[43U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[43U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0172U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0177U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0172U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0173U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0174U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0175U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0176U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[42U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[42U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[42U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[42U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[42U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[42U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[42U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[42U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x016dU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0172U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x016dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x016eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x016fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0170U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0171U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[41U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[41U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[41U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[41U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[41U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[41U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[41U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[41U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0168U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x016dU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0168U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0169U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x016aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x016bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x016cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[40U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[40U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[40U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[40U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[40U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[40U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[40U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[40U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0163U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0168U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0163U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0164U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0165U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0166U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0167U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[39U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[39U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[39U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[39U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[39U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[39U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[39U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[39U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x015eU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0163U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x015eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x015fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0160U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0161U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0162U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[38U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[38U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[38U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[38U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[38U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[38U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[38U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[38U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0159U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x015eU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0159U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x015aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x015bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x015cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x015dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[37U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[37U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[37U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[37U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[37U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[37U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[37U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[37U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0154U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0159U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0154U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0155U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0156U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0157U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0158U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[36U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[36U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[36U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[36U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[36U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[36U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[36U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[36U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x014fU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0154U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x014fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0150U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0151U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0152U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0153U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[35U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[35U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[35U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[35U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[35U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[35U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[35U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[35U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x014aU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x014fU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x014aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x014bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x014cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x014dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x014eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[34U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[34U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[34U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[34U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[34U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[34U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[34U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[34U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0145U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x014aU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0145U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0146U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0147U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0148U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0149U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[33U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[33U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[33U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[33U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[33U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[33U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[33U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[33U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0140U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0145U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0140U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0141U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0142U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0143U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0144U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[32U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[32U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[32U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[32U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[32U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[32U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[32U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[32U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x013bU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0140U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x013bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x013cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x013dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x013eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x013fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[31U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[31U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[31U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[31U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[31U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[31U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[31U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[31U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0136U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x013bU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0136U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0137U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0138U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0139U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x013aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[30U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[30U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[30U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[30U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[30U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[30U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[30U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[30U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0131U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0136U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0131U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0132U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0133U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0134U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0135U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[29U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[29U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[29U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[29U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[29U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[29U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[29U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[29U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x012cU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0131U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x012cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x012dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x012eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x012fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0130U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[28U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[28U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[28U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[28U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[28U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[28U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[28U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[28U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0127U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x012cU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0127U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0128U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0129U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x012aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x012bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[27U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[27U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[27U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[27U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[27U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[27U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[27U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[27U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0122U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0127U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0122U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0123U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0124U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0125U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0126U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[26U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[26U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[26U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[26U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[26U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[26U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[26U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[26U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x011dU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0122U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x011dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x011eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x011fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0120U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0121U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[25U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[25U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[25U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[25U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[25U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[25U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[25U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[25U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0118U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x011dU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0118U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0119U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x011aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x011bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x011cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[24U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[24U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[24U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[24U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[24U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[24U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[24U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[24U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0113U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0118U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0113U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0114U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0115U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0116U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0117U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[23U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[23U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[23U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[23U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[23U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[23U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[23U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[23U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x010eU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0113U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x010eU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x010fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0110U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0111U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0112U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[22U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[22U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[22U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[22U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[22U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[22U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[22U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[22U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0109U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x010eU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0109U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x010aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x010bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x010cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x010dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[21U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[21U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[21U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[21U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[21U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[21U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[21U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[21U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0104U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0109U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0104U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0105U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0106U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0107U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0108U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[20U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[20U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[20U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[20U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[20U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[20U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[20U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[20U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00faU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00ffU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00faU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00fbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00fcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00fdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00feU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[18U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[18U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[18U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[18U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[18U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[18U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[18U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[18U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00f5U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00faU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00f5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[17U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[17U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[17U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[17U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[17U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[17U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[17U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[17U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00f0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00f5U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00f0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00f4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[16U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[16U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[16U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[16U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[16U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[16U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[16U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[16U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00ebU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00f0U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00ebU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00ecU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00edU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00eeU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00efU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[15U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[15U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[15U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[15U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[15U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[15U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[15U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[15U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00e6U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00ebU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00e6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00eaU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[14U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[14U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[14U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[14U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[14U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[14U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[14U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[14U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00e1U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00e6U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00e1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[13U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[13U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[13U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[13U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[13U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[13U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[13U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[13U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00dcU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00e1U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00dcU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00ddU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00deU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00dfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00e0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[12U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[12U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[12U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[12U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[12U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[12U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[12U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[12U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00d7U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00dcU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00d7U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00daU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00dbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[11U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[11U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[11U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[11U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[11U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[11U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[11U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[11U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00d2U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00d7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00d2U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d3U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d4U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d5U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d6U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[10U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[10U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[10U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[10U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[10U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[10U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[10U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[10U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00cdU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00d2U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00cdU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00ceU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00cfU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d0U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00d1U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[9U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[9U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[9U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[9U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[9U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[9U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[9U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[9U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x00c8U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x00cdU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x00c8U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00c9U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00caU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00cbU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x00ccU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[8U] 
               == (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
              & (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__load) 
                  & ((IData)(vlSelfRef.__PVT__mode_M4) 
                     | (~ (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[8U] 
                           >> 7U)))) | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x224) 
                                        & (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[8U] 
                                           >> 7U)))) 
             | ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[8U] 
                 == ((IData)(8U) + (0x000000ffU & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))) 
                & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT____Vcellinp__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__x248)))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[8U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[8U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[8U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[8U];
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock = 0U;
        } else {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__spr_wide)) 
                       | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock)))) {
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2) 
                                      << 1U));
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
                    = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0)) 
                       | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0) 
                                         << 1U)));
                if (vlSelfRef.__PVT__mode_M4) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 
                        = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3) 
                                          << 1U));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
                        = (0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
                        = ((0xfeU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0)) 
                           | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1) 
                                    >> 7U)));
                }
                __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 
                    = (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1) 
                                      << 1U));
            }
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock 
                = (1U & (~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock)));
        }
    }
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         (0x009fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        vlSelfRef.__Vdly__spr_overflow = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                >> 6U));
        vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
            = (0x0000000fU & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                              >> 2U));
        vlSelfRef.__PVT__spr_collide = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                              >> 7U));
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color = 0U;
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[63U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x3fU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[63U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[62U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x3eU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[62U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[61U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x3dU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[61U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[60U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x3cU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[60U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[59U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x3bU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[59U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[58U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x3aU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[58U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[57U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x39U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[57U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[56U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x38U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[56U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[55U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x37U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[55U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[54U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x36U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[54U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[53U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x35U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[53U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[52U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x34U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[52U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[51U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x33U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[51U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[50U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x32U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[50U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[49U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x31U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[49U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[48U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x30U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[48U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[47U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x2fU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[47U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[46U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x2eU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[46U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[45U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x2dU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[45U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[44U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x2cU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[44U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[43U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x2bU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[43U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[42U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x2aU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[42U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[41U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x29U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[41U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[40U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x28U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[40U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[39U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x27U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[39U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[38U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x26U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[38U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[37U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x25U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[37U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[36U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x24U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[36U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[35U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x23U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[35U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[34U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x22U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[34U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[33U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x21U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[33U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[32U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x20U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[32U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[31U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x1fU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[31U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[30U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x1eU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[30U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[29U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x1dU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[29U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[28U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x1cU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[28U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[27U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x1bU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[27U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[26U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x1aU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[26U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[25U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x19U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[25U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[24U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x18U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[24U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[23U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x17U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[23U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[22U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x16U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[22U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[21U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x15U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[21U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[20U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x14U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[20U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[19U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x13U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[19U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[18U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x12U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[18U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[17U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x11U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[17U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[16U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x10U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[16U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[15U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x0fU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[15U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[14U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x0eU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[14U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[13U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x0dU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[13U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[12U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x0cU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[12U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[11U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x0bU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[11U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[10U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 0x0aU)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[10U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[9U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 9U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[9U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[8U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 8U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[8U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[7U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 7U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[7U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[6U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 6U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[6U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[5U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 5U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[5U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[4U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 4U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[4U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[3U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 3U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[3U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[2U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 2U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[2U];
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[1U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 1U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[1U];
        }
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision = 0U;
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[7U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 7U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (0x00000080U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[6U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 6U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (0x00000040U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[5U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 5U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (0x00000020U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[4U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 4U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (0x00000010U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[3U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 3U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (8U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[2U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 2U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (4U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[1U] 
             & (IData)((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active 
                        >> 1U)))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (2U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        if ((vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[0U] 
             & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_active))) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__spr_color 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_color[0U];
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision 
                = (1U | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision));
        }
        vlSelfRef.__PVT__spr_collide = ((1U & (~ ((
                                                   (((((((0U 
                                                          == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision)) 
                                                         || (1U 
                                                             == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                        || (2U 
                                                            == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                       || (4U 
                                                           == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                      || (8U 
                                                          == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                     || (0x10U 
                                                         == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                    || (0x20U 
                                                        == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                   || (0x40U 
                                                       == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))) 
                                                  || (0x80U 
                                                      == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk2__DOT__collision))))) 
                                        && (1U & ((
                                                   ((0x00c0U 
                                                     > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                                                    | ((0x00e0U 
                                                        > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                                                       & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
                                                   | ((0x00f0U 
                                                       > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                                                      & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))) 
                                                  | ((IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount) 
                                                     >> 8U))));
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0070U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x009eU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0070U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state 
                = (7U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
        } else if ((0x0071U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count 
                = (0x0000007fU & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0x7fU;
        } else if ((0x0072U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index 
                = (0x0000003fU & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0x3fU;
        } else if ((0x0073U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                = ((0x3f00U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                   | (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
        } else if ((0x0074U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                = ((0x00ffU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                   | (0x00003f00U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                     << 8U)));
        } else if ((0x0075U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        } else if ((0x0076U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0 = 1U;
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v1 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v2 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v3 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v4 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v5 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v6 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v7 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v8 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v9 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v10 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v11 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v12 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v13 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v14 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v15 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v16 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v17 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v18 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v19 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v20 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v21 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v22 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v23 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v24 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v25 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v26 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v27 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v28 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v29 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v30 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v31 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v32 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v33 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v34 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v35 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v36 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v37 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v38 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v39 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v40 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v41 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v42 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v43 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v44 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v45 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v46 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v47 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v48 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v49 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v50 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v51 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v52 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v53 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v54 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v55 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v56 
                = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v57 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 1U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v58 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 2U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v59 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 3U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v60 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 4U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v61 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 5U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v62 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 6U));
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v63 
                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                         >> 7U));
        } else if (((0x0077U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                    & (0x00b7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 
                = (0x0000003fU & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                  - (IData)(0x37U)));
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0 = 1U;
        } else if (((0x007fU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                    & (0x00bfU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 
                = (0x0000003fU & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                  - (IData)(0x3fU)));
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0 = 1U;
        } else if (((0x0087U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                    & (0x00c7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 
                = (0x0000003fU & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                  - (IData)(7U)));
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0 = 1U;
        } else if (((0x008fU <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                    & (0x00cfU > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 
                = (0x0000003fU & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                  - (IData)(0x0fU)));
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0 = 1U;
        } else if (((0x0097U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                    & (0x00d7U > (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 
                = (0x0000003fU & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                  - (IData)(0x17U)));
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0 = 1U;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
        if ((0x0101U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0x7fU;
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v64 = 1U;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 1U;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0x3fU;
            vlSelfRef.__Vdly__spr_overflow = 0U;
            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v65 = 1U;
        } else if ((0x01f0U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) {
            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
        } else {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__y9 
                = vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount;
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9 
                = vlSelfRef.__PVT__vram_vdp_D;
            if ((0x00f0U <= (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9))) {
                vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9 
                    = (0x000001ffU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9) 
                                      - (IData)(0x0100U)));
            }
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta 
                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__y9) 
                                  - (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9)));
            if (vlSelfRef.__PVT__mode_M4) {
                if ((4U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                    if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                        if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index 
                                = (0x0000003fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index)));
                            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0x3fU;
                            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 
                                = vlSelfRef.__PVT__vram_vdp_D;
                            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 
                                = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1 = 1U;
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 1U;
                            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128 
                                = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128 = 1U;
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count 
                                = (0x0000007fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)));
                            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0x7fU;
                        } else {
                            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 
                                = vlSelfRef.__PVT__vram_vdp_D;
                            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 
                                = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1 = 1U;
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                            __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                        }
                    } else {
                        if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 
                                = vlSelfRef.__PVT__vram_vdp_D;
                            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 
                                = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1 = 1U;
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 6U;
                        } else {
                            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 
                                = vlSelfRef.__PVT__vram_vdp_D;
                            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 
                                = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1 = 1U;
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 5U;
                        }
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    }
                } else if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                        __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 
                            = (0x000000ffU & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              - (IData)(1U)));
                        __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 
                            = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                        __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1 = 1U;
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 4U;
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    } else {
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                            = ((0x003fU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                               | (((0x00000080U & ((IData)(vlSelfRef.__PVT__spr_high_bits) 
                                                   << 5U)) 
                                   | (0x0000007fU & 
                                      ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                       >> 1U))) << 6U));
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 3U;
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__spr_tall)))) {
                            __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                                = ((0x3fdfU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                                   | (0x00000020U & 
                                      ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                       << 5U)));
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                    if ((((0x00d0U == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9)) 
                          & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
                         & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3)))) {
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    } else if ((IData)(((0U == (0x01e0U 
                                                & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta))) 
                                        & (((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta) 
                                                >> 4U)) 
                                            | ((IData)(vlSelfRef.__PVT__spr_tall) 
                                               & (IData)(vlSelfRef.__PVT__spr_wide))) 
                                           & (((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta) 
                                                   >> 3U)) 
                                               | (IData)(vlSelfRef.__PVT__spr_tall)) 
                                              | (IData)(vlSelfRef.__PVT__spr_wide)))))) {
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                            = ((0x3fc3U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                               | (0x0000003cU & (((IData)(vlSelfRef.__PVT__spr_wide)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta) 
                                                   >> 1U)
                                                   : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta)) 
                                                 << 2U)));
                        if (((8U <= (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)) 
                             & (((0x00c0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                                 | ((0x00e0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                                    & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
                                | ((0x00f0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                                   & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))))) {
                            vlSelfRef.__Vdly__spr_overflow = 1U;
                        }
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state 
                            = (((0x40U > (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)) 
                                & (8U > (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)))
                                ? 2U : 0U);
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    } else if ((0x3fU > (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index))) {
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index 
                            = (0x0000003fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index)));
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0x3fU;
                    } else {
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state)))) {
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index 
                            = (0x0000003fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index)));
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0x3fU;
                        if (vlSelfRef.__PVT__spr_tall) {
                            __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 
                                = vlSelfRef.__PVT__vram_vdp_D;
                            __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 
                                = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                            __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2 = 1U;
                        }
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 1U;
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                        __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129 
                            = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                        __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129 = 1U;
                        __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count 
                            = (0x0000007fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)));
                        __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0x7fU;
                    }
                } else if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                        = ((0x380fU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                           | (0x000007f0U & (((IData)(1U) 
                                              + ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address) 
                                                 >> 4U)) 
                                             << 4U)));
                    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 
                        = vlSelfRef.__PVT__vram_vdp_D;
                    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 
                        = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2 = 1U;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 6U;
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3 
                        = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3 = 1U;
                    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v2 
                        = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2 
                        = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags;
                    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2 
                        = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags 
                        = vlSelfRef.__PVT__vram_vdp_D;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 3U;
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                }
            } else if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                    __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags))
                                           ? ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              - (IData)(0x21U))
                                           : ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              - (IData)(1U))));
                    __VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 
                        = (0x0000003fU & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count));
                    __VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2 = 1U;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 5U;
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                        = ((IData)(vlSelfRef.__PVT__spr_tall)
                            ? ((0x380fU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                               | (0x000007f0U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                 << 3U)))
                            : ((0x3807U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                               | ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                  << 3U)));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 4U;
                }
                __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
            } else if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))) {
                if ((0x00d0U == (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__d9))) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                } else if ((IData)(((0U == (0x01e0U 
                                            & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta))) 
                                    & (((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta) 
                                            >> 4U)) 
                                        | ((IData)(vlSelfRef.__PVT__spr_tall) 
                                           & (IData)(vlSelfRef.__PVT__spr_wide))) 
                                       & (((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta) 
                                               >> 3U)) 
                                           | (IData)(vlSelfRef.__PVT__spr_tall)) 
                                          | (IData)(vlSelfRef.__PVT__spr_wide)))))) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                        = ((0x07ffU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                           | ((IData)(vlSelfRef.__PVT__spr_high_bits) 
                              << 0x0000000bU));
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state 
                        = (((0x20U > (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)) 
                            & (4U > (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count)))
                            ? 2U : 0U);
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
                        = ((0x3ff0U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                           | (0x0000000fU & ((IData)(vlSelfRef.__PVT__spr_wide)
                                              ? ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta) 
                                                 >> 1U)
                                              : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__unnamedblk1__DOT__delta))));
                } else if ((0x1fU > (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index))) {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index 
                        = (0x0000003fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index)));
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0x3fU;
                } else {
                    __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
                    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 7U;
                }
            }
        }
    }
    if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if (vlSelfRef.__PVT__mode_M4) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address 
                = (((IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1) 
                    | (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))
                    ? ((0x001fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address)) 
                       | (((0x000000c0U & ((IData)(vlSelfRef.__PVT__bg_address) 
                                           << 4U)) 
                           | (0x0000003fU & ((IData)(0x1cU) 
                                             + (0x0000001fU 
                                                & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                                                   >> 3U))))) 
                          << 5U)) : ((0x001fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address)) 
                                     | (((0x000000e0U 
                                          & ((IData)(vlSelfRef.__PVT__bg_address) 
                                             << 4U)) 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                                               >> 3U))) 
                                        << 5U)));
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address 
                = ((0x1fe0U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address)) 
                   | (0x0000001fU & ((IData)(1U) + 
                                     ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x) 
                                      >> 3U))));
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__data_address 
                = (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index) 
                    << 3U) | (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y));
            if ((4U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                    if ((1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                        __Vdly__vdp_main_inst__DOT__bg_vram_A 
                            = (3U | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__data_address) 
                                     << 2U));
                    }
                } else {
                    __Vdly__vdp_main_inst__DOT__bg_vram_A 
                        = ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))
                            ? (2U | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__data_address) 
                                     << 2U)) : (1U 
                                                | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__data_address) 
                                                   << 2U)));
                }
            } else if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                    __Vdly__vdp_main_inst__DOT__bg_vram_A 
                        = ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__data_address) 
                           << 2U);
                }
            } else {
                __Vdly__vdp_main_inst__DOT__bg_vram_A 
                    = ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))
                        ? (1U | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address) 
                                 << 1U)) : ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__unnamedblk1__DOT__char_address) 
                                            << 1U));
            }
        } else if ((0U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
            __Vdly__vdp_main_inst__DOT__bg_vram_A = 
                (((IData)(vlSelfRef.__PVT__bg_address) 
                  << 0x0000000aU) | ((0x000003e0U & 
                                      ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                                       << 2U)) | (0x0000001fU 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x) 
                                                     >> 3U))));
        } else if ((2U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
            __Vdly__vdp_main_inst__DOT__bg_vram_A = 
                ((((4U & (IData)(vlSelfRef.__PVT__m2mg_address)) 
                   | (3U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                             >> 6U) & (IData)(vlSelfRef.__PVT__m2mg_address)))) 
                  << 0x0000000bU) | ((0x000007f8U & 
                                      ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index) 
                                       << 3U)) | (7U 
                                                  & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y))));
        } else if ((3U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
            __Vdly__vdp_main_inst__DOT__bg_vram_A = 
                ((((4U & ((IData)(vlSelfRef.__PVT__m2ct_address) 
                          >> 5U)) | (3U & (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                                            >> 6U) 
                                           & ((IData)(vlSelfRef.__PVT__m2ct_address) 
                                              >> 5U)))) 
                  << 0x0000000bU) | ((0x000007f8U & 
                                      ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index) 
                                       << 3U)) | (7U 
                                                  & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y))));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0069U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x006dU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if ((0x0069U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            if ((0x006aU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 
                    = vlSymsp->TOP.tb_ss__DOT__ss_din;
            }
            if ((0x006aU != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                if ((0x006bU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 
                        = vlSymsp->TOP.tb_ss__DOT__ss_din;
                }
                if ((0x006bU != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                    if ((0x006cU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                        __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 
                            = vlSymsp->TOP.tb_ss__DOT__ss_din;
                    }
                    if ((0x006cU != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                        if ((0x006dU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                            vlSelfRef.__PVT__vdp_main_inst__DOT__bg_priority 
                                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                         >> 6U));
                            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette_reg 
                                = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                         >> 7U));
                        }
                    }
                }
            }
        }
        if ((0x0069U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 
                = vlSymsp->TOP.tb_ss__DOT__ss_din;
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if ((7U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
            if (vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__flip_x) {
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 
                    = (((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                                  >> 1U))) 
                         << 6U) | (((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                           >> 1U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                             >> 3U))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1) 
                                                       >> 7U)))));
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 
                    = (((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                                  >> 1U))) 
                         << 6U) | (((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                           >> 1U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                             >> 3U))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0) 
                                                       >> 7U)))));
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 
                    = (((((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                                  >> 1U))) 
                         << 6U) | (((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                           >> 1U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                             >> 3U))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2) 
                                                       >> 7U)))));
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 
                    = (((((2U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                 << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                  >> 1U))) 
                         << 6U) | (((2U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                           >> 1U)) 
                                    | (1U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 3U))) 
                                   << 4U)) | ((((2U 
                                                 & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                    >> 3U)) 
                                                | (1U 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 5U))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                     >> 5U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                       >> 7U)))));
            } else {
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 
                    = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1;
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 
                    = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0;
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 
                    = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2;
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 
                    = ((IData)(vlSelfRef.__PVT__mode_M4)
                        ? (IData)(vlSelfRef.__PVT__vram_vdp_D)
                        : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3));
            }
            vlSelfRef.__PVT__vdp_main_inst__DOT__bg_priority 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__priority_latch;
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette_reg 
                = vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette;
        } else {
            __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 
                = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1)) 
                   | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1) 
                                     << 1U)));
            __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 
                = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0)) 
                   | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0) 
                                     << 1U)));
            __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 
                = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2)) 
                   | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2) 
                                     << 1U)));
            __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 
                = ((1U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3)) 
                   | (0x000000feU & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3) 
                                     << 1U)));
        }
    }
    if ((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
          (0x0061U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (0x0068U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        if (((((((((0x0061U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                   | (0x0062U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
                  | (0x0063U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
                 | (0x0064U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
                | (0x0065U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
               | (0x0066U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
              | (0x0067U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
             | (0x0068U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
            if ((0x0061U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                    = ((0x0100U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)) 
                       | (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                    = (0x000000ffU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index));
            } else if ((0x0062U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                    = ((0x00ffU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)) 
                       | (0x00000100U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                         << 8U)));
                __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                    = (0x00000100U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index));
            }
            if ((0x0061U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                if ((0x0062U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                    if ((0x0063U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y 
                            = (7U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                     >> 5U));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__flip_x 
                            = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                     >> 2U));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__priority_latch 
                            = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                     >> 3U));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette 
                            = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                     >> 4U));
                    }
                    if ((0x0063U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                        if ((0x0064U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                            if ((0x0065U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                                    = vlSymsp->TOP.tb_ss__DOT__ss_din;
                            } else if ((0x0066U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                                    = vlSymsp->TOP.tb_ss__DOT__ss_din;
                            } else if ((0x0067U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                                    = vlSymsp->TOP.tb_ss__DOT__ss_din;
                            } else {
                                vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                                    = vlSymsp->TOP.tb_ss__DOT__ss_din;
                            }
                        }
                        if ((0x0064U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac 
                                = vlSymsp->TOP.tb_ss__DOT__ss_din;
                        }
                    }
                }
            }
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_pix_g) {
        if (vlSelfRef.__PVT__mode_M4) {
            if ((1U & (~ ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                    if ((1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                        __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                            = ((0x00ffU & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)) 
                               | (0x00000100U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                 << 8U)));
                        __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                            = (0x00000100U | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y 
                            = ((4U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y)) 
                               | ((2U & ((0xfffffffeU 
                                          & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y)) 
                                         ^ (0x7ffffffeU 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 1U)))) 
                                  | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                                           ^ ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              >> 2U)))));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y 
                            = ((3U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_y)) 
                               | (4U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_y) 
                                        ^ (IData)(vlSelfRef.__PVT__vram_vdp_D))));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__flip_x 
                            = (1U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                     >> 1U));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__priority_latch 
                            = (1U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                     >> 4U));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette 
                            = (1U & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                     >> 3U));
                    }
                } else if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                    __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                        = ((0x0100U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)) 
                           | (IData)(vlSelfRef.__PVT__vram_vdp_D));
                    __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                        = (0x000000ffU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index));
                }
            }
            if ((4U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                if ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                    if ((1U & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = vlSelfRef.__PVT__vram_vdp_D;
                    }
                } else if ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x))) {
                    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                        = vlSelfRef.__PVT__vram_vdp_D;
                } else {
                    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                        = vlSelfRef.__PVT__vram_vdp_D;
                }
            }
        } else {
            if ((1U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                    = ((0x0100U & (IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)) 
                       | (IData)(vlSelfRef.__PVT__vram_vdp_D));
                __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
                    = (0x000000ffU | (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index));
            }
            if ((1U != (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                if ((3U != (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                    if ((4U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__flip_x = 0U;
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xfeU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (1U & (((~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac)) 
                                         & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                        | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                           & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              >> 4U)))));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xfeU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (1U & (((~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac)) 
                                         & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                            >> 1U)) 
                                        | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                           & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              >> 5U)))));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xfeU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (1U & (((~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac)) 
                                         & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                            >> 2U)) 
                                        | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                           & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              >> 6U)))));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xfeU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (1U & (((~ (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac)) 
                                         & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                            >> 3U)) 
                                        | ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                           & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                              >> 7U)))));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xfdU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (2U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 4U))) 
                                        << 1U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xfdU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (2U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 1U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 1U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 5U))) 
                                        << 1U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xfdU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (2U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 1U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 6U))) 
                                        << 1U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xfdU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (2U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 1U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 3U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 1U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 7U))) 
                                        << 1U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xfbU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (4U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 2U)) 
                                          & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 2U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 4U))) 
                                        << 2U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xfbU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (4U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 2U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 1U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 2U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 5U))) 
                                        << 2U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xfbU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (4U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 2U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 2U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 6U))) 
                                        << 2U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xfbU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (4U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 2U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 3U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 2U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 7U))) 
                                        << 2U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xf7U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (8U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 3U)) 
                                          & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 3U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 4U))) 
                                        << 3U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xf7U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (8U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 3U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 1U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 3U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 5U))) 
                                        << 3U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xf7U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (8U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 3U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 2U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 3U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 6U))) 
                                        << 3U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xf7U & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (8U & ((((~ ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                              >> 3U)) 
                                          & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                             >> 3U)) 
                                         | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                             >> 3U) 
                                            & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                               >> 7U))) 
                                        << 3U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xefU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (0x00000010U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 4U)) 
                                                   & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                     >> 4U)) 
                                                 << 4U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xefU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (0x00000010U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 4U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 5U))) 
                                                 << 4U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xefU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (0x00000010U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 4U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 6U))) 
                                                 << 4U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xefU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (0x00000010U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 3U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 4U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 7U))) 
                                                 << 4U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xdfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (0x00000020U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 5U)) 
                                                   & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 4U))) 
                                                 << 5U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xdfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (0x00000020U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                     >> 5U)) 
                                                 << 5U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xdfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (0x00000020U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 6U))) 
                                                 << 5U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xdfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (0x00000020U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 5U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 3U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 5U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 7U))) 
                                                 << 5U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0xbfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (0x00000040U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 6U)) 
                                                   & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 6U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 4U))) 
                                                 << 6U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0xbfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (0x00000040U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 6U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 6U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 5U))) 
                                                 << 6U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0xbfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (0x00000040U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 6U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                     >> 6U)) 
                                                 << 6U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0xbfU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (0x00000040U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 6U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 3U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 6U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 7U))) 
                                                 << 6U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0 
                            = ((0x7fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data0)) 
                               | (0x00000080U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 7U)) 
                                                   & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 7U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 4U))) 
                                                 << 7U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1 
                            = ((0x7fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data1)) 
                               | (0x00000080U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 7U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 1U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 7U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 5U))) 
                                                 << 7U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2 
                            = ((0x7fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data2)) 
                               | (0x00000080U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 7U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 2U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      >> 7U) 
                                                     & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                        >> 6U))) 
                                                 << 7U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3 
                            = ((0x7fU & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__data3)) 
                               | (0x00000080U & (((
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                     >> 7U)) 
                                                   & ((IData)(vlSelfRef.__PVT__vram_vdp_D) 
                                                      >> 3U)) 
                                                  | (((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac) 
                                                      & (IData)(vlSelfRef.__PVT__vram_vdp_D)) 
                                                     >> 7U)) 
                                                 << 7U)));
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__priority_latch = 0U;
                        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette = 0U;
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__mode_M4)))) {
            if ((1U != (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                if ((3U == (7U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x)))) {
                    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__datac 
                        = vlSelfRef.__PVT__vram_vdp_D;
                }
            }
        }
    }
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__7__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__6__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__5__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__4__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__3__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__2__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__1__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__wideclock = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift2 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift0 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift3 = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__0__KET____DOT__shifter__DOT__shift1 = 0U;
    vlSelfRef.__PVT__cram_vdp_D = vlSelfRef.__PVT__vdp_cram_inst__DOT__ram
        [vlSelfRef.__PVT__cram_vdp_A];
    vlSelfRef.__PVT__xspr_collide_shift = __Vdly__xspr_collide_shift;
    vlSelfRef.__PVT__hbl_counter = __Vdly__hbl_counter;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__19__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__63__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__62__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__61__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__60__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__59__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__58__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__57__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__56__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__55__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__54__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__53__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__52__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__51__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__50__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__49__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__48__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__47__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__46__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__45__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__44__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__43__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__42__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__41__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__40__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__39__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__38__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__37__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__36__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__35__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__34__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__33__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__32__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__31__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__30__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__29__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__28__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__27__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__26__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__25__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__24__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__23__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__22__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__21__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__20__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__18__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__17__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__16__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__15__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__14__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__13__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__12__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__11__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__10__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__9__KET____DOT__shifter__DOT__shift3;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__wideclock;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__xhdl0__DOT__shifters__BRA__8__KET____DOT__shifter__DOT__shift3;
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v0;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v1;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d0__v2;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v0;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v1;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_x__v2;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v0;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v1;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v0;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v1;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v0;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v1;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v2;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d2__v2] = 0U;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d3__v2;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__spr_d1__v3] = 0U;
    }
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__m2_flags;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__count) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__count) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__count = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index))));
    __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__tile_index = 0U;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1 
        = __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0 
        = __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2 
        = __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3 
        = __Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3;
    if (__VdlySet__vdp_cram_inst__DOT__ram__v0) {
        vlSelfRef.__PVT__vdp_cram_inst__DOT__ram[__VdlyDim0__vdp_cram_inst__DOT__ram__v0] 
            = __VdlyVal__vdp_cram_inst__DOT__ram__v0;
    }
    if (((((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) 
           & (0x00c0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
          & (0x00ffU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
         & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        vlSelfRef.__PVT__cram_ss_lo = vlSymsp->TOP.tb_ss__DOT__ss_din;
    }
    vlSelfRef.__PVT__vdp_main_inst__DOT__bg_color = 
        ((((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__palette_reg) 
           << 4U) | (((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift3) 
                             >> 6U)) | (1U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift2) 
                                              >> 7U))) 
                     << 2U)) | ((2U & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift1) 
                                       >> 6U)) | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_bg_inst__DOT__shift0) 
                                                     >> 7U))));
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[0U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v0;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[1U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v1;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[2U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v2;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[3U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v3;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[4U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v4;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[5U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v5;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[6U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v6;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[7U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v7;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[8U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v8;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[9U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v9;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[10U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v10;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[11U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v11;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[12U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v12;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[13U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v13;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[14U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v14;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[15U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v15;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[16U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v16;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[17U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v17;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[18U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v18;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[19U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v19;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[20U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v20;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[21U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v21;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[22U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v22;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[23U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v23;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[24U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v24;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[25U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v25;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[26U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v26;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[27U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v27;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[28U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v28;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[29U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v29;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[30U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v30;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[31U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v31;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[32U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v32;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[33U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v33;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[34U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v34;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[35U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v35;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[36U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v36;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[37U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v37;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[38U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v38;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[39U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v39;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[40U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v40;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[41U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v41;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[42U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v42;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[43U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v43;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[44U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v44;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[45U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v45;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[46U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v46;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[47U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v47;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[48U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v48;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[49U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v49;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[50U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v50;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[51U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v51;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[52U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v52;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[53U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v53;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[54U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v54;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[55U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v55;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[56U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v56;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[57U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v57;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[58U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v58;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[59U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v59;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[60U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v60;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[61U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v61;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[62U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v62;
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[63U] 
            = __VdlyVal__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v63;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v64) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[0U] = 0U;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v65) {
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v128] = 1U;
    }
    if (__VdlySet__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129) {
        vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable[__VdlyDim0__vdp_main_inst__DOT__vdp_spr_inst__DOT__enable__v129] = 1U;
    }
    vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_bg_inst__DOT__x) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_bg_inst__DOT__x) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x))));
    __VdlyMask__vdp_main_inst__DOT__vdp_bg_inst__DOT__x = 0U;
    vlSelfRef.__PVT__vram_vdp_D = vlSelfRef.vdp_vram_inst__DOT__mem
        [(((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__vdp_se_bank) 
           << 0x0000000eU) | (((0x0100U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
                               & (0x01f0U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)))
                               ? ((IData)(vlSelfRef.__PVT__mode_M4)
                                   ? ((4U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                       ? ((0x00003ffcU 
                                           & (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)) 
                                          | (3U & (
                                                   (2U 
                                                    & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                                    ? 
                                                   (2U 
                                                    | (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state)))))
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))))))))
                                       : ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                           ? (0x00000080U 
                                              | ((0x00003f00U 
                                                  & ((IData)(vlSelfRef.__PVT__spr_address) 
                                                     << 7U)) 
                                                 | (((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))))))
                                           : (((0x00003f00U 
                                                & ((IData)(vlSelfRef.__PVT__spr_address) 
                                                   << 7U)) 
                                               | (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index)) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state)))))))
                                   : ((4U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                           ? ((IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))))))
                                           : ((1U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                               ? (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address)
                                               : (3U 
                                                  | (((IData)(vlSelfRef.__PVT__spr_address) 
                                                      << 7U) 
                                                     | (0x0000007cU 
                                                        & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index) 
                                                           << 2U))))))
                                       : ((2U & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                           ? (((IData)(vlSelfRef.__PVT__spr_address) 
                                               << 7U) 
                                              | ((0x0000007cU 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index) 
                                                     << 2U)) 
                                                 | ((1U 
                                                     & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))
                                                     ? 1U
                                                     : 2U)))
                                           : ((((IData)(vlSelfRef.__PVT__spr_address) 
                                                << 7U) 
                                               | (0x0000007cU 
                                                  & ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index) 
                                                     << 2U))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state))))))))
                               : (IData)(vlSelfRef.__PVT__vdp_main_inst__DOT__bg_vram_A)))];
    vlSelfRef.__PVT__vdp_main_inst__DOT__bg_vram_A 
        = __Vdly__vdp_main_inst__DOT__bg_vram_A;
    vlSelfRef.__PVT__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address 
        = __Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__data_address;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__state) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__state) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__state = 0U;
    vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index 
        = (((IData)(__Vdly__vdp_main_inst__DOT__vdp_spr_inst__DOT__index) 
            & (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index)) 
           | ((IData)(vlSelfRef.vdp_main_inst__DOT__vdp_spr_inst__DOT__index) 
              & (~ (IData)(__VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index))));
    __VdlyMask__vdp_main_inst__DOT__vdp_spr_inst__DOT__index = 0U;
}
