// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ss.h for the primary calling header

#include "Vtb_ss__pch.h"

void Vtb_ss_vdp__M3f___ctor_var_reset(Vtb_ss_vdp__M3f* vlSelf);

Vtb_ss_vdp__M3f::Vtb_ss_vdp__M3f() = default;
Vtb_ss_vdp__M3f::~Vtb_ss_vdp__M3f() = default;

void Vtb_ss_vdp__M3f::ctor(Vtb_ss__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_ss_vdp__M3f___ctor_var_reset(this);
}

void Vtb_ss_vdp__M3f::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_ss_vdp__M3f::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
