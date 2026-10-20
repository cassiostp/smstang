// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_opll.h for the primary calling header

#ifndef VERILATED_VTB_OPLL___024ROOT_H_
#define VERILATED_VTB_OPLL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_opll__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_opll___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_opll__DOT__xin;
        CData/*0:0*/ tb_opll__DOT__xena;
        CData/*0:0*/ tb_opll__DOT__ic_n;
        CData/*7:0*/ tb_opll__DOT__dut__DOT__opllptr;
        CData/*7:0*/ tb_opll__DOT__dut__DOT__oplldat;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__opllwr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__am;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__pm;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__wf;
        CData/*6:0*/ tb_opll__DOT__dut__DOT__tl;
        CData/*2:0*/ tb_opll__DOT__dut__DOT__fb;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__ar;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__dr;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__sl;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__rr;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__ml;
        CData/*2:0*/ tb_opll__DOT__dut__DOT__blk;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__rks;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__key;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__rhythm;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__noise;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__faddr;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__maddr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wr;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__fb_addr;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__mo_addr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_sign;
        CData/*5:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_weight;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__init_ch;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__unnamedblk1__DOT__init_ch;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__rslot;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__memwr;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__rm;
        CData/*1:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egstate;
        CData/*7:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_w;
        CData/*6:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d1;
        CData/*6:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ff_d2;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__unnamedblk1__DOT__init_slot;
        CData/*5:0*/ tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_addr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wr;
        CData/*5:0*/ tb_opll__DOT__dut__DOT__controller__DOT__user_voice_addr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__controller__DOT__regs_wr;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__controller__DOT__regs_addr;
        CData/*7:0*/ tb_opll__DOT__dut__DOT__controller__DOT__rflag;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kflag;
        CData/*7:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__tll;
        CData/*7:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__kll;
        CData/*2:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__fb_buf;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__wf_buf;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__extra_mode;
        CData/*5:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__vindex;
        CData/*5:0*/ tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr;
        CData/*1:0*/ tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rstate;
        CData/*5:0*/ tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__unnamedblk1__DOT__init_id;
        CData/*3:0*/ tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__unnamedblk1__DOT__init_state;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_sign;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_wf;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__memwr;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise14;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__noise17;
        CData/*4:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__unnamedblk1__DOT__init_slot;
        CData/*0:0*/ tb_opll__DOT__dut__DOT__temporalmixer__DOT__mute;
        CData/*6:0*/ tb_opll__DOT__dut__DOT__s8__DOT__ff_count;
    };
    struct {
        CData/*6:0*/ tb_opll__DOT__dut__DOT__s5__DOT__ff_count;
        CData/*6:0*/ tb_opll__DOT__dut__DOT__s2__DOT__ff_count;
        CData/*6:0*/ tb_opll__DOT__dut__DOT__s0__DOT__ff_count;
        CData/*5:0*/ __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_addr;
        CData/*6:0*/ __Vdly__tb_opll__DOT__dut__DOT__s5__DOT__ff_count;
        CData/*6:0*/ __Vdly__tb_opll__DOT__dut__DOT__s2__DOT__ff_count;
        CData/*6:0*/ __Vdly__tb_opll__DOT__dut__DOT__s0__DOT__ff_count;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__ic_n__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__cyc__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__first__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__ic_n__v1;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__ic_n__v2;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__cyc__v1;
        CData/*3:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v0;
        CData/*3:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
        CData/*4:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v0;
        CData/*4:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
        CData/*3:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0;
        CData/*3:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__inst_cache__v0;
        CData/*5:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0;
        CData/*5:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1;
        CData/*3:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v0;
        CData/*3:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
        CData/*4:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v0;
        CData/*4:0*/ __VdlyDim0__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
        CData/*0:0*/ __VdlySet__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_opll__DOT__ic_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_opll__DOT__xin__0;
        SData/*13:0*/ tb_opll__DOT__mixout;
        SData/*13:0*/ tb_opll__DOT__first;
        SData/*8:0*/ tb_opll__DOT__dut__DOT__fnum;
        SData/*12:0*/ tb_opll__DOT__dut__DOT__egout;
        SData/*13:0*/ tb_opll__DOT__dut__DOT__opout;
        SData/*9:0*/ tb_opll__DOT__dut__DOT__fdata;
        SData/*9:0*/ tb_opll__DOT__dut__DOT__mdata;
        SData/*10:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vL;
        SData/*10:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__AVERAGE__Vstatic__vR;
        SData/*9:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__li_data;
        SData/*9:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__fb_wdata;
        SData/*9:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__mo_wdata;
        SData/*9:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__mo_rdata;
        SData/*8:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data0;
        SData/*8:0*/ tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__ff_data1;
        SData/*12:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__ardata;
        SData/*14:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egtmp;
        SData/*12:0*/ tb_opll__DOT__dut__DOT__operator__DOT__ff_egout;
        SData/*13:0*/ tb_opll__DOT__dut__DOT__operator__DOT__unnamedblk1__DOT__opout_buf;
        SData/*10:0*/ tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data0;
        SData/*10:0*/ tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data1;
        SData/*8:0*/ tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_weight;
        SData/*13:0*/ tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__ff_data;
        SData/*12:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__pmcount;
        SData/*13:0*/ tb_opll__DOT__dut__DOT__temporalmixer__DOT__mix;
        SData/*13:0*/ __VdlyVal__tb_opll__DOT__first__v0;
    };
    struct {
        SData/*9:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array__v1;
        IData/*31:0*/ tb_opll__DOT__cyc;
        IData/*31:0*/ tb_opll__DOT__errors;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__pgout;
        IData/*24:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__memin;
        IData/*24:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__memout;
        IData/*21:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__lastkey;
        IData/*19:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__amphase;
        IData/*22:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__egphase;
        IData/*22:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__dphase;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__envelopegen__DOT__unnamedblk1__DOT__ntable;
        IData/*23:0*/ tb_opll__DOT__dut__DOT__controller__DOT__regs_rdata;
        IData/*23:0*/ tb_opll__DOT__dut__DOT__controller__DOT__regs_wdata;
        IData/*23:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__regs_tmp;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__operator__DOT__addr;
        IData/*19:0*/ tb_opll__DOT__dut__DOT__operator__DOT__w_modula;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__memout;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__memin;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__lastkey;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__dphase;
        IData/*17:0*/ tb_opll__DOT__dut__DOT__phasegen__DOT__unnamedblk1__DOT__pgout_buf;
        IData/*21:0*/ __Vdly__tb_opll__DOT__dut__DOT__envelopegen__DOT__aridx;
        IData/*31:0*/ __VdlyVal__tb_opll__DOT__cyc__v0;
        IData/*31:0*/ __VdlyVal__tb_opll__DOT__cyc__v1;
        IData/*24:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set__v1;
        IData/*23:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array__v1;
        IData/*17:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array__v1;
        IData/*31:0*/ __Vi;
        QData/*35:0*/ tb_opll__DOT__dut__DOT__controller__DOT__slot_voice_data;
        QData/*35:0*/ tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata;
        QData/*35:0*/ tb_opll__DOT__dut__DOT__controller__DOT__user_voice_wdata;
        QData/*35:0*/ tb_opll__DOT__dut__DOT__controller__DOT__unnamedblk1__DOT__user_voice_tmp;
        QData/*35:0*/ tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__rom_data;
        QData/*35:0*/ __Vdly__tb_opll__DOT__dut__DOT__controller__DOT__user_voice_rdata;
        QData/*35:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v0;
        QData/*35:0*/ __VdlyVal__tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices__v1;
        VlUnpacked<SData/*9:0*/, 19> tb_opll__DOT__dut__DOT__outputgen__DOT__Mmem__DOT__data_array;
        VlUnpacked<SData/*9:0*/, 9> tb_opll__DOT__dut__DOT__outputgen__DOT__Fmem__DOT__data_array;
        VlUnpacked<IData/*24:0*/, 18> tb_opll__DOT__dut__DOT__envelopegen__DOT__u_envelope_memory__DOT__egdata_set;
        VlUnpacked<CData/*3:0*/, 9> tb_opll__DOT__dut__DOT__controller__DOT__inst_cache;
        VlUnpacked<QData/*35:0*/, 38> tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__voices;
        VlUnpacked<IData/*23:0*/, 9> tb_opll__DOT__dut__DOT__controller__DOT__u_register_memory__DOT__regs_array;
        VlUnpacked<IData/*17:0*/, 18> tb_opll__DOT__dut__DOT__phasegen__DOT__MEM__DOT__phase_array;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9921853b__0;

    // INTERNAL VARIABLES
    Vtb_opll__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<SData/*8:0*/, 128> tb_opll__DOT__dut__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data = {{
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
    static constexpr VlUnpacked<CData/*6:0*/, 128> tb_opll__DOT__dut__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust = {{
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
    static constexpr VlUnpacked<CData/*5:0*/, 16> tb_opll__DOT__dut__DOT__controller__DOT__kl_table = {{
        0U, 0x18U, 0x20U, 0x25U, 0x28U, 0x2bU, 0x2dU, 0x2fU,
        0x30U, 0x32U, 0x33U, 0x34U, 0x35U, 0x36U, 0x37U, 0x38U
    }};
    static constexpr VlUnpacked<QData/*35:0*/, 38> tb_opll__DOT__dut__DOT__controller__DOT__vmem__DOT__ROM2413__DOT__base_voices = {{
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
    static constexpr VlUnpacked<SData/*10:0*/, 128> tb_opll__DOT__dut__DOT__operator__DOT__u_sine_table__DOT__sin_data = {{
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
    static constexpr VlUnpacked<CData/*4:0*/, 16> tb_opll__DOT__dut__DOT__phasegen__DOT__mltbl = {{
        1U, 2U, 4U, 6U, 8U, 0x0aU, 0x0cU, 0x0eU,
        0x10U, 0x12U, 0x14U, 0x14U, 0x18U, 0x18U, 0x1eU, 0x1eU
    }};

    // CONSTRUCTORS
    Vtb_opll___024root(Vtb_opll__Syms* symsp, const char* namep);
    ~Vtb_opll___024root();
    VL_UNCOPYABLE(Vtb_opll___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
