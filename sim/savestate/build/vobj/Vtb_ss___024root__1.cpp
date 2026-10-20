// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

void Vtb_ss___024root___nba_sequent__TOP__22(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__22\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__A = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__D_in = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC = 0xffU;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F = 0xffU;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap = 0xffU;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp = 0xffU;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R = 0U;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP = 0xffffU;
        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC_r = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RXDD = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BTR_r = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1 = 0U;
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR = 0U;
    } else {
        if (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we) {
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                = (0x000000ffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U]);
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U] 
                                  >> 8U));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap 
                = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U] 
                                  >> 0x00000010U));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp 
                = (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U] 
                   >> 0x00000018U);
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I 
                = (0x000000ffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U]);
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R 
                = (0x000000ffU & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U] 
                                  >> 8U));
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP 
                = (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U] 
                   >> 0x00000010U);
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                = (0x0000ffffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U]);
            vlSelfRef.tb_ss__DOT__sys__DOT__A = (0x0000ffffU 
                                                 & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U]);
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus 
                = (3U & (vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] 
                         >> 0x00000010U));
        } else {
            if (vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we) {
                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                    = (0x0000ffffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq);
            } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r 
                    = (IData)((((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet)) 
                                & (1U == (5U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op)))) 
                               & (3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))));
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                     & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                           >> 2U)))) {
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                        if ((1U & (((((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump)) 
                                      & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call))) 
                                     & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle))) 
                                    & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle))) 
                                   & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF) 
                                         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt)))))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC)));
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__A 
                            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I) 
                                << 8U) | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R));
                        if ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                            if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State 
                                    = ((0x00000020U 
                                        & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))
                                        ? 2U : 1U);
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State = 0U;
                            }
                        } else {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State = 0U;
                        }
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R 
                            = ((0x80U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R)) 
                               | (0x0000007fU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R))));
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR 
                            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) 
                                & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus)))
                                ? 0xffU : ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF) 
                                             | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus)))) 
                                            | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle))
                                            ? 0U : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_out)));
                    }
                } else {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) {
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                    << 8U) | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                    << 8U) | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)));
                        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC;
                        } else if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call) 
                                    | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
                        } else if ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle) 
                                     == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles)) 
                                    & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__A = 0x0066U;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC = 0x0066U;
                        } else if ((((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle)) 
                                    & (2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I) 
                                    << 8U) | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I) 
                                    << 8U) | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)));
                        } else if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))) {
                            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))) {
                                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC;
                                } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)));
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                        = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)));
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ))) {
                                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ))));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                    = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                        << 8U) | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg));
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                              << 8U) 
                                             | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))));
                            }
                        } else if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                = ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))
                                    ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC)
                                    : ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))
                                        ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC)
                                        : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NextIs_XY_Fetch)
                                            ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC)
                                            : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ))));
                        } else {
                            if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__A 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ))) {
                                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                        = (0x0000ffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC)));
                                }
                            }
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ))) {
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                    = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                        << 8U) | (0x000000ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC))));
                            }
                        }
                        if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16;
                        }
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CPL) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                                = (0x000000ffU & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC)));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xcfU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (0x00000010U | 
                                      (0x00000020U 
                                       & ((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                              >> 5U)) 
                                          << 5U))));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xf7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (8U & ((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                                >> 3U)) 
                                            << 3U)));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = (2U | (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                        }
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CCF) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xfeU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F))));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xc7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (((4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                              >> 3U)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                                 << 1U)) 
                                          | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                                   >> 3U)))) 
                                      << 3U));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = (0xfdU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                        }
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_SCF) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = (1U | (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xc7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (((4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                              >> 3U)) 
                                       | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC) 
                                                >> 3U))) 
                                      << 3U));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = (0xfdU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                        }
                    }
                    if (((((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                           & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR)) 
                          & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)) 
                         | (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                             & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR)) 
                            & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq 
                            = (0x000001ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                              + (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16))));
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                            = ((0xfcU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                               | ((2U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                         >> 6U)) | 
                                  (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq) 
                                         >> 8U))));
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                            = ((0xefU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                               | (0x00000010U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq) 
                                                 >> 4U)));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq 
                            = ((7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq)) 
                               ^ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA));
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                            = ((0xfbU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                               | (4U & ((~ (1U & VL_REDXOR_8(
                                                             (0x00ffU 
                                                              & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq))))) 
                                        << 2U)));
                    }
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = (0x0000ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC) 
                                                  + 
                                                  ((0x0000ff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                = (0x0000ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC) 
                                                  + 
                                                  ((0x0000ff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))));
                        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC)));
                        }
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BTR_r) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                                = (0x0000ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC) 
                                                  - (IData)(2U)));
                        }
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ = 0U;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                = ((0xffc7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)) 
                                   | (0x00000038U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
                        }
                        if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet)) 
                             & (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__D_out;
                        }
                    }
                    if (((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                         & (6U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                            = (0x0000ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC) 
                                              + ((0x0000ff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                                                    >> 7U)))) 
                                                     << 8U)) 
                                                 | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))));
                    }
                    if ((((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                          & (4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) 
                         & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR)))) {
                        if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT) 
                             | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                                = (0x0000ffffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC) 
                                                  - (IData)(1U)));
                        }
                    }
                    if (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                         | ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                            & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))))) {
                        if ((7U == (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16)))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP 
                                = (0x0000ffffU & ((8U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP) 
                                                   - (IData)(1U))
                                                   : 
                                                  ((IData)(1U) 
                                                   + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP))));
                        }
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC;
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeAF) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap;
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp;
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                    }
                }
                if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                            = ((0xff00U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)) 
                               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg));
                    }
                    if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD))) {
                        if ((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD)))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xfbU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2) 
                                      << 2U));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0x1fU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (((4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I) 
                                              >> 5U)) 
                                       | (((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I) 
                                                 >> 5U)))) 
                                      << 5U));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xe7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I)));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = (0xfdU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                        } else if ((1U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD)))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R;
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xfbU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2) 
                                      << 2U));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0x1fU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (((4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R) 
                                              >> 5U)) 
                                       | (((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R) 
                                                 >> 5U)))) 
                                      << 5U));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = ((0xe7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                                   | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R)));
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                = (0xfdU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                        } else if ((2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD)))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
                        } else {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
                        }
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                            = ((0x00ffU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ)) 
                               | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                  << 8U));
                    }
                }
                if ((((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ)) 
                      & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r)) 
                     | (9U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r)))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((1U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (0x000000feU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)));
                    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC_r)))) {
                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                            = ((0xfeU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                               | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)));
                    }
                }
                if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) 
                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = (0xefU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = (0xfdU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0xf7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg)));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0x1fU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (((4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                      >> 5U)) | (((0U 
                                                   == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg) 
                                                       >> 5U)))) 
                              << 5U));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0xfbU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (4U & ((~ (1U & VL_REDXOR_8(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))) 
                                    << 2U)));
                }
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                     & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RXDD)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__D_in 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB;
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RLD) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__D_in 
                            = ((0x000000f0U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                               << 4U)) 
                               | (0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)));
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RRD) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__D_in 
                            = ((0x000000f0U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                               << 4U)) 
                               | (0x0000000fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                 >> 4U)));
                    }
                }
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0xc7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (((4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q) 
                                                    >> 3U))) 
                              << 3U));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = (0xfdU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F));
                }
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__n 
                        = (0x000000ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q) 
                                          - (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out) 
                                                   >> 4U))));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0xf7U & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__n)));
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0xdfU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | (0x00000020U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__n) 
                                             << 4U)));
                }
                if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC) 
                     | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT))) {
                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                        = ((0xfbU & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)) 
                           | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDecZ) 
                              << 2U));
                }
                if (((((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                       & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r))) 
                      & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1))) 
                     | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r) 
                        & (7U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))))) {
                    if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                        if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                                    if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                                        vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
                                    }
                                } else {
                                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP 
                                        = ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))
                                            ? ((0x00ffU 
                                                & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP)) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux) 
                                                  << 8U))
                                            : ((0xff00U 
                                                & (IData)(vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP)) 
                                               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux)));
                                }
                            }
                        } else if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__D_in 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
                                }
                            }
                        }
                    }
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__D_in 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q;
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we)))) {
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                    if ((3U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode;
                    }
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we)))) {
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC_r 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r = 0U;
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r 
                            = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg) 
                                << 4U) | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r = 0x17U;
                        }
                    }
                    if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                         & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RXDD 
                            = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RLD) 
                               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RRD));
                    }
                    if ((1U & (~ ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                  & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                                        >> 2U)))))) {
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BTR_r 
                                = ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT) 
                                     | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC)) 
                                    | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR)) 
                                   & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR)));
                        }
                    }
                }
                if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1 
                        = ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res))) 
                           && ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait) 
                               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR 
                        = ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT) 
                             & ((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                    >> 4U)) | (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                                  >> 2U)))) 
                            | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC) 
                               & ((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 4U)) | (4U 
                                                 != 
                                                 (0x44U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)))))) 
                           | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR) 
                              & ((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                     >> 4U)) | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                                >> 6U))));
                }
            }
        }
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2 
        = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2;
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
}

void Vtb_ss___024root___nba_sequent__TOP__24(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__24\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC 
        = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH
                    [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC]) 
            << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL
           [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC]);
    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                  & (0x001aU >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))))) {
        if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
              & (0x001bU <= (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
             & (0x001eU >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
            if ((0x001bU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                    = ((0x01ffff00U & vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq) 
                       | (IData)(vlSelfRef.tb_ss__DOT__ss_din));
            } else if ((0x001cU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                    = ((0x01ff00ffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq) 
                       | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                          << 8U));
            } else if ((0x001dU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                    = ((0x0007ffffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq) 
                       | (0x01f80000U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         << 0x00000011U)));
            } else if ((0x001eU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq 
                    = ((0x01f8ffffU & vlSelfRef.tb_ss__DOT__sys__DOT__ss_seq) 
                       | (0x00070000U & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                         << 0x00000010U)));
            }
        }
    }
    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
        if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ) 
             & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDecZ 
                = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out) 
                         >> 6U));
        }
        if ((((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
              | ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                 & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) 
             & (4U == (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDecZ 
                = (0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16));
        }
    }
    if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) & (0x001aU 
                                                 >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                      >> 9U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                          >> 8U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                      >> 5U)))) {
                            if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                if ((8U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                                                  >> 2U)))) {
                                        if ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                                                vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] 
                                                    = 
                                                    ((0x0000ffffU 
                                                      & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U]) 
                                                     | (0x000f0000U 
                                                        & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                           << 0x00000010U)));
                                            }
                                        } else {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U] 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                    ? 
                                                   ((0x000f00ffU 
                                                     & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U]) 
                                                    | (0x000fffffU 
                                                       & ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                          << 8U)))
                                                    : 
                                                   ((0x000fff00U 
                                                     & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[6U]) 
                                                    | (0x000fffffU 
                                                       & (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                                        }
                                    }
                                } else if ((4U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U] 
                                        = ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0x00ffffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000018U))
                                                : (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000010U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 8U))
                                                : (
                                                   (0xffffff00U 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[5U]) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U] 
                                        = ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0x00ffffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000018U))
                                                : (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000010U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 8U))
                                                : (
                                                   (0xffffff00U 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[4U]) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                                }
                            } else if ((8U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                if ((4U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U] 
                                        = ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0x00ffffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000018U))
                                                : (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000010U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 8U))
                                                : (
                                                   (0xffffff00U 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[3U]) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U] 
                                        = ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0x00ffffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000018U))
                                                : (
                                                   (0xff00ffffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 0x00000010U)))
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                                ? (
                                                   (0xffff00ffU 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U]) 
                                                   | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                      << 8U))
                                                : (
                                                   (0xffffff00U 
                                                    & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[2U]) 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                                }
                            } else if ((4U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U] 
                                    = ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                        ? ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((0x00ffffffU 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U]) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                  << 0x00000018U))
                                            : ((0xff00ffffU 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U]) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                  << 0x00000010U)))
                                        : ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((0xffff00ffU 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U]) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                  << 8U))
                                            : ((0xffffff00U 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[1U]) 
                                               | (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U] 
                                    = ((2U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                        ? ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((0x00ffffffU 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U]) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                  << 0x00000018U))
                                            : ((0xff00ffffU 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U]) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                  << 0x00000010U)))
                                        : ((1U & (IData)(vlSelfRef.tb_ss__DOT__ss_a))
                                            ? ((0xffff00ffU 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U]) 
                                               | ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                                  << 8U))
                                            : ((0xffffff00U 
                                                & vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir[0U]) 
                                               | (IData)(vlSelfRef.tb_ss__DOT__ss_din))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_ss__DOT__ss_din = vlSelfRef.__Vdly__tb_ss__DOT__ss_din;
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
}

extern const VlUnpacked<CData/*7:0*/, 64> Vtb_ss__ConstPool__TABLE_h5d47f540_0;

void Vtb_ss___024root___nba_sequent__TOP__25(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__25\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t = 0;
    SData/*8:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q = 0;
    // Body
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q = 0U;
    if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r)))) {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = ((0x000000f0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)) 
                           | (0x0000000fU & ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                              ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                 >> 4U)
                                              : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB))));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = (0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = (0xfdU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0x1fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (((4U & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t) 
                                      >> 5U)) | (((0U 
                                                   == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t) 
                                                       >> 5U)))) 
                              << 5U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (4U & ((~ (1U & VL_REDXOR_8(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) 
                                    << 2U)));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = ((0x000000f0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)) 
                       | (0x0000000fU & ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                          ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                             >> 4U)
                                          : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB))));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0xfdU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0x1fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (((4U & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t) 
                                  >> 5U)) | (((0U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t) 
                                                   >> 5U)))) 
                          << 5U));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (4U & ((~ (1U & VL_REDXOR_8(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) 
                                << 2U)));
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA;
                if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F))) {
                    if ((1U & ((9U < (0x0000000fU & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                  >> 4U)))) {
                        if ((5U < (0x0000000fU & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                                = (0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                        }
                        tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q 
                            = ((0x0100U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)) 
                               | (0x000000ffU & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q) 
                                                 - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)) 
                               | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)))) {
                        tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q 
                            = (0x000001ffU & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q) 
                                              - (IData)(0x0160U)));
                    }
                } else {
                    if ((1U & ((9U < (0x0000000fU & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q))) 
                               | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                  >> 4U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                            = ((0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                               | ((9U < (0x0000000fU 
                                         & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q))) 
                                  << 4U));
                        tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q 
                            = (0x000001ffU & ((IData)(6U) 
                                              + (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x0000001fU & 
                                      ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q) 
                                       >> 4U))) | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)))) {
                        tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q 
                            = (0x000001ffU & ((IData)(0x0060U) 
                                              + (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)));
                    }
                }
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q) 
                                   >> 8U))));
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = (0x000000ffU & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0x3fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (((2U & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q) 
                                  >> 6U)) | (0U == 
                                             (0x000000ffU 
                                              & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q)))) 
                          << 6U));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (4U & ((~ (1U & VL_REDXOR_8(
                                                     (0x00ffU 
                                                      & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__DAA_Q))))) 
                                << 2U)));
            }
        } else if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
            tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                = ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                    ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                       & (~ (IData)(Vtb_ss__ConstPool__TABLE_h5d47f540_0
                                    [(0x0000003fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))])))
                    : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                       | Vtb_ss__ConstPool__TABLE_h5d47f540_0
                       [(0x0000003fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))]));
        } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
            tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                   & Vtb_ss__ConstPool__TABLE_h5d47f540_0
                   [(0x0000003fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))]);
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (0x00000080U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
            if ((0U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0x00000040U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (4U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0xbfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = (0x00000010U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = (0xfdU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            if (((6U == (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) 
                 | (0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (8U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ) 
                                >> 8U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000020U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ) 
                                         >> 8U)));
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000020U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB)));
            }
        } else {
            if ((0x00000020U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                    if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                        tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                            = (0x0000007fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                              >> 1U));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                            = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                               | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)));
                    } else {
                        tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                            = (1U | (0x000000feU & 
                                     ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                      << 1U)));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                            = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                               | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                        >> 7U)));
                    }
                } else if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)) 
                           | (0x0000007fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                             >> 1U)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)));
                } else {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = (0x000000feU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                          << 1U));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = ((0x00000080U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                           << 7U)) 
                           | (0x0000007fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                             >> 1U)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)));
                } else {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = ((0x000000feU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                           << 1U)) 
                           | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))) {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = ((0x00000080U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                       << 7U)) | (0x0000007fU 
                                                  & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                                     >> 1U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)));
            } else {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = ((0x000000feU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                                     >> 7U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                >> 7U)));
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = (0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = (0xfdU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0x1fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (((4U & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t) 
                              >> 5U)) | (((0U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)) 
                                          << 1U) | 
                                         (1U & ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t) 
                                                >> 5U)))) 
                      << 5U));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (4U & ((~ (1U & VL_REDXOR_8(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) 
                            << 2U)));
            if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0x3fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x000000c0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
            }
        }
    } else {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
            = (0xfcU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfcU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (2U | (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                                             >> 1U)))));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (0x00000010U & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                 >> 4U)) 
                                             << 4U)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v) 
                              << 2U));
                } else {
                    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                        = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                           | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = (0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                       ^ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            } else {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                       & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = (0x00000010U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            }
        } else {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfcU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (2U | (1U & (~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                                         >> 1U)))));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000010U & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                             >> 4U)) 
                                         << 4U)));
            } else {
                tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                                >> 1U)));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000010U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)));
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v) 
                      << 2U));
        }
        if ((7U == (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB)));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xdfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (0x00000020U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB)));
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xdfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
        }
        if ((0U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = (0x00000040U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xbfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (0x00000040U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
            }
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = (0xbfU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out));
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
            = ((0x7fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
               | (0x00000080U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t)));
        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                           | (4U & ((~ (1U & VL_REDXOR_8(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) 
                                    << 2U)));
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                       | (4U & ((~ (1U & VL_REDXOR_8(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t))) 
                                << 2U)));
            }
        }
        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0x3fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (0x000000c0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out)) 
                   | (4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)));
        }
    }
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q 
        = tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__unnamedblk1__DOT__Q_t;
}

void Vtb_ss___024root___nba_sequent__TOP__30(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___nba_sequent__TOP__30\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD = 0;
    CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS = 0;
    CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair = 0;
    CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB;
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc = 0;
    CData/*7:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F = 0;
    CData/*2:0*/ __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc;
    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc = 0;
    // Body
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD 
        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                 >> 3U));
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS 
        = (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR));
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair 
        = (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                 >> 4U));
    tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB 
        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates 
        = ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))
            ? 4U : 3U);
    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op 
        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                 >> 3U));
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 7U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeAF = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRS = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CPL = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CCF = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_SCF = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RLD = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RRD = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetDI = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetEI = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 3U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 0U;
    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 0U;
    if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet))) {
        if ((0x00000080U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x00000040U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                        } else if (
                                                   (2U 
                                                    == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                        } else if (
                                                   (3U 
                                                    == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = 3U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F 
                                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__46__F) 
                                                    >> 6U))))));
                                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                        } else {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                        }
                                    } else if ((4U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                    } else if ((5U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetEI = 1U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc 
                                            = (7U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U));
                                        __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F 
                                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__47__F) 
                                                    >> 6U))))));
                                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL = 1U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__48__F) 
                                                     >> 6U))))));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                                    }
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                            ? 7U : 
                                           ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U));
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                            ? 0x0bU
                                            : (1U | 
                                               ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U)));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__49__F) 
                                                     >> 6U))))));
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                    } else {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    }
                                } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetDI = 1U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__50__F) 
                                                     >> 6U))))));
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0bU;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                           | (1U | 
                                              ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                               << 1U)));
                                }
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 7U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                           | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                              << 1U));
                                }
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__51__F) 
                                                    >> 6U))))));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                                }
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = 2U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__52__F) 
                                                     >> 6U))))));
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                    } else {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    }
                                } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH = 1U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__53__F) 
                                                     >> 6U))))));
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__54__F) 
                                                    >> 6U))))));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                                }
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U));
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0x0bU : (1U 
                                                   | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                      << 1U)));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__55__F) 
                                                    >> 6U))))));
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                }
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__56__F) 
                                                    >> 6U))))));
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0bU;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U)));
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 7U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                          << 1U));
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc 
                                = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 3U));
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                          ? ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                                  ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F)
                                                  : 
                                                 (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__57__F) 
                                                   >> 6U))))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                            }
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                    } else if ((3U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = 3U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__58__F) 
                                                     >> 6U))))));
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                    } else {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                    }
                                } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                                }
                            }
                        } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 4U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc 
                                        = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 3U));
                                    __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F 
                                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                        = (1U & ((4U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                    ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F)
                                                    : 
                                                   (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__cc))
                                                    ? 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__59__F) 
                                                     >> 6U))))));
                                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRS = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__60__F) 
                                                    >> 6U))))));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                                }
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 7U : ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U));
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                        ? 0x0bU : (1U 
                                                   | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                      << 1U)));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__61__F) 
                                                    >> 6U))))));
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                }
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__62__F) 
                                                    >> 6U))))));
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0bU;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U)));
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 7U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                          << 1U));
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc 
                                = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 3U));
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                          ? ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                                  ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F)
                                                  : 
                                                 (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__63__F) 
                                                   >> 6U))))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                            }
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__64__F) 
                                                    >> 6U))))));
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                }
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                            }
                        }
                    } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc 
                                    = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 3U));
                                __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                    = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                              ? ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                                   ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F)
                                                   : 
                                                  (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__cc))
                                                   ? 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__65__F) 
                                                    >> 6U))))));
                                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc 
                                = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 3U));
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                                = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                          ? ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                                  ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F)
                                                  : 
                                                 (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__66__F) 
                                                   >> 6U))))));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                            }
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 7U : ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U));
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))
                                    ? 0x0bU : (1U | 
                                               ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                                << 1U)));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc 
                                = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 3U));
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true 
                                = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                          ? ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                                  ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F)
                                                  : 
                                                 (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__67__F) 
                                                   >> 6U))))));
                            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            }
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
                        } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call = 1U;
                        }
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc 
                                = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 3U));
                            __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F 
                                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true 
                                = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                          ? ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F) 
                                                   >> 2U))))
                                          : ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                              ? ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                                  ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F)
                                                  : 
                                                 (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F)))
                                              : ((1U 
                                                  & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__cc))
                                                  ? 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__68__F) 
                                                   >> 6U))))));
                            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0bU;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U)));
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 7U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                      << 1U));
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc 
                            = (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                     >> 3U));
                        __Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true 
                            = (1U & ((4U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                      ? ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                          ? ((1U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                              ? ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F) 
                                                 >> 7U)
                                              : (~ 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F) 
                                                  >> 7U)))
                                          : ((1U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                              ? ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F) 
                                                 >> 2U)
                                              : (~ 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F) 
                                                  >> 2U))))
                                      : ((2U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                          ? ((1U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                              ? (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F)
                                              : (~ (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F)))
                                          : ((1U & (IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__cc))
                                              ? ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F) 
                                                 >> 6U)
                                              : (~ 
                                                 ((IData)(__Vfunc_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__is_cc_true__69__F) 
                                                  >> 6U))))));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                        if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 1U;
                        }
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                    = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
            }
        } else if ((0x00000040U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                    } else if ((2U 
                                                == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                            = ((8U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    }
                } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
            }
        } else if ((0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CCF = 1U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                        }
                    } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                = (0x0000000cU | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 3U))));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            }
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                        }
                    }
                } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_SCF = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                            = (4U | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                            << 1U)));
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                      << 1U));
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                    }
                }
            } else if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CPL = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                            = (0x0000000cU | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U))));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                      >> 6U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        }
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                    }
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0cU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                        = (4U | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 5U;
                    } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 4U;
                    } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                        << 1U)));
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                  << 1U));
                    }
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    if ((0x00000040U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                }
            }
        } else if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                            = (0x0000000cU | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 1U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U))));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                    }
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                        = (4U | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                        << 1U)));
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                  << 1U));
                    }
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                }
            }
        } else if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                }
            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                        = (0x0000000cU | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                    if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U))) || 
                          (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U)))) || 
                         (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                       >> 4U))))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 3U))));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                    if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U))) || 
                          (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U)))) || 
                         (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                       >> 4U))))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16 = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeAF = 1U;
            }
        } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                       | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DDD));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
            }
        } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 6U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                    = (4U | (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair));
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                }
            }
        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (1U | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                                    << 1U)));
                }
            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                if ((3U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__DPair) 
                              << 1U));
                }
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
            }
        } else if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0dU;
            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0fU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0cU;
            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
        if ((0x00000080U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x00000040U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                     || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                 || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        }
                    } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                        if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                             || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                    if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                         || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                            if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                 || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                             || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                    if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                         || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                }
            } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                     || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0bU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                }
            }
        } else if ((0x00000040U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                            if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                 || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                             || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        }
                    }
                } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                    if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                         || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                    }
                }
            } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                     || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 9U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                }
            }
        } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                        if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                             || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                         || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                }
            } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
                if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                     || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                }
            }
        } else if ((0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State))) {
            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
            }
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc = 1U;
            if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                 || (7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 8U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
            }
        }
    } else if ((0x00000080U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
        if ((1U & (~ ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB) 
                      >> 6U)))) {
            if ((0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (~ ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB) 
                              >> 2U)))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 6U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                    = ((7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16)) 
                                       | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))
                                        ? 0x0eU : 6U);
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR = 1U;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 0x0aU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                    = ((7U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16)) 
                                       | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)));
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 6U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))
                                        ? 0x0eU : 6U);
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR = 1U;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0cU;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))
                                    ? 0x0eU : 6U);
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 0x0cU;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))
                                    ? 0x0eU : 6U);
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR))
                                    ? 0x0dU : 5U);
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000040U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
        if ((0x00000020U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (~ ((IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB) 
                                      >> 1U)))) {
                            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                                }
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U))));
                                }
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U)))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                           | (6U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 3U)));
                                }
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                                if ((((0U == (3U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U))) 
                                      || (1U == (3U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                    >> 4U)))) 
                                     || (2U == (3U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U))))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U))));
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                                }
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                                if ((((0U == (3U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U))) 
                                      || (1U == (3U 
                                                 & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                    >> 4U)))) 
                                     || (2U == (3U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U))))) {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 3U)));
                                } else {
                                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                            if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                            }
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                            if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 3U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                        }
                    }
                } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode 
                            = ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))
                                ? 2U : 1U);
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                     >> 3U))));
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U)));
                        } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 3U))));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                            }
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                    }
                }
            } else if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0dU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RLD = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                            } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 0U;
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 3U))));
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 3U))));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                            }
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 4U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To));
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 0x0eU;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RRD = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 3U))));
                    } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 3U)));
                    } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U))));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                        }
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                }
            }
        } else if ((0x00000010U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 2U;
                        }
                    } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    }
                } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 3U))));
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                       | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            }
                        }
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                        if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 3U))));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                            }
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                        } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                            if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 4U))) 
                                  || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                   >> 4U)))) 
                                 || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 4U))))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                >> 3U)));
                            } else {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                            }
                        }
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                        }
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                        if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 3U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                    }
                }
            } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD = 4U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 1U;
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 3U))));
                    } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 3U)));
                    } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U))));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                        }
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                }
            }
        } else if ((8U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 0U;
                    }
                } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                    } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                }
            } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                    } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 4U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 8U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U))));
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                    } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        if ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                          >> 4U)))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 9U;
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                                   | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                    if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                                  >> 3U))));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                        }
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                    } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                        if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 4U))) 
                              || (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                               >> 4U)))) 
                             || (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 4U))))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                            >> 3U)));
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                        }
                    }
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                    if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                      >> 3U)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
                }
            }
        } else if ((4U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD = 6U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
                } else {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode = 0U;
                }
            } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 5U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16 = 7U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 2U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 7U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To = 0x0aU;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
            }
        } else if ((2U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 5U;
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ = 1U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 4U))) ? 8U
                            : (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                           >> 3U))));
                } else if ((4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 6U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                         >> 4U))) ? 9U
                            : (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                     >> 3U)));
                } else if ((5U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                }
            } else {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 3U;
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                    if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U))) || 
                          (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U)))) || 
                         (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                       >> 4U))))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                              >> 3U))));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 8U;
                    }
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 4U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 3U;
                } else if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op = 3U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)));
                    if ((((0U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U))) || 
                          (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 4U)))) || 
                         (2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                       >> 4U))))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                            = ((9U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                        >> 3U)));
                    } else {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To = 9U;
                    }
                }
            }
        } else if ((1U & (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                >> 3U)));
                if ((6U == (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
                        = (8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To));
                }
            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write = 1U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
            }
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d = 2U;
            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i = 1U;
                if ((6U != (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                  >> 3U)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR) 
                                    >> 3U)));
                }
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC = 1U;
            }
        }
    }
    if ((6U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
        if (((0x36U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB)) 
             | (0xcbU == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 7U;
        }
    }
    if ((7U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates = 5U;
        if ((1U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To = 2U;
        }
        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To 
            = tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__SSS;
        if (((0x36U == (IData)(tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT__unnamedblk1__DOT__IRB)) 
             | (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet)))) {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC = 1U;
        } else {
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead = 1U;
        }
    }
}

void Vtb_ss___024root___nba_sequent__TOP__0(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__2(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__4(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__9(Vtb_ss___024root* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__13(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__2(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__16(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__3(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__17(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__4(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss___024root___nba_sequent__TOP__19(Vtb_ss___024root* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__5(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1(Vtb_ss_vdp__M3f* vlSelf);
void Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__6(Vtb_ss_vdp__M3f* vlSelf);

void Vtb_ss___024root___eval_body__nba(Vtb_ss___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ss___024root___eval_body__nba\n"); );
    Vtb_ss__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.tb_ss__DOT__ce_pix_g = ((~ (IData)(vlSelfRef.tb_ss__DOT__ss_freeze)) 
                                              & (IData)(vlSelfRef.tb_ss__DOT__ce_pix));
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000705800100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__4(vlSelf);
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16 
                = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) 
                   || (1U & (((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                              & (0x0109U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)))
                              ? ((IData)(vlSelfRef.tb_ss__DOT__ss_din) 
                                 >> 4U) : ((IData)(vlSelfRef.tb_ss__DOT__ce_cpu_g) 
                                           & (0x0000000fU 
                                              == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div))))));
        }
    }
    if ((0x000000000001f9c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                 & (3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB));
            }
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                 & (4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r));
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH 
                = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                 & (3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB) 
                                      >> 8U));
            }
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                 & (4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r) 
                                      >> 8U));
            }
            if ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16) 
                  >> 2U) & (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                             & (1U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) 
                            | ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                               & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL 
                    = (0x000000ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH 
                    = (0x000000ffU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16) 
                                      >> 8U));
            }
        }
    }
    if ((0x0000000000001ff0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL = 0U;
            if (((((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                   & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r))) 
                  & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1))) 
                 | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r) 
                    & (7U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))))) {
                if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r) 
                                          >> 1U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL 
                                    = (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r));
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL 
                                = (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r));
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                 & ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                    | (4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL = 1U;
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH = 0U;
            if (((((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                   & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r))) 
                  & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1))) 
                 | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r) 
                    & (7U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))))) {
                if ((0x00000010U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r) 
                                  >> 3U)))) {
                        if ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r))) {
                            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r) 
                                          >> 1U)))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH 
                                    = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r)));
                            }
                        } else {
                            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH 
                                = (1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r)));
                        }
                    }
                }
            }
            if (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                 & ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                    | (4U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH = 1U;
            }
            if ((((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16) 
                  >> 2U) & (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                             & (1U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) 
                            | ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                               & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)))))) {
                if ((((0U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))) 
                      || (1U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16)))) 
                     || (2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL = 1U;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH = 1U;
                }
            }
        }
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__8
            if (vlSelfRef.__VdlySet__tb_ss__DOT__nvmon__v0) {
                vlSelfRef.__VdlySet__tb_ss__DOT__nvmon__v0 = 0U;
                vlSelfRef.tb_ss__DOT__nvmon = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__nvmon__v1) {
                vlSelfRef.__VdlySet__tb_ss__DOT__nvmon__v1 = 0U;
                vlSelfRef.tb_ss__DOT__nvmon = 0U;
            }
        }
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v0) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v0 = 0U;
                vlSelfRef.tb_ss__DOT__tb_wdin = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v0;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v1) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v1 = 0U;
                vlSelfRef.tb_ss__DOT__tb_wdin = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v1;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v2) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v2 = 0U;
                vlSelfRef.tb_ss__DOT__tb_wdin = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v2;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v3) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v3 = 0U;
                vlSelfRef.tb_ss__DOT__tb_wdin = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v3;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v4) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_wdin__v4 = 0U;
                vlSelfRef.tb_ss__DOT__tb_wdin = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_wdin__v4;
            }
        }
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__11
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v0) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v0 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v1) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v1 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v2) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v2 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v3) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v3 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v4) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v4 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v5) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v5 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v6) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v6 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v7) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_taken__v7 = 0U;
                vlSelfRef.tb_ss__DOT__tb_taken = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v0) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v0 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v0;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v1) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v1 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v1;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v2) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v2 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v2;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v3) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v3 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v3;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v4) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v4 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v4;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v5) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v5 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v5;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v6) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v6 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v6;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v7) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_raddr__v7 = 0U;
                vlSelfRef.tb_ss__DOT__tb_raddr = vlSelfRef.__VdlyVal__tb_ss__DOT__tb_raddr__v7;
            }
        }
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__12
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v0) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v0 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v1) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v1 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v2) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v2 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v3) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v3 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v4) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v4 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v5) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v5 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v6) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v6 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v7) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v7 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v8) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v8 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v9) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v9 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v10) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v10 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v11) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v11 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v12) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v12 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v13) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v13 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v14) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v14 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 1U;
            }
            if (vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v15) {
                vlSelfRef.__VdlySet__tb_ss__DOT__tb_rd_stb__v15 = 0U;
                vlSelfRef.tb_ss__DOT__tb_rd_stb = 0U;
            }
        }
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__bootloader_n;
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_data 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__ROM2413__DOT__base_voices
                [((0x25U >= (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr))
                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr)
                   : 0U)];
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__li_data 
                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_sign) 
                    << 9U) | (0x000001ffU & ((0x000001ffU 
                                              & (((0x000003ffU 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data1) 
                                                      - (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data0))) 
                                                  * (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_weight)) 
                                                 >> 6U)) 
                                             + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data0))));
            if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
                vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n = 1U;
            } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
                vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n = 1U;
                if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                    if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
                    }
                    if ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n = 0U;
                    }
                } else {
                    if ((((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                          & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead))) 
                         & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write)))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i;
                    }
                    if (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                         & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__MREQ_n 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i;
                    }
                }
            }
            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA;
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_sign 
                = (1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout) 
                         >> 0x0dU));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_weight 
                = (0x0000003fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data1 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data
                [(0x0000007fU & (((IData)(1U) + ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout) 
                                                 >> 6U)) 
                                 | (- (IData)((0x7fU 
                                               == (0x0000007fU 
                                                   & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout) 
                                                      >> 6U)))))))];
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data0 
                = vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data
                [(0x0000007fU & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__opout) 
                                 >> 6U))];
        }
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__2((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            SData/*12:0*/ __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__FM_gated;
            __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__FM_gated = 0;
            IData/*16:0*/ __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__mix__DOT__sum;
            __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__mix__DOT__sum = 0;
            __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__FM_gated 
                = (0x00001fffU & ((((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__FM_out) 
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
                                  & (- (IData)((1U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D))))));
            __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__mix__DOT__sum 
                = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                                   << 4U)) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                                      << 3U)) + ((0x00010000U 
                                                  & ((IData)(__Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__FM_gated) 
                                                     << 4U)) 
                                                 | ((IData)(__Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__FM_gated) 
                                                    << 3U))));
            vlSelfRef.tb_ss__DOT__sys__DOT__mix__DOT__clipped 
                = (0x0001ffffU & ((1U & VL_REDXOR_32(
                                                     (3U 
                                                      & (__Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__mix__DOT__sum 
                                                         >> 0x0000000fU))))
                                   ? (- (IData)((1U 
                                                 & (__Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__mix__DOT__sum 
                                                    >> 0x00000010U))))
                                   : __Vinline_0__nba_comb__TOP__0_tb_ss__DOT__sys__DOT__mix__DOT__sum));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) {
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                    = (IData)((0x0000ffffffffffffULL 
                               & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[3U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[2U])))));
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                    = (((IData)(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                  << 0x00000010U) | (QData)((IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] 
                                                                     >> 0x00000010U))))) 
                        << 0x00000010U) | (IData)((
                                                   (0x0000ffffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[3U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[2U])))) 
                                                   >> 0x00000020U)));
                vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
                    = (((IData)(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                  << 0x00000010U) | (QData)((IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4[1U] 
                                                                     >> 0x00000010U))))) 
                        >> 0x00000010U) | ((IData)(
                                                   (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
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
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                = ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n)) 
                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__M1_n));
        }
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__3((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__17(vlSelf);
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__4((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
        {
            // Inlined CFunc: _nba_sequent__TOP__18
            vlSelfRef.tb_ss__DOT__vid__DOT__vcount 
                = (((IData)(vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__vcount) 
                    & (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount)) 
                   | ((IData)(vlSelfRef.tb_ss__DOT__vid__DOT__vcount) 
                      & (~ (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount))));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__vcount = 0U;
            vlSelfRef.tb_ss__DOT__ce_vdp_g = ((~ (IData)(vlSelfRef.tb_ss__DOT__ss_freeze)) 
                                              & (IData)(vlSelfRef.tb_ss__DOT__ce_vdp));
            vlSelfRef.tb_ss__DOT__vid__DOT__hcount 
                = (((IData)(vlSelfRef.__Vdly__tb_ss__DOT__vid__DOT__hcount) 
                    & (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount)) 
                   | ((IData)(vlSelfRef.tb_ss__DOT__vid__DOT__hcount) 
                      & (~ (IData)(vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount))));
            vlSelfRef.__VdlyMask__tb_ss__DOT__vid__DOT__hcount = 0U;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__0((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__20
            vlSelfRef.tb_ss__DOT__smode_M1 = ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M2) 
                                              & (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M1));
            vlSelfRef.tb_ss__DOT__smode_M3 = ((IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M3) 
                                              & (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.__PVT__mode_M2));
            if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
                vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl = 0xffU;
            } else if (vlSelfRef.tb_ss__DOT__ss_we) {
                if ((0x0030U == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl 
                        = vlSelfRef.tb_ss__DOT__ss_din;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) {
                if ((1U & (~ ((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35))) 
                              | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n))))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                }
            }
        }
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__5((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__21
            if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
                vlSelfRef.tb_ss__DOT__sys__DOT__fm_d = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__fm_a = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__WR_n = 1U;
            } else {
                if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                     & ((0x002bU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                        | (0x002cU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))))) {
                    if ((0x002bU != (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm_d 
                            = vlSelfRef.tb_ss__DOT__ss_din;
                    }
                    if ((0x002bU == (IData)(vlSelfRef.tb_ss__DOT__ss_a))) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__fm_a 
                            = (1U & (IData)(vlSelfRef.tb_ss__DOT__ss_din));
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__fm_WR_n)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm_d 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                    vlSelfRef.tb_ss__DOT__sys__DOT__fm_a 
                        = (1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A));
                }
                if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__WR_n = 1U;
                    if ((1U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                        if (((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                             & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__Write))) {
                            vlSelfRef.tb_ss__DOT__sys__DOT__WR_n = 0U;
                        }
                    }
                }
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss_vdp__M3f___nba_comb__TOP__tb_ss__DOT__sys__DOT__vdp_inst__1((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__24(vlSelf);
    }
    if ((0x00000000fffc0010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__25(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel 
                = (7U & ((0x00000080U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in))
                          ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__D_in) 
                             >> 4U) : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__regn)));
            if ((0U != (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state))) {
                vlSelfRef.tb_ss__DOT____Vcellinp__wram__data 
                    = vlSelfRef.tb_ss__DOT__ss_mem_din;
                vlSelfRef.tb_ss__DOT____Vcellinp__wram__address 
                    = (0x00001fffU & ((- (IData)((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                                      >> 0x0000000fU))))) 
                                      & vlSelfRef.tb_ss__DOT__ss_mem_addr));
                vlSelfRef.tb_ss__DOT____Vcellinp__nvram__address_a 
                    = (0x00007fffU & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                      & (- (IData)(
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.tb_ss__DOT__ss_mem_addr 
                                                        >> 0x0000000fU)))))));
                vlSelfRef.tb_ss__DOT____Vcellinp__wram__wren 
                    = ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_we) 
                       & (0x00008000U == (0x00018000U 
                                          & vlSelfRef.tb_ss__DOT__ss_mem_addr)));
                vlSelfRef.tb_ss__DOT____Vcellinp__nvram__wren_a 
                    = ((IData)(vlSelfRef.tb_ss__DOT__ss_mem_we) 
                       & (0x00010000U == (0x00018000U 
                                          & vlSelfRef.tb_ss__DOT__ss_mem_addr)));
            } else {
                vlSelfRef.tb_ss__DOT____Vcellinp__wram__data 
                    = vlSelfRef.tb_ss__DOT__sys__DOT__D_in;
                vlSelfRef.tb_ss__DOT____Vcellinp__wram__address 
                    = (0x00001fffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A));
                vlSelfRef.tb_ss__DOT____Vcellinp__nvram__address_a 
                    = (0x00007fffU & ((((~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                            >> 0x0000000eU)) 
                                        & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_p)) 
                                       << 0x0000000eU) 
                                      | (0x00003fffU 
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
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 
                = (IData)(((0U == (0x00c0U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_WR_n 
                = (1U & ((~ (IData)(((0x0040U == (0x00c0U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)));
            vlSelfRef.tb_ss__DOT__sys__DOT__vdp_WR_n 
                = (1U & ((~ (IData)(((0x0080U == (0x00c0U 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)));
            vlSelfRef.tb_ss__DOT__sys__DOT__vdp_RD_n 
                = (1U & ((~ (((2U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                            >> 6U))) 
                              | (1U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                              >> 6U)))) 
                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__RD_n)));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm_WR_n 
                = (1U & ((~ (IData)(((0x00f0U == (0x00feU 
                                                  & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))) 
                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
                         | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__WR_n)));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__27
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
            if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r = 0U;
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we)))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r = 0U;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r 
                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16;
                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r = 0U;
                        if ((1U & (~ ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                                      & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                                            >> 2U)))))) {
                            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU;
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r 
                                    = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x00000000000e0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__28
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v 
                = (IData)((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                            >> 1U) ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                      >> 3U)));
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__29
            if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA 
                    = (0x000000ffU & ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                       ? ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                                     ? 
                                                    ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP) 
                                                     >> 8U)
                                                     : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP))))
                                       : ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                           ? ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC)
                                                   : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA)
                                                   : 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA) 
                                                   >> 8U)))
                                           : ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To))
                                               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA)
                                               : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA) 
                                                  >> 8U)))));
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB 
                    = (0x000000ffU & ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                       ? ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                           ? ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                                   ? 0U
                                                   : 
                                                  (((0x71U 
                                                     == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)) 
                                                    & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__OUT0))
                                                    ? 0xffU
                                                    : 0U))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC)))
                                           : ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F)
                                                   : 1U)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                                   ? 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP) 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP))))
                                       : ((4U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                           ? ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC)
                                                   : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                                   ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB)
                                                   : 
                                                  ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB) 
                                                   >> 8U)))
                                           : ((1U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To))
                                               ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB)
                                               : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB) 
                                                  >> 8U)))));
                if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg;
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg;
                }
            }
            if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg = 0U;
            } else if (vlSelfRef.tb_ss__DOT__ce_cpu_g) {
                if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg 
                        = vlSelfRef.tb_ss__DOT__sys__DOT__D_out;
                }
            }
            vlSelfRef.tb_ss__DOT__ce_cpu_g = ((~ (IData)(vlSelfRef.tb_ss__DOT__ss_freeze)) 
                                              & (IData)(vlSelfRef.tb_ss__DOT__ce_cpu));
        }
    }
    if ((0x0000000705800100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ss___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__31
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
            if (vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst) {
                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we)))) {
                    if (vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn) {
                        if (((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                             & (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState) 
                                   >> 2U)))) {
                            if ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet = 0U;
                                if ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                    if ((3U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                        vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet 
                                            = vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix;
                                    }
                                }
                            }
                        } else if ((6U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle))) {
                            if ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix))) {
                                vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet = 1U;
                            }
                        }
                    }
                }
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait 
                = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle) 
                   & (1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.tb_ss__DOT__sys__DOT__D_out = 
                ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__IORQ_n)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33)
                      ? (IData)(vlSelfRef.tb_ss__DOT__nvram_q)
                      : (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__nvram_ex)) 
                          & (0xc000U == (0xc000U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))
                          ? (IData)(vlSelfRef.tb_ss__DOT__ram_q)
                          : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)
                              ? (IData)(vlSelfRef.tb_ss__DOT__nvram_q)
                              : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                  ? (IData)(vlSelfRef.tb_ss__DOT__nvram_q)
                                  : (((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n)) 
                                      & (0U == (0xc000U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A))))
                                      ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__boot_rom_D_out)
                                      : (IData)(vlSelfRef.tb_ss__DOT__rom_do))))))
                  : ((0xf2U == (0x000000ffU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A)))
                      ? (0x000000f8U | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__det_D))
                      : ((3U == (3U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__A) 
                                       >> 6U))) ? (
                                                   (0xffffff80U 
                                                    & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__bootloader_n) 
                                                        << 7U) 
                                                       & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out))) 
                                                   | (0x0000007fU 
                                                      & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__io_D_out)))
                          : (IData)(vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst.D_out))));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 
                = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA)) 
                                  + ((1U & (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r) 
                                             >> 1U) 
                                            ^ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F) 
                                               & (1U 
                                                  == 
                                                  (5U 
                                                   & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r)))))) 
                                     + (0x0000000fU 
                                        & ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                            ? (~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB))
                                            : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB))))));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn 
                = ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck)) 
                   & (IData)(vlSelfRef.tb_ss__DOT__ce_cpu_g));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v 
                = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                         >> 4U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 
                = (0x0000000fU & ((7U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                         >> 4U)) + 
                                  ((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                          >> 4U)) + 
                                   (7U & ((2U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                           ? (~ ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                 >> 4U))
                                           : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                              >> 4U))))));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v 
                = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                         >> 3U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 
                = (3U & ((1U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA) 
                                >> 7U)) + ((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                  >> 3U)) 
                                           + (1U & 
                                              ((2U 
                                                & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r))
                                                ? (~ 
                                                   ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                    >> 7U))
                                                : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB) 
                                                   >> 7U))))));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v 
                = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                         >> 1U));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v 
                = ((0x00000080U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                                   << 7U)) | ((0x00000070U 
                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26) 
                                                  << 4U)) 
                                              | (0x0000000fU 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))));
        }
    }
    if ((0x00000007fffc0113ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux 
                = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp)
                    ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB)
                    : ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r)
                        ? (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q)
                        : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg)));
        }
    }
    if ((0x0000000705800100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__32
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix 
                = vlSelfRef.__Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix;
        }
    }
    if ((0x0000000800000001ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst 
                = ((IData)(vlSelfRef.tb_ss__DOT__ss_reset) 
                   | (IData)(vlSelfRef.tb_ss__DOT__reset));
            vlSelfRef.tb_ss__DOT__sys__DOT__fm__DOT__reset 
                = ((6U == (IData)(vlSelfRef.tb_ss__DOT__eng__DOT__state)) 
                   | (IData)(vlSelfRef.tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst));
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__33
            vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                          & (0x001aU >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))))) {
                if ((((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                      & (0x001bU <= (IData)(vlSelfRef.tb_ss__DOT__ss_a))) 
                     & (0x001eU >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                    vlSelfRef.tb_ss__DOT__sys__DOT__ss_cpu_seq_we = 1U;
                }
            }
            vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we = 0U;
            if (((IData)(vlSelfRef.tb_ss__DOT__ss_we) 
                 & (0x001aU >= (IData)(vlSelfRef.tb_ss__DOT__ss_a)))) {
                vlSelfRef.tb_ss__DOT__sys__DOT__ss_dir_we = 1U;
            }
            vlSelfRef.tb_ss__DOT__ss_we = vlSelfRef.__Vdly__tb_ss__DOT__ss_we;
            vlSelfRef.tb_ss__DOT__ss_a = vlSelfRef.__Vdly__tb_ss__DOT__ss_a;
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone2_sel 
                = ((0x010fU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                   | (0x0110U == (IData)(vlSelfRef.tb_ss__DOT__ss_a)));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel 
                = ((0x0111U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                   & (0x0115U > (IData)(vlSelfRef.tb_ss__DOT__ss_a)));
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs 
                = ((0x0100U <= (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                   & (0x010bU > (IData)(vlSelfRef.tb_ss__DOT__ss_a)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                = (1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                            >> 9U)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 
                = (1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                            >> 8U)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 
                = (1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                            >> 7U)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 
                = (1U & (~ ((IData)(vlSelfRef.tb_ss__DOT__ss_a) 
                            >> 6U)));
            vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_ha8957302_0_0] = 0U;
            vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[vlSelfRef.tb_ss__DOT__ss_a] = 1U;
            vlSelfRef.__VdfgBinToOneHot_Pre_ha8957302_0_0 
                = vlSelfRef.tb_ss__DOT__ss_a;
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone1_sel 
                = ((0x010eU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                   | vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[269U]);
            vlSelfRef.tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone0_sel 
                = ((0x010bU == (IData)(vlSelfRef.tb_ss__DOT__ss_a)) 
                   | vlSelfRef.__VdfgBinToOneHot_Tab_ha8957302_0_0[268U]);
        }
        Vtb_ss_vdp__M3f___nba_sequent__TOP__tb_ss__DOT__sys__DOT__vdp_inst__6((&vlSymsp->TOP__tb_ss__DOT__sys__DOT__vdp_inst));
    }
    if ((0x0000000705800103ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            CData/*2:0*/ __Vinline_0__nba_comb__TOP__6_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB;
            __Vinline_0__nba_comb__TOP__6_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB = 0;
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_14;
            __Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_14 = 0;
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_15;
            __Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_15 = 0;
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NextIs_XY_Fetch 
                = ((0U != (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)) 
                   & ((~ (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind)) 
                      & ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To)) 
                         | ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                            & ((0xcbU == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)) 
                               | (0x36U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR)))))));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res 
                = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates) 
                   == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState));
            __Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_14 
                = ((2U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                   | ((3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)) 
                      & ((1U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle)) 
                         & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16) 
                            >> 2U))));
            __Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_15 
                = ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                   & (3U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)));
            __Vinline_0__nba_comb__TOP__6_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB 
                = (__Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_15
                    ? (1U | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                             << 2U)) : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB_r));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA 
                = ((__Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_14 
                    & (0U == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State)))
                    ? (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                        << 2U) | (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16)))
                    : ((__Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_14 
                        & (2U == (3U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))))
                        ? (3U | (4U & ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State) 
                                       << 1U))) : (__Vinline_0__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_15
                                                    ? 
                                                   (2U 
                                                    | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                                                       << 2U))
                                                    : 
                                                   (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH) 
                                                     & (4U 
                                                        == (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState)))
                                                     ? 
                                                    (1U 
                                                     | ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate) 
                                                        << 2U))
                                                     : (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA_r)))));
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB 
                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH
                            [__Vinline_0__nba_comb__TOP__6_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB]) 
                    << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL
                   [__Vinline_0__nba_comb__TOP__6_tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB]);
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA 
                = (((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH
                            [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA]) 
                    << 8U) | vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL
                   [vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA]);
            vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16 
                = (0x0000ffffU & ((8U & (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16))
                                   ? ((IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA) 
                                      - (IData)(1U))
                                   : ((IData)(1U) + (IData)(vlSelfRef.tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA))));
        }
    }
}
