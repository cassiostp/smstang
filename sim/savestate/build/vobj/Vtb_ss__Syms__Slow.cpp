// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_ss__pch.h"

Vtb_ss__Syms::Vtb_ss__Syms(VerilatedContext* contextp, const char* namep, Vtb_ss* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_didInit{modelp->m_didInit}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(2221);
    // Setup sub module instances
    TOP__tb_ss__DOT__sys__DOT__vdp2_inst.ctor(this, "tb_ss.sys.vdp2_inst");
    TOP__tb_ss__DOT__sys__DOT__vdp_inst.ctor(this, "tb_ss.sys.vdp_inst");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_ss__DOT__sys__DOT__vdp2_inst = &TOP__tb_ss__DOT__sys__DOT__vdp2_inst;
    TOP.__PVT__tb_ss__DOT__sys__DOT__vdp_inst = &TOP__tb_ss__DOT__sys__DOT__vdp_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_ss__DOT__sys__DOT__vdp2_inst.__Vconfigure(true);
    TOP__tb_ss__DOT__sys__DOT__vdp_inst.__Vconfigure(false);
}

Vtb_ss__Syms::~Vtb_ss__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__tb_ss__DOT__sys__DOT__vdp_inst.dtor();
    TOP__tb_ss__DOT__sys__DOT__vdp2_inst.dtor();
}
