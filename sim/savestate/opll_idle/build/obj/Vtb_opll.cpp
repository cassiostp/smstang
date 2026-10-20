// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_opll__pch.h"

//============================================================
// Constructors

Vtb_opll::Vtb_opll(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_opll__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_opll::Vtb_opll(const char* _vcname__)
    : Vtb_opll(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_opll::~Vtb_opll() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_opll___024root___eval_debug_assertions(Vtb_opll___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_opll___024root___eval_static(Vtb_opll___024root* vlSelf);
void Vtb_opll___024root___eval_initial(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD bool Vtb_opll___024root___eval_stl(Vtb_opll___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb_opll___024root___eval_sample(Vtb_opll___024root* vlSelf);
bool Vtb_opll___024root___eval_ico(Vtb_opll___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb_opll___024root___eval_act(Vtb_opll___024root* vlSelf);
bool Vtb_opll___024root___eval_inact(Vtb_opll___024root* vlSelf);
bool Vtb_opll___024root___eval_nba(Vtb_opll___024root* vlSelf);
bool Vtb_opll___024root___eval_obs(Vtb_opll___024root* vlSelf);
bool Vtb_opll___024root___eval_react(Vtb_opll___024root* vlSelf);
void Vtb_opll___024root___eval_postponed(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_final(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__stl(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__ico(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__act(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__nba(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__obs(Vtb_opll___024root* vlSelf);
VL_ATTR_COLD void Vtb_opll___024root___eval_dump_triggers__react(Vtb_opll___024root* vlSelf);

void Vtb_opll::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_opll::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb_opll::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_opll___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb_opll::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb_opll::evalStatic() {
    Vtb_opll___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb_opll::evalInitial() {
    Vtb_opll___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb_opll::evalStl(bool firstIteration) {
    return Vtb_opll___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb_opll::evalSample() {
    Vtb_opll___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb_opll::evalIco(bool firstIteration) {
    return Vtb_opll___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb_opll::evalAct() {
    return Vtb_opll___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb_opll::evalInact() {
    return Vtb_opll___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb_opll::evalNba() {
    return Vtb_opll___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb_opll::evalObs() {
    return Vtb_opll___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb_opll::evalReact() {
    return Vtb_opll___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb_opll::evalPostponed() {
    Vtb_opll___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb_opll::evalFinal() {
    Vtb_opll___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_opll::dumpTriggersStl() {
    Vtb_opll___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_opll::dumpTriggersIco() {
    Vtb_opll___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_opll::dumpTriggersAct() {
    Vtb_opll___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_opll::dumpTriggersNba() {
    Vtb_opll___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_opll::dumpTriggersObs() {
    Vtb_opll___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb_opll::dumpTriggersReact() {
    Vtb_opll___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vtb_opll::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_opll::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_opll::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb_opll::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_opll::hierName() const { return vlSymsp->name(); }
const char* Vtb_opll::modelName() const { return "Vtb_opll"; }
unsigned Vtb_opll::threads() const { return 1; }
void Vtb_opll::prepareClone() const { contextp()->prepareClone(); }
void Vtb_opll::atClone() const {
    contextp()->threadPoolpOnClone();
}
