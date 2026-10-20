// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ss.h for the primary calling header

#ifndef VERILATED_VTB_SS___024ROOT_H_
#define VERILATED_VTB_SS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_ss_vdp__M3f;


class Vtb_ss__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ss___024root final {
  public:
    // CELLS
    Vtb_ss_vdp__M3f* __PVT__tb_ss__DOT__sys__DOT__vdp_inst;
    Vtb_ss_vdp__M3f* __PVT__tb_ss__DOT__sys__DOT__vdp2_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_ss__DOT__clk_sys;
        CData/*0:0*/ tb_ss__DOT__ce_cpu;
        CData/*0:0*/ tb_ss__DOT__ce_vdp;
        CData/*0:0*/ tb_ss__DOT__ce_pix;
        CData/*4:0*/ tb_ss__DOT__clkd;
        CData/*0:0*/ tb_ss__DOT__reset;
        CData/*7:0*/ tb_ss__DOT__rom_do;
        CData/*7:0*/ tb_ss__DOT__ram_q;
        CData/*7:0*/ tb_ss__DOT__nvram_q;
        CData/*0:0*/ tb_ss__DOT__smode_M1;
        CData/*0:0*/ tb_ss__DOT__smode_M3;
        CData/*0:0*/ tb_ss__DOT__HBlank;
        CData/*0:0*/ tb_ss__DOT__VBlank;
        CData/*0:0*/ tb_ss__DOT__HS;
        CData/*0:0*/ tb_ss__DOT__VS;
        CData/*0:0*/ tb_ss__DOT__ss_freeze;
        CData/*0:0*/ tb_ss__DOT__ss_reset;
        CData/*0:0*/ tb_ss__DOT__ss_loaded;
        CData/*7:0*/ tb_ss__DOT__ss_din;
        CData/*0:0*/ tb_ss__DOT__ss_we;
        CData/*7:0*/ tb_ss__DOT__ss_mem_din;
        CData/*0:0*/ tb_ss__DOT__ss_mem_we;
        CData/*0:0*/ tb_ss__DOT__ss_mem_req;
        CData/*0:0*/ tb_ss__DOT__ss_img_rdy;
        CData/*7:0*/ tb_ss__DOT__ss_img_q;
        CData/*2:0*/ tb_ss__DOT__tb_op;
        CData/*0:0*/ tb_ss__DOT__tb_op_stb;
        CData/*0:0*/ tb_ss__DOT__tb_rd_stb;
        CData/*0:0*/ tb_ss__DOT__tb_taken;
        CData/*0:0*/ tb_ss__DOT__tb_wr_stb;
        CData/*7:0*/ tb_ss__DOT__tb_wdin;
        CData/*0:0*/ tb_ss__DOT__ce_cpu_g;
        CData/*0:0*/ tb_ss__DOT__ce_vdp_g;
        CData/*0:0*/ tb_ss__DOT__ce_pix_g;
        CData/*2:0*/ tb_ss__DOT__ss_ack_s;
        CData/*7:0*/ tb_ss__DOT____Vcellinp__wram__data;
        CData/*0:0*/ tb_ss__DOT____Vcellinp__wram__wren;
        CData/*0:0*/ tb_ss__DOT____Vcellinp__nvram__wren_a;
        CData/*0:0*/ tb_ss__DOT__stat_rst;
        CData/*7:0*/ tb_ss__DOT__eng_load_block__Vstatic__v;
        CData/*2:0*/ tb_ss__DOT__state_prev;
        CData/*0:0*/ tb_ss__DOT__vsync_prev2;
        CData/*0:0*/ tb_ss__DOT__nvmon;
        CData/*0:0*/ tb_ss__DOT__eng_mem_req_prev;
        CData/*0:0*/ tb_ss__DOT__ss_loaded_seen;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__ss_dir_we;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__ss_cpu_seq_we;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm_touched;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__RD_n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__WR_n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__IORQ_n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__M1_n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__MREQ_n;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__D_in;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__D_out;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__vdp_RD_n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__vdp_WR_n;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__io_D_out;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__boot_rom_D_out;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__bootloader_n;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__bank0;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__bank1;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__bank2;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__bank3;
    };
    struct {
        CData/*0:0*/ tb_ss__DOT__sys__DOT__vdp_se_bank;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__PSG_mux;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_WR_n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm_a;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm_d;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm_WR_n;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__det_D;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__HL;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__nvram_e;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__nvram_ex;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__nvram_p;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__nvram_cme;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__lock_mapper_B;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_codies;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_codies_lock;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_msx_check0;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_msx_check1;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_msx_lock0;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_msx_lock;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mapper_msx;
        CData/*0:0*/ tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__reset;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm__DOT__opllptr;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm__DOT__oplldat;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__opllwr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__am;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__pm;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__wf;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__tl;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__fm__DOT__fb;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__ar;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__dr;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__sl;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__rr;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__ml;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__fm__DOT__blk;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__rks;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__key;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__rhythm;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__noise;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__faddr;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__maddr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wr;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_addr;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_addr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_sign;
        CData/*5:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_weight;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__init_ch;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__rslot;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memwr;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__rm;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot;
        CData/*5:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_addr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wr;
        CData/*5:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_addr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wr;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_addr;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__rflag;
    };
    struct {
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kflag;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__tll;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__kll;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__fb_buf;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__wf_buf;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__extra_mode;
        CData/*5:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__vindex;
        CData/*5:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rstate;
        CData/*5:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_sign;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_wf;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memwr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise14;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__noise17;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mute;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__s8__DOT__ff_count;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count;
        CData/*6:0*/ tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone_regs;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone0_sel;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone1_sel;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_tone2_sel;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ss_noise_sel;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__vol0;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__vol1;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__vol2;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__vol3;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ctrl3;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__regn;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__clk_div;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__cen_16;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__clr_noise;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__last_wr;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__reg_sel;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__out2;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__u_vol__DOT__max;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__out;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__u_vol__DOT__max;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__out;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__u_vol__DOT__max;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__u_vol__DOT__max;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__OUT0;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__NoRead;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__Write;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__DI_Reg;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIH;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegDIL;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA_r;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrA;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrB_r;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegAddrC;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEH;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegWEL;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Alternate;
    };
    struct {
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF1;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusReq_s;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusAck;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ClkEn;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMI_s;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IStatus;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__T_Res;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Pre_XY_F_M;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NextIs_XY_Fetch;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_Ind;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__No_BTR;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BTR_r;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t2;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDecZ;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Q;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F_Out;
        CData/*4:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC_r;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycles_d;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TStates;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_PC;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Inc_WZ;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Acc;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusB_To;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_BusA_To;
        CData/*3:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PreserveC;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Set_Addr_To;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Jump;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpE;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__JumpXY;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Call;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RstP;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDZ;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDW;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__LDSPHL;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IORQ_i;
        CData/*2:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Special_LD;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRp;
    };
    struct {
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeAF;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeRS;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_DJNZ;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CPL;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_CCF;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_SCF;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RETN;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BT;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BC;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_BTR;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RLD;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RRD;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_RXDD;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I_INRC;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetWZ;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetDI;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SetEI;
        CData/*1:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IMode;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XYbit_undoc;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__n;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_2__is_cc_true;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_1__is_cc_true;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__mcode__DOT____VlemCall_0__is_cc_true;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__ctrl;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__gg_ddr;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__gg_txd;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__gg_rxd;
        CData/*7:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__gg_pdr;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__j1_th_dir;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__j2_th_dir;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__analog_select;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__analog_player;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__io_inst__DOT__analog_upper;
        CData/*0:0*/ tb_ss__DOT__sys__DOT__mix__DOT__toggle;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__chk_magic;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__chk_ver;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__chk_core;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__hdr_ok;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__hdr_done;
        CData/*2:0*/ tb_ss__DOT__eng__DOT__state;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__err;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__was_load;
        CData/*6:0*/ tb_ss__DOT__eng__DOT__settle_cnt;
        CData/*1:0*/ tb_ss__DOT__eng__DOT__ack_s;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__wr_pend;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__rd_pend;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__rd_out;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__resync;
        CData/*4:0*/ tb_ss__DOT__eng__DOT__rd_lat;
        CData/*7:0*/ tb_ss__DOT__eng__DOT__pend_din;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__fast_rdy;
        CData/*7:0*/ tb_ss__DOT__eng__DOT__fast_q;
        CData/*0:0*/ tb_ss__DOT__eng__DOT__fast_sel;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_25;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_26;
        CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_27;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
        CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__bootloader_n;
        CData/*0:0*/ __Vdly__tb_ss__DOT__ss_we;
        CData/*7:0*/ __Vdly__tb_ss__DOT__ss_din;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR;
        CData/*1:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ACC;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Ap;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Fp;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__I;
        CData/*7:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__R;
        CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r;
        CData/*2:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle;
        CData/*2:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState;
        CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Halt_FF;
        CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle;
        CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle;
        CData/*0:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntE_FF2;
        CData/*5:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_addr;
        CData/*6:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s5__DOT__ff_count;
        CData/*6:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s2__DOT__ff_count;
        CData/*6:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__s0__DOT__ff_count;
        CData/*1:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Prefix;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v1;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v3;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v3;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v6;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v7;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v3;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v9;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v9;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v0;
        CData/*7:0*/ __VdlyVal__tb_ss__DOT__tb_wdin__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wdin__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v2;
        CData/*7:0*/ __VdlyVal__tb_ss__DOT__tb_wdin__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wdin__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v3;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v10;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v10;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v10;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v11;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v11;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v12;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v12;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v12;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v13;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v13;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v9;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v10;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v11;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v14;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v14;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v14;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v15;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v15;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v7;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v16;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v16;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v16;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v17;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v17;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v4;
    };
    struct {
        CData/*7:0*/ __VdlyVal__tb_ss__DOT__tb_wdin__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wdin__v2;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v5;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v5;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v18;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v18;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v18;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v19;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v19;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__stat_rst__v9;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__reset__v9;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v20;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v20;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v20;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v21;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v21;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v12;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v13;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_raddr__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_taken__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v14;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_rd_stb__v15;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v22;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v22;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v22;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v23;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v23;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v24;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v24;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v24;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v25;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v25;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v6;
        CData/*7:0*/ __VdlyVal__tb_ss__DOT__tb_wdin__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wdin__v3;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v6;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v7;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__nvmon__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v8;
        CData/*7:0*/ __VdlyVal__tb_ss__DOT__tb_wdin__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wdin__v4;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v8;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_wr_stb__v9;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_waddr__v9;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__nvmon__v1;
        CData/*2:0*/ __VdlyVal__tb_ss__DOT__tb_op__v26;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v26;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v26;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op_stb__v27;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__tb_op__v27;
        CData/*3:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v0;
        CData/*3:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
        CData/*4:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0;
        CData/*4:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
    };
    struct {
        CData/*3:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0;
        CData/*3:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache__v0;
        CData/*5:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0;
        CData/*5:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1;
        CData/*3:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0;
        CData/*3:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
        CData/*4:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v0;
        CData/*4:0*/ __VdlyDim0__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
        CData/*0:0*/ __VdlySet__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__clk_sys__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT____Vcellinp__psg2_inst__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__fm__DOT__reset__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ALU_Op_r__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Auto_Wait_t1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ExchangeDH__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IncDec_16__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__MCycle__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Read_To_Reg_r__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_ALU_r__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__TState__0;
        CData/*0:0*/ __Vtrigprevexpr_h6c597b80__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Save_Mux__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry7_v__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Carry_v__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Q_v__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Arith16_r__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusA__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__BusB__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__F__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ISet__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__XY_State__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Z16_r__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__HalfCarry_v__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__alu__DOT__Overflow_v__0;
        CData/*7:0*/ __Vtrigprevexpr_hbd471de6__0;
        CData/*5:0*/ __Vtrigprevexpr_h0a86ca6f__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IR__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__IntCycle__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__NMICycle__0;
        SData/*15:0*/ tb_ss__DOT__audio_l;
        SData/*15:0*/ tb_ss__DOT__audio_r;
        SData/*9:0*/ tb_ss__DOT__ss_a;
        SData/*13:0*/ tb_ss__DOT____Vcellinp__wram__address;
        SData/*14:0*/ tb_ss__DOT____Vcellinp__nvram__address_a;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__A;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__last_read_addr;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__PSG_outL;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__PSG_outR;
        SData/*13:0*/ tb_ss__DOT__sys__DOT__FM_out;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__fm__DOT__fnum;
        SData/*12:0*/ tb_ss__DOT__sys__DOT__fm__DOT__egout;
        SData/*13:0*/ tb_ss__DOT__sys__DOT__fm__DOT__opout;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__fm__DOT__fdata;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__fm__DOT__mdata;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vL;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__AVERAGE__Vstatic__vR;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__li_data;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__fb_wdata;
    };
    struct {
        SData/*9:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_wdata;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__mo_rdata;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data0;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__ff_data1;
        SData/*12:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__ardata;
        SData/*14:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp;
        SData/*12:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__ff_egout;
        SData/*13:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__unnamedblk1__DOT__opout_buf;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data0;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data1;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_weight;
        SData/*13:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__ff_data;
        SData/*12:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__pmcount;
        SData/*13:0*/ tb_ss__DOT__sys__DOT__fm__DOT__temporalmixer__DOT__mix;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ch0;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ch1;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__ch2;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__noise;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__tone0;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__tone1;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__tone2;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone2__DOT__cnt;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone1__DOT__cnt;
        SData/*9:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_tone0__DOT__cnt;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__shift;
        SData/*10:0*/ tb_ss__DOT__sys__DOT__psg_inst__DOT__u_noise__DOT__cnt;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusC;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r;
        SData/*15:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16;
        SData/*8:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__unnamedblk1__DOT__ioq;
        SData/*8:0*/ tb_ss__DOT__vid__DOT__hcount;
        SData/*8:0*/ tb_ss__DOT__vid__DOT__vcount;
        SData/*9:0*/ __VdfgBinToOneHot_Pre_ha8957302_0_0;
        SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_11;
        SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_12;
        SData/*10:0*/ __VdfgRegularize_h6e95ff9d_0_13;
        SData/*12:0*/ __VdfgRegularize_h6e95ff9d_0_24;
        SData/*9:0*/ __Vdly__tb_ss__DOT__ss_a;
        SData/*8:0*/ __Vdly__tb_ss__DOT__vid__DOT__hcount;
        SData/*8:0*/ __VdlyMask__tb_ss__DOT__vid__DOT__hcount;
        SData/*8:0*/ __Vdly__tb_ss__DOT__vid__DOT__vcount;
        SData/*8:0*/ __VdlyMask__tb_ss__DOT__vid__DOT__vcount;
        SData/*15:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__PC;
        SData/*15:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ;
        SData/*15:0*/ __Vdly__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__SP;
        SData/*9:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
        SData/*15:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__ID16__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusA_r__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__RegBusB__0;
        SData/*15:0*/ __Vtrigprevexpr___TOP__tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__WZ__0;
        IData/*16:0*/ tb_ss__DOT__ss_mem_addr;
        IData/*19:0*/ tb_ss__DOT__tb_raddr;
        IData/*19:0*/ tb_ss__DOT__tb_waddr;
        IData/*31:0*/ tb_ss__DOT__vsync_prev;
        IData/*31:0*/ tb_ss__DOT__frames;
        IData/*31:0*/ tb_ss__DOT__eng_save_block__Vstatic__blk;
        IData/*31:0*/ tb_ss__DOT__eng_save_block__Vstatic__base;
        IData/*31:0*/ tb_ss__DOT__eng_save_block__Vstatic__b;
    };
    struct {
        IData/*31:0*/ tb_ss__DOT__eng_load_block__Vstatic__b;
        IData/*31:0*/ tb_ss__DOT__wait_frames__Vstatic__target;
        IData/*31:0*/ tb_ss__DOT__cyc;
        IData/*31:0*/ tb_ss__DOT__cepix_cnt;
        IData/*31:0*/ tb_ss__DOT__nvwrcnt;
        IData/*31:0*/ tb_ss__DOT__nvrstbcnt;
        IData/*16:0*/ tb_ss__DOT__lastwaddr;
        VlWide<7>/*211:0*/ tb_ss__DOT__sys__DOT__ss_dir;
        IData/*24:0*/ tb_ss__DOT__sys__DOT__ss_seq;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__pgout;
        IData/*24:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memin;
        IData/*24:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__memout;
        IData/*21:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey;
        IData/*19:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase;
        IData/*22:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase;
        IData/*22:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable;
        IData/*23:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_rdata;
        IData/*23:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__regs_wdata;
        IData/*23:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__addr;
        IData/*19:0*/ tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__w_modula;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memout;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__memin;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__dphase;
        IData/*17:0*/ tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf;
        VlWide<4>/*127:0*/ tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT____Vcellinp__Regs__DIR;
        IData/*16:0*/ tb_ss__DOT__sys__DOT__mix__DOT__clipped;
        IData/*18:0*/ tb_ss__DOT__eng__DOT__vram_bytes;
        IData/*18:0*/ tb_ss__DOT__eng__DOT__wram_bytes;
        IData/*19:0*/ tb_ss__DOT__eng__DOT__total_bytes;
        IData/*19:0*/ tb_ss__DOT__eng__DOT__chk_total;
        IData/*18:0*/ tb_ss__DOT__eng__DOT__chk_vram;
        IData/*18:0*/ tb_ss__DOT__eng__DOT__chk_wram;
        IData/*28:0*/ tb_ss__DOT__eng__DOT__wdog;
        IData/*26:0*/ tb_ss__DOT__eng__DOT__wait_cnt;
        IData/*16:0*/ tb_ss__DOT__eng__DOT__pend_addr;
        IData/*19:0*/ tb_ss__DOT__eng__DOT__mem_translate__Vstatic__off;
        VlWide<4>/*111:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        VlWide<4>/*111:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        IData/*21:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__aridx;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v0;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v1;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v2;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v3;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v0;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v1;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v2;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v3;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v4;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v5;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v4;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v5;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v6;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_raddr__v7;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v6;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v7;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v8;
        IData/*19:0*/ __VdlyVal__tb_ss__DOT__tb_waddr__v9;
        IData/*24:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
        IData/*23:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
        IData/*17:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
    };
    struct {
        IData/*31:0*/ __Vi;
        QData/*63:0*/ tb_ss__DOT__h_video;
        QData/*63:0*/ tb_ss__DOT__h_audio;
        QData/*63:0*/ tb_ss__DOT__frame_vh;
        QData/*63:0*/ tb_ss__DOT__frame_ah;
        QData/*35:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__slot_voice_data;
        QData/*35:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata;
        QData/*35:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_wdata;
        QData/*35:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp;
        QData/*35:0*/ tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__rom_data;
        QData/*63:0*/ tb_ss__DOT__eng__DOT__chk_flags;
        QData/*47:0*/ __VdfgRegularize_h6e95ff9d_0_20;
        QData/*35:0*/ __Vdly__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__user_voice_rdata;
        QData/*35:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v0;
        QData/*35:0*/ __VdlyVal__tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices__v1;
        VlUnpacked<CData/*7:0*/, 58880> tb_ss__DOT__imgA;
        VlUnpacked<CData/*7:0*/, 58880> tb_ss__DOT__imgA2;
        VlUnpacked<CData/*7:0*/, 58880> tb_ss__DOT__imgB2;
        VlUnpacked<QData/*63:0*/, 80> tb_ss__DOT__vhA;
        VlUnpacked<QData/*63:0*/, 80> tb_ss__DOT__ahA;
        VlUnpacked<QData/*63:0*/, 80> tb_ss__DOT__vhB;
        VlUnpacked<QData/*63:0*/, 80> tb_ss__DOT__ahB;
        VlUnpacked<SData/*9:0*/, 19> tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Mmem__DOT__data_array;
        VlUnpacked<SData/*9:0*/, 9> tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Fmem__DOT__data_array;
        VlUnpacked<IData/*24:0*/, 18> tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set;
        VlUnpacked<CData/*3:0*/, 9> tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__inst_cache;
        VlUnpacked<QData/*35:0*/, 38> tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__voices;
        VlUnpacked<IData/*23:0*/, 9> tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__u_register_memory__DOT__regs_array;
        VlUnpacked<IData/*17:0*/, 18> tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__MEM__DOT__phase_array;
        VlUnpacked<CData/*7:0*/, 8> tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsH;
        VlUnpacked<CData/*7:0*/, 8> tb_ss__DOT__sys__DOT__z80_inst__DOT__u0__DOT__Regs__DOT__RegsL;
        VlUnpacked<CData/*7:0*/, 16384> tb_ss__DOT__sys__DOT__boot_rom_inst__DOT__mem;
        VlUnpacked<CData/*7:0*/, 32768> tb_ss__DOT__nvram__DOT__mem;
        VlUnpacked<CData/*7:0*/, 32768> tb_ss__DOT__rom__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16384> tb_ss__DOT__wram__DOT__mem;
        VlUnpacked<CData/*0:0*/, 1024> __VdfgBinToOneHot_Tab_ha8957302_0_0;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbdcb3986__0;

    // INTERNAL VARIABLES
    Vtb_ss__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<SData/*8:0*/, 128> tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data = {{
        0x01ffU, 0x01e9U, 0x01d4U, 0x01c0U, 0x01adU, 0x019bU, 0x018aU, 0x0179U,
        0x0169U, 0x015aU, 0x014bU, 0x013dU, 0x0130U, 0x0123U, 0x0117U, 0x010bU,
        0x0100U, 0x00f5U, 0x00eaU, 0x00e0U, 0x00d7U, 0x00ceU, 0x00c5U, 0x00bdU,
        0x00b5U, 0x00adU, 0x00a6U, 0x009fU, 0x0098U, 0x0092U, 0x008bU, 0x0086U,
        0x0080U, 0x007aU, 0x0075U, 0x0070U, 0x006bU, 0x0067U, 0x0063U, 0x005eU,
        0x005aU, 0x0057U, 0x0053U, 0x004fU, 0x004cU, 0x0049U, 0x0046U, 0x0043U,
        0x0040U, 0x003dU, 0x003bU, 0x0038U, 0x0036U, 0x0033U, 0x0031U, 0x002fU,
        0x002dU, 0x002bU, 0x0029U, 0x0028U, 0x0026U, 0x0024U, 0x0023U, 0x0021U,
        0x0020U, 0x001eU, 0x001dU, 0x001cU, 0x001bU, 0x0019U, 0x0018U, 0x0017U,
        0x0016U, 0x0015U, 0x0014U, 0x0014U, 0x0013U, 0x0012U, 0x0011U, 0x0010U,
        0x0010U, 0x000fU, 0x000eU, 0x000eU, 0x000dU, 0x000dU, 0x000cU, 0x000bU,
        0x000bU, 0x000aU, 0x000aU, 0x000aU, 9U, 9U, 8U, 8U,
        8U, 7U, 7U, 7U, 6U, 6U, 6U, 5U,
        5U, 5U, 5U, 5U, 4U, 4U, 4U, 4U,
        4U, 3U, 3U, 3U, 3U, 3U, 3U, 3U,
        2U, 2U, 2U, 2U, 2U, 2U, 2U, 0U
    }};
    static constexpr VlUnpacked<CData/*6:0*/, 128> tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust = {{
        0U, 0U, 0U, 0U, 0U, 1U, 1U, 1U,
        1U, 1U, 2U, 2U, 2U, 2U, 3U, 3U,
        3U, 3U, 4U, 4U, 4U, 4U, 4U, 5U,
        5U, 5U, 6U, 6U, 6U, 6U, 7U, 7U,
        7U, 7U, 8U, 8U, 8U, 9U, 9U, 9U,
        9U, 0x0aU, 0x0aU, 0x0aU, 0x0bU, 0x0bU, 0x0bU, 0x0cU,
        0x0cU, 0x0cU, 0x0dU, 0x0dU, 0x0dU, 0x0eU, 0x0eU, 0x0eU,
        0x0fU, 0x0fU, 0x0fU, 0x10U, 0x10U, 0x11U, 0x11U, 0x11U,
        0x12U, 0x12U, 0x13U, 0x13U, 0x14U, 0x14U, 0x15U, 0x15U,
        0x15U, 0x16U, 0x16U, 0x17U, 0x17U, 0x18U, 0x18U, 0x19U,
        0x1aU, 0x1aU, 0x1bU, 0x1bU, 0x1cU, 0x1dU, 0x1dU, 0x1eU,
        0x1eU, 0x1fU, 0x20U, 0x21U, 0x21U, 0x22U, 0x23U, 0x24U,
        0x24U, 0x25U, 0x26U, 0x27U, 0x28U, 0x29U, 0x2aU, 0x2bU,
        0x2cU, 0x2dU, 0x2fU, 0x30U, 0x31U, 0x33U, 0x34U, 0x36U,
        0x38U, 0x39U, 0x3bU, 0x3dU, 0x40U, 0x42U, 0x45U, 0x48U,
        0x4bU, 0x50U, 0x54U, 0x5aU, 0x62U, 0x6cU, 0x75U, 0x7fU
    }};
    static constexpr VlUnpacked<CData/*5:0*/, 16> tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__kl_table = {{
        0U, 0x18U, 0x20U, 0x25U, 0x28U, 0x2bU, 0x2dU, 0x2fU,
        0x30U, 0x32U, 0x33U, 0x34U, 0x35U, 0x36U, 0x37U, 0x38U
    }};
    static constexpr VlUnpacked<QData/*35:0*/, 38> tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__ROM2413__DOT__base_voices = {{
        0ULL, 0ULL,
        0x0000000711e7d000ULL, 0x0000000610087817ULL,
        0x0000000131add823ULL, 0x000000041000f713ULL,
        0x000000013990f211ULL, 0x000000001000c423ULL,
        0x0000000310e7a870ULL, 0x0000000610006427ULL,
        0x0000000321e6e000ULL, 0x0000000210007628ULL,
        0x000000031165e000ULL, 0x0000000220007118ULL,
        0x0000000211d78210ULL, 0x0000000610008107ULL,
        0x0000000232d4a200ULL, 0x0000000210087207ULL,
        0x0000000611b66410ULL, 0x0000000610006517ULL,
        0x0000000410b88571ULL, 0x000000061008f707ULL,
        0x000000013831fa10ULL, 0x000000001008e404ULL,
        0x000000017247f822ULL, 0x0000000c1000f812ULL,
        0x0000000610c5c220ULL, 0x000000050000f542ULL,
        0x000000001553c903ULL, 0x0000000010009502ULL,
        0x000000061893f140ULL, 0x000000041000e413ULL,
        0x00000000118fdf6aULL, 0x000000001000f86dULL,
        0x000000001000c8a7ULL, 0x000000001000d848ULL,
        0x000000005000f859ULL, 0x000000001000aa55ULL
    }};
    static constexpr VlUnpacked<SData/*10:0*/, 128> tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__sin_data = {{
        0x07ffU, 0x0650U, 0x0551U, 0x04bcU, 0x0453U, 0x0401U, 0x03beU, 0x0385U,
        0x0355U, 0x0329U, 0x0303U, 0x02e0U, 0x02c0U, 0x02a3U, 0x0288U, 0x026fU,
        0x0258U, 0x0242U, 0x022dU, 0x021aU, 0x0207U, 0x01f6U, 0x01e5U, 0x01d5U,
        0x01c6U, 0x01b7U, 0x01a9U, 0x019cU, 0x018fU, 0x0183U, 0x0177U, 0x016bU,
        0x0160U, 0x0156U, 0x014bU, 0x0141U, 0x0138U, 0x012eU, 0x0125U, 0x011cU,
        0x0114U, 0x010bU, 0x0103U, 0x00fbU, 0x00f4U, 0x00ecU, 0x00e5U, 0x00deU,
        0x00d7U, 0x00d1U, 0x00caU, 0x00c4U, 0x00beU, 0x00b8U, 0x00b2U, 0x00acU,
        0x00a7U, 0x00a1U, 0x009cU, 0x0097U, 0x0092U, 0x008dU, 0x0088U, 0x0083U,
        0x007fU, 0x007aU, 0x0076U, 0x0072U, 0x006eU, 0x006aU, 0x0066U, 0x0062U,
        0x005eU, 0x005aU, 0x0057U, 0x0053U, 0x0050U, 0x004dU, 0x0049U, 0x0046U,
        0x0043U, 0x0040U, 0x003dU, 0x003bU, 0x0038U, 0x0035U, 0x0033U, 0x0030U,
        0x002eU, 0x002bU, 0x0029U, 0x0027U, 0x0025U, 0x0022U, 0x0020U, 0x001eU,
        0x001dU, 0x001bU, 0x0019U, 0x0017U, 0x0016U, 0x0014U, 0x0013U, 0x0011U,
        0x0010U, 0x000eU, 0x000dU, 0x000cU, 0x000bU, 0x000aU, 9U, 8U,
        7U, 6U, 5U, 4U, 3U, 3U, 2U, 2U,
        1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U
    }};
    static constexpr VlUnpacked<CData/*4:0*/, 16> tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__mltbl = {{
        1U, 2U, 4U, 6U, 8U, 0x0aU, 0x0cU, 0x0eU,
        0x10U, 0x12U, 0x14U, 0x14U, 0x18U, 0x18U, 0x1eU, 0x1eU
    }};

    // CONSTRUCTORS
    Vtb_ss___024root(Vtb_ss__Syms* symsp, const char* namep);
    ~Vtb_ss___024root();
    VL_UNCOPYABLE(Vtb_ss___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
