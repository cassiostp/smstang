// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reset_flags = vlSelfRef.__PVT__reset_flags;
    vlSelfRef.__Vdly__address_ff = vlSelfRef.__PVT__address_ff;
    vlSelfRef.__Vdly__xram_cpu_read = vlSelfRef.__PVT__xram_cpu_read;
    vlSelfRef.__Vdly__vram_cpu_D_outl = vlSelfRef.__PVT__vram_cpu_D_outl;
    vlSelfRef.__Vdly__xram_cpu_A_incr = vlSelfRef.__PVT__xram_cpu_A_incr;
    vlSelfRef.__Vdly__xram_cpu_A = vlSelfRef.__PVT__xram_cpu_A;
    vlSelfRef.__Vdly__to_cram = vlSelfRef.__PVT__to_cram;
}

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__2(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__2\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         (((0x0052U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
           & (0x0053U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
          | ((0x0055U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
             & (0x0056U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))))) {
        if ((0x0052U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            vlSelfRef.__Vdly__irq_delay = (7U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 5U));
            vlSelfRef.IRQ_n = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                     >> 4U));
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
        if (((((IData)(vlSelfRef.vbl_irq) & (IData)(vlSelfRef.irq_frame_en)) 
              | ((IData)(vlSelfRef.hbl_irq) & (IData)(vlSelfRef.__PVT__irq_line_en))) 
             & (~ (IData)(vlSelfRef.__PVT__reset_flags)))) {
            if ((0U == (IData)(vlSelfRef.__PVT__irq_delay))) {
                vlSelfRef.IRQ_n = 0U;
            } else {
                vlSelfRef.__Vdly__irq_delay = (7U & 
                                               ((IData)(vlSelfRef.__PVT__irq_delay) 
                                                - (IData)(1U)));
            }
        } else {
            vlSelfRef.IRQ_n = 1U;
            vlSelfRef.__Vdly__irq_delay = 7U;
        }
    }
    vlSelfRef.__PVT__irq_delay = vlSelfRef.__Vdly__irq_delay;
    vlSelfRef.hbl_irq = vlSelfRef.__Vdly__hbl_irq;
}

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__3(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__3\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
        vlSelfRef.__PVT__disable_hscroll = 0U;
        vlSelfRef.__PVT__disable_vscroll = 0U;
        vlSelfRef.__PVT__mask_column0 = 1U;
        vlSelfRef.__PVT__irq_line_en = 1U;
        vlSelfRef.__PVT__spr_shift = 0U;
        vlSelfRef.display_on = 0U;
        vlSelfRef.irq_frame_en = 0U;
        vlSelfRef.__PVT__spr_tall = 0U;
        vlSelfRef.__PVT__spr_wide = 0U;
        vlSelfRef.__PVT__bg_address = 0x0eU;
        vlSelfRef.__PVT__spr_address = 0x7fU;
        vlSelfRef.__PVT__spr_high_bits = 0U;
        vlSelfRef.__PVT__overscan = 0U;
        vlSelfRef.__PVT__bg_scroll_x = 0U;
        vlSelfRef.__PVT__bg_scroll_y = 0U;
        vlSelfRef.__PVT__irq_line_count = 0xffU;
        vlSelfRef.__Vdly__reset_flags = 1U;
        vlSelfRef.__Vdly__address_ff = 0U;
        vlSelfRef.__Vdly__xram_cpu_read = 0U;
        vlSelfRef.__PVT__mode_M1 = 0U;
        vlSelfRef.__PVT__mode_M2 = 0U;
        vlSelfRef.__PVT__mode_M3 = 0U;
        vlSelfRef.__PVT__mode_M4 = 1U;
    } else if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) 
                & (((0x0040U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                    & (0x004eU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
                   | (0x0054U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                      >> 9U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                          >> 8U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                              >> 7U)))) {
                    if ((0x00000040U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                    if ((4U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                        if ((2U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
                                                vlSelfRef.__PVT__cram_latch 
                                                    = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                            vlSelfRef.__Vdly__vram_cpu_D_outl 
                                                = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                        } else {
                                            vlSelfRef.__Vdly__xram_cpu_A_incr 
                                                = (1U 
                                                   & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                      >> 7U));
                                            vlSelfRef.__Vdly__xram_cpu_read 
                                                = (1U 
                                                   & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                      >> 6U));
                                            vlSelfRef.__Vdly__reset_flags 
                                                = (1U 
                                                   & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                      >> 5U));
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                        vlSelfRef.__Vdly__xram_cpu_A 
                                            = ((1U 
                                                & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0x3f00U 
                                                    & (IData)(vlSelfRef.__Vdly__xram_cpu_A)) 
                                                   | (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din))
                                                : (
                                                   (0x00ffU 
                                                    & (IData)(vlSelfRef.__Vdly__xram_cpu_A)) 
                                                   | (0x00003f00U 
                                                      & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                         << 8U))));
                                    } else if ((1U 
                                                & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                        vlSelfRef.__PVT__spr_high_bits 
                                            = (7U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                                    } else {
                                        vlSelfRef.__PVT__spr_address 
                                            = (0x0000007fU 
                                               & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                                    }
                                } else if ((4U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                    if ((2U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                        if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                            vlSelfRef.__PVT__irq_line_count 
                                                = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                        } else {
                                            vlSelfRef.__PVT__bg_scroll_y 
                                                = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                        vlSelfRef.__PVT__bg_scroll_x 
                                            = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                    } else {
                                        vlSelfRef.__PVT__m2ct_address 
                                            = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                    }
                                } else if ((2U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                    if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                        vlSelfRef.__PVT__m2mg_address 
                                            = (7U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                                    } else {
                                        vlSelfRef.__PVT__overscan 
                                            = (0x0000000fU 
                                               & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                  >> 4U));
                                        vlSelfRef.__PVT__bg_address 
                                            = (0x0000000fU 
                                               & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                                    }
                                } else if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                    vlSelfRef.__PVT__spr_wide 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 7U));
                                    vlSelfRef.__PVT__mode_M4 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 6U));
                                    vlSelfRef.__PVT__mode_M3 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 5U));
                                    vlSelfRef.__PVT__mode_M2 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 4U));
                                    vlSelfRef.__PVT__mode_M1 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 3U));
                                    vlSelfRef.__Vdly__to_cram 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 2U));
                                    vlSelfRef.__Vdly__address_ff 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 1U));
                                    vlSelfRef.__PVT__data_write 
                                        = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                                } else {
                                    vlSelfRef.display_on 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 7U));
                                    vlSelfRef.__PVT__disable_hscroll 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 6U));
                                    vlSelfRef.__PVT__disable_vscroll 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 5U));
                                    vlSelfRef.__PVT__mask_column0 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 4U));
                                    vlSelfRef.irq_frame_en 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 3U));
                                    vlSelfRef.__PVT__irq_line_en 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 2U));
                                    vlSelfRef.__PVT__spr_shift 
                                        = (1U & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                 >> 1U));
                                    vlSelfRef.__PVT__spr_tall 
                                        = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__data_write = 0U;
        vlSelfRef.__PVT__unnamedblk1__DOT__reset_set = 0U;
        if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
            if (((IData)(vlSelfRef.__PVT__old_WR_n) 
                 & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__vdp_WR_n)))) {
                if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__A))) {
                    if (vlSelfRef.__PVT__address_ff) {
                        vlSelfRef.__Vdly__to_cram = 
                            (3U == (3U & ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                          >> 6U)));
                        if ((0U == (3U & ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                          >> 6U)))) {
                            vlSelfRef.__Vdly__xram_cpu_read = 1U;
                        }
                        if ((0x00000080U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                          >> 6U)))) {
                                if ((8U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in)))) {
                                                vlSelfRef.__PVT__irq_line_count 
                                                    = 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                            vlSelfRef.__PVT__bg_scroll_y 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                        } else {
                                            vlSelfRef.__PVT__bg_scroll_x 
                                                = (0x000000ffU 
                                                   & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                        }
                                    }
                                } else if ((4U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                    if ((2U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                        if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                            vlSelfRef.__PVT__overscan 
                                                = (0x0000000fU 
                                                   & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                        } else {
                                            vlSelfRef.__PVT__spr_high_bits 
                                                = (7U 
                                                   & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                        }
                                    } else if ((1U 
                                                & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                        vlSelfRef.__PVT__spr_address 
                                            = (0x0000007fU 
                                               & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                    } else {
                                        vlSelfRef.__PVT__m2mg_address 
                                            = (7U & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                    }
                                } else if ((2U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                    if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                        vlSelfRef.__PVT__m2ct_address 
                                            = (0x000000ffU 
                                               & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                    } else {
                                        vlSelfRef.__PVT__bg_address 
                                            = (0x0000000fU 
                                               & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                    }
                                } else if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in))) {
                                    vlSelfRef.display_on 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 6U));
                                    vlSelfRef.irq_frame_en 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 5U));
                                    vlSelfRef.__PVT__mode_M1 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 4U));
                                    vlSelfRef.__PVT__mode_M3 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 3U));
                                    vlSelfRef.__PVT__spr_tall 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 1U));
                                    vlSelfRef.__PVT__spr_wide 
                                        = (1U & (IData)(vlSelfRef.__PVT__xram_cpu_A));
                                } else {
                                    vlSelfRef.__PVT__disable_vscroll 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 7U));
                                    vlSelfRef.__PVT__disable_hscroll 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 6U));
                                    vlSelfRef.__PVT__mask_column0 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 5U));
                                    vlSelfRef.__PVT__irq_line_en 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 4U));
                                    vlSelfRef.__PVT__spr_shift 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 3U));
                                    vlSelfRef.__PVT__mode_M4 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 2U));
                                    vlSelfRef.__PVT__mode_M2 
                                        = (1U & ((IData)(vlSelfRef.__PVT__xram_cpu_A) 
                                                 >> 1U));
                                }
                            }
                        }
                        vlSelfRef.__Vdly__xram_cpu_A 
                            = ((0x00ffU & (IData)(vlSelfRef.__Vdly__xram_cpu_A)) 
                               | (0x00003f00U & ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in) 
                                                 << 8U)));
                    } else {
                        vlSelfRef.__Vdly__xram_cpu_A 
                            = ((0x3f00U & (IData)(vlSelfRef.__Vdly__xram_cpu_A)) 
                               | (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in));
                    }
                    vlSelfRef.__Vdly__address_ff = 
                        (1U & (~ (IData)(vlSelfRef.__PVT__address_ff)));
                } else {
                    vlSelfRef.__PVT__data_write = 1U;
                    vlSelfRef.__Vdly__xram_cpu_A_incr = 1U;
                    vlSelfRef.__Vdly__address_ff = 0U;
                    vlSelfRef.__Vdly__vram_cpu_D_outl 
                        = vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in;
                    if (((IData)(vlSelfRef.__PVT__to_cram) 
                         & (~ (IData)(vlSelfRef.__PVT__xram_cpu_A)))) {
                        vlSelfRef.__PVT__cram_latch 
                            = vlSymsp->TOP.tb_ss__DOT__sys__DOT__D_in;
                    }
                }
            } else if (((IData)(vlSelfRef.__PVT__old_RD_n) 
                        & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__vdp_RD_n)))) {
                if ((0x00000080U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__A))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__A) 
                                  >> 6U)))) {
                        if ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__A))) {
                            vlSelfRef.__PVT__unnamedblk1__DOT__reset_set = 1U;
                            vlSelfRef.__Vdly__address_ff = 0U;
                            vlSelfRef.D_out = (0x1fU 
                                               | (((IData)(vlSelfRef.vbl_irq) 
                                                   << 7U) 
                                                  | (((IData)(vlSelfRef.__PVT__overflow_flag) 
                                                      << 6U) 
                                                     | ((IData)(vlSelfRef.__PVT__collide_flag) 
                                                        << 5U))));
                            vlSelfRef.__Vdly__reset_flags = 1U;
                        } else {
                            vlSelfRef.__Vdly__address_ff = 0U;
                            vlSelfRef.D_out = vlSelfRef.__PVT__vram_cpu_D_outl;
                            vlSelfRef.__Vdly__xram_cpu_A_incr = 1U;
                            vlSelfRef.__Vdly__xram_cpu_read = 1U;
                        }
                    }
                } else if ((0x00000040U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__A))) {
                    vlSelfRef.D_out = (0x000000ffU 
                                       & ((1U & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__A))
                                           ? (IData)(vlSelfRef.__PVT__latched_x)
                                           : (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)));
                }
            } else if (vlSelfRef.__PVT__xram_cpu_A_incr) {
                vlSelfRef.__Vdly__xram_cpu_A = (0x00003fffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__xram_cpu_A)));
                vlSelfRef.__Vdly__xram_cpu_A_incr = 0U;
                if (vlSelfRef.__PVT__xram_cpu_read) {
                    vlSelfRef.__Vdly__vram_cpu_D_outl 
                        = vlSelfRef.__PVT__vram_cpu_D_out;
                }
                vlSelfRef.__Vdly__xram_cpu_read = 0U;
            } else if (vlSelfRef.__PVT__xram_cpu_read) {
                vlSelfRef.__Vdly__xram_cpu_A_incr = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__reset_set)))) {
                vlSelfRef.__Vdly__reset_flags = 0U;
            }
        }
    }
    vlSelfRef.__PVT__address_ff = vlSelfRef.__Vdly__address_ff;
    vlSelfRef.__PVT__vram_cpu_D_outl = vlSelfRef.__Vdly__vram_cpu_D_outl;
    vlSelfRef.__PVT__xram_cpu_A_incr = vlSelfRef.__Vdly__xram_cpu_A_incr;
    vlSelfRef.__PVT__xram_cpu_read = vlSelfRef.__Vdly__xram_cpu_read;
    vlSelfRef.__PVT__xram_cpu_A = vlSelfRef.__Vdly__xram_cpu_A;
    vlSelfRef.__PVT__to_cram = vlSelfRef.__Vdly__to_cram;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst)))) {
        if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) 
             & (((0x0040U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                 & (0x004eU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
                | (0x0054U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                              >> 8U)))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                  >> 7U)))) {
                        if ((0x00000040U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                          >> 5U)))) {
                                if ((0x00000010U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                    if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
                                                    vlSelfRef.__PVT__latched_x 
                                                        = vlSymsp->TOP.tb_ss__DOT__ss_din;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (((~ (IData)(vlSelfRef.__PVT__old_HL)) 
                    & (IData)(vlSymsp->TOP.tb_ss__DOT__sys__DOT__HL))) {
            vlSelfRef.__PVT__latched_x = (0x000000ffU 
                                          & ((IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount) 
                                             >> 1U));
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) 
                      & (((0x0040U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                          & (0x004eU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
                         | (0x0054U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))))) {
            if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
                vlSelfRef.__PVT__old_WR_n = vlSymsp->TOP.tb_ss__DOT__sys__DOT__vdp_WR_n;
                vlSelfRef.__PVT__old_RD_n = vlSymsp->TOP.tb_ss__DOT__sys__DOT__vdp_RD_n;
            }
            vlSelfRef.__PVT__old_HL = vlSymsp->TOP.tb_ss__DOT__sys__DOT__HL;
        }
    }
}

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__4(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__4\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__collide_flag = vlSelfRef.__Vdly__collide_flag;
    if ((1U & (~ (IData)(vlSelfRef.__Vcellinp__vdp_vram_inst__wren_a)))) {
        vlSelfRef.__PVT__vram_cpu_D_out = vlSelfRef.vdp_vram_inst__DOT__mem
            [vlSelfRef.__Vcellinp__vdp_vram_inst__address_a];
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__ce_vdp_g)))) {
        if ((((0x0100U > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
              | (0x01e5U < (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))) 
             & ((0x00eaU > (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                | (0x01f0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount))))) {
            if (((IData)(vlSelfRef.__PVT__spr_overflow) 
                 & (~ (IData)(vlSelfRef.__PVT__line_overflow)))) {
                vlSelfRef.__PVT__overflow_flag = 1U;
                vlSelfRef.__PVT__line_overflow = 1U;
            }
        } else {
            vlSelfRef.__PVT__line_overflow = 0U;
        }
    }
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         (((0x0052U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
           & (0x0053U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) 
          | ((0x0055U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
             & (0x0056U >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))))) {
        if ((0x0052U != (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
            if ((0x0053U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))) {
                vlSelfRef.__PVT__overflow_flag = (1U 
                                                  & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                     >> 6U));
                vlSelfRef.__PVT__line_overflow = (1U 
                                                  & ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_din) 
                                                     >> 5U));
            }
        }
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
        if (vlSelfRef.__PVT__reset_flags) {
            vlSelfRef.__PVT__overflow_flag = 0U;
            vlSelfRef.__PVT__line_overflow = 1U;
        }
    }
    if (((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) & 
         (0x004fU == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)))) {
        vlSelfRef.vbl_irq = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__ss_din));
    } else if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
        if ((((0x01e5U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount)) 
              & ((((0x00e0U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                   & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1)) 
                  | ((0x00f0U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                     & (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))) 
                 | (((0x00c0U == (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__vcount)) 
                     & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M1))) 
                    & (~ (IData)(vlSymsp->TOP.tb_ss__DOT__smode_M3))))) 
             & ((IData)(vlSelfRef.__PVT__last_x0) != 
                (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount))))) {
            vlSelfRef.vbl_irq = 1U;
        } else if (vlSelfRef.__PVT__reset_flags) {
            vlSelfRef.vbl_irq = 0U;
        }
    }
    if (vlSelfRef.__VdlySet__vdp_vram_inst__DOT__mem__v0) {
        vlSelfRef.vdp_vram_inst__DOT__mem[vlSelfRef.__VdlyDim0__vdp_vram_inst__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__vdp_vram_inst__DOT__mem__v0;
    }
    vlSelfRef.__PVT__spr_overflow = vlSelfRef.__Vdly__spr_overflow;
    if ((1U & (~ ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_we) 
                  & ((0x0050U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                     | (0x0051U == (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a))))))) {
        if (vlSymsp->TOP.tb_ss__DOT__ce_vdp_g) {
            vlSelfRef.__PVT__last_x0 = (1U & (IData)(vlSymsp->TOP.tb_ss__DOT__vid__DOT__hcount));
        }
    }
}

void Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__5(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__5\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__reset_flags = vlSelfRef.__Vdly__reset_flags;
}

void Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1\n"); );
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
}

void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__6(Vtb_ss_vdp__M3f* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__6\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ss_cram_rd = ((0x00c0U <= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)) 
                                   & (0x00ffU >= (IData)(vlSymsp->TOP.tb_ss__DOT__ss_a)));
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = ((IData)(vlSymsp->TOP.tb_ss__DOT__ss_a) 
                                                 & (IData)(vlSelfRef.__PVT__ss_cram_win));
}
