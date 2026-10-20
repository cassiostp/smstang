// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

// Parameter definitions for Vtb_ss___024root
constexpr VlUnpacked<SData/*8:0*/, 128> Vtb_ss___024root::tb_ss__DOT__sys__DOT__fm__DOT__outputgen__DOT__Ltbl__DOT__log2lin_data;
constexpr VlUnpacked<CData/*6:0*/, 128> Vtb_ss___024root::tb_ss__DOT__sys__DOT__fm__DOT__envelopegen__DOT__u_attack_table__DOT__ar_adjust;
constexpr VlUnpacked<CData/*5:0*/, 16> Vtb_ss___024root::tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__kl_table;
constexpr VlUnpacked<QData/*35:0*/, 38> Vtb_ss___024root::tb_ss__DOT__sys__DOT__fm__DOT__controller__DOT__vmem__DOT__ROM2413__DOT__base_voices;
constexpr VlUnpacked<SData/*10:0*/, 128> Vtb_ss___024root::tb_ss__DOT__sys__DOT__fm__DOT__operator__DOT__u_sine_table__DOT__sin_data;
constexpr VlUnpacked<CData/*4:0*/, 16> Vtb_ss___024root::tb_ss__DOT__sys__DOT__fm__DOT__phasegen__DOT__mltbl;


void Vtb_ss___024root___ctor_var_reset(Vtb_ss___024root* vlSelf);

Vtb_ss___024root::Vtb_ss___024root(Vtb_ss__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_ss___024root___ctor_var_reset(this);
}

void Vtb_ss___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ss___024root::~Vtb_ss___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
