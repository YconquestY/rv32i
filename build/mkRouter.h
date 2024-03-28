/*
 * Generated by Bluespec Compiler, version 2023.07-27-gf00d2058 (build f00d2058)
 * 
 * On Tue Mar 26 17:40:43 EDT 2024
 * 
 */

/* Generation options: */
#ifndef __mkRouter_h__
#define __mkRouter_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCrossbarSwitch.h"
#include "mkOutPortArbiter.h"
#include "module_dir2Idx.h"


/* Class declaration for the mkRouter module */
class MOD_mkRouter : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_CReg<tUWide> INST_arb2cb_rv;
  MOD_Wire<tUInt8> INST_arbReqReg_0_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_0_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_0_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_0_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_0_register;
  MOD_Wire<tUInt8> INST_arbReqReg_1_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_1_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_1_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_1_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_1_register;
  MOD_Wire<tUInt8> INST_arbReqReg_2_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_2_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_2_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_2_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_2_register;
  MOD_Wire<tUInt8> INST_arbReqReg_3_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_3_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_3_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_3_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_3_register;
  MOD_Wire<tUInt8> INST_arbReqReg_4_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_4_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_4_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_4_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_4_register;
  MOD_Wire<tUInt8> INST_arbReqReg_5_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_5_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_5_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_5_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_5_register;
  MOD_Wire<tUInt8> INST_arbReqReg_6_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_6_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_6_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_6_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_6_register;
  MOD_Wire<tUInt8> INST_arbReqReg_7_port_0;
  MOD_Wire<tUInt8> INST_arbReqReg_7_port_1;
  MOD_Reg<tUInt8> INST_arbReqReg_7_readBeforeLaterWrites_0;
  MOD_Reg<tUInt8> INST_arbReqReg_7_readBeforeLaterWrites_1;
  MOD_Reg<tUInt8> INST_arbReqReg_7_register;
  MOD_CReg<tUInt8> INST_arbResBuf_rv;
  MOD_mkCrossbarSwitch INST_cbSwitch;
  MOD_CReg<tUWide> INST_flitsBuf_rv;
  MOD_Reg<tUInt8> INST_inited;
  MOD_CReg<tUInt64> INST_inputBuffer_0_rv;
  MOD_CReg<tUInt64> INST_inputBuffer_1_rv;
  MOD_CReg<tUInt64> INST_inputBuffer_2_rv;
  MOD_CReg<tUInt64> INST_inputBuffer_3_rv;
  MOD_CReg<tUInt64> INST_inputBuffer_4_rv;
  MOD_mkOutPortArbiter INST_outPortArbiter_0;
  MOD_mkOutPortArbiter INST_outPortArbiter_1;
  MOD_mkOutPortArbiter INST_outPortArbiter_2;
  MOD_mkOutPortArbiter INST_outPortArbiter_3;
  MOD_mkOutPortArbiter INST_outPortArbiter_4;
  MOD_CReg<tUInt64> INST_outputBuffer_0_rv;
  MOD_CReg<tUInt64> INST_outputBuffer_1_rv;
  MOD_CReg<tUInt64> INST_outputBuffer_2_rv;
  MOD_CReg<tUInt64> INST_outputBuffer_3_rv;
  MOD_CReg<tUInt64> INST_outputBuffer_4_rv;
  MOD_Reg<tUInt32> INST_tick_count;
  MOD_module_dir2Idx INST_instance_dir2Idx_4;
  MOD_module_dir2Idx INST_instance_dir2Idx_3;
  MOD_module_dir2Idx INST_instance_dir2Idx_2;
  MOD_module_dir2Idx INST_instance_dir2Idx_1;
  MOD_module_dir2Idx INST_instance_dir2Idx_0;
 
 /* Constructor */
 public:
  MOD_mkRouter(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt64 DEF_outputBuffer_4_rv_port1__read____d280;
  tUInt64 DEF_outputBuffer_3_rv_port1__read____d276;
  tUInt64 DEF_outputBuffer_2_rv_port1__read____d272;
  tUInt64 DEF_outputBuffer_1_rv_port1__read____d268;
  tUInt64 DEF_outputBuffer_0_rv_port1__read____d264;
  tUInt8 DEF_IF_arbResBuf_rv_port1__read__72_BIT_5_73_THEN__ETC___d188;
  tUInt8 DEF_IF_arbResBuf_rv_port1__read__72_BIT_5_73_THEN__ETC___d185;
  tUInt8 DEF_IF_arbResBuf_rv_port1__read__72_BIT_5_73_THEN__ETC___d182;
  tUInt8 DEF_IF_arbResBuf_rv_port1__read__72_BIT_5_73_THEN__ETC___d179;
  tUInt8 DEF_IF_arbResBuf_rv_port1__read__72_BIT_5_73_THEN__ETC___d176;
  tUInt64 DEF_inputBuffer_4_rv_port1__read____d108;
  tUInt64 DEF_inputBuffer_3_rv_port1__read____d100;
  tUInt64 DEF_inputBuffer_2_rv_port1__read____d92;
  tUInt64 DEF_inputBuffer_1_rv_port1__read____d84;
  tUInt64 DEF_inputBuffer_0_rv_port1__read____d76;
  tUInt8 DEF_arbResBuf_rv_port1__read____d172;
  tUInt8 DEF_inited___d66;
  tUInt8 DEF_x__h14948;
  tUInt8 DEF_inputBuffer_4_rv_port1__read__08_BIT_37___d109;
  tUInt8 DEF_inputBuffer_3_rv_port1__read__00_BIT_37___d101;
  tUInt8 DEF_inputBuffer_2_rv_port1__read__2_BIT_37___d93;
  tUInt8 DEF_inputBuffer_1_rv_port1__read__4_BIT_37___d85;
  tUInt8 DEF_inputBuffer_0_rv_port1__read__6_BIT_37___d77;
  tUInt8 DEF_IF_arbResBuf_rv_port1__read__72_BIT_5_73_THEN__ETC___d175;
 
 /* Local definitions */
 private:
  tUInt8 DEF_IF_inputBuffer_4_rv_port1__read__08_BIT_37_09__ETC___d111;
  tUInt8 DEF_IF_inputBuffer_3_rv_port1__read__00_BIT_37_01__ETC___d103;
  tUInt8 DEF_IF_inputBuffer_2_rv_port1__read__2_BIT_37_3_TH_ETC___d95;
  tUInt8 DEF_IF_inputBuffer_0_rv_port1__read__6_BIT_37_7_TH_ETC___d79;
  tUInt8 DEF_IF_inputBuffer_1_rv_port1__read__4_BIT_37_5_TH_ETC___d87;
  tUInt32 DEF_signed_4___d115;
  tUInt32 DEF_signed_3___d107;
  tUInt32 DEF_signed_2___d99;
  tUInt32 DEF_signed_1___d91;
  tUInt32 DEF_signed_0___d83;
  tUInt8 DEF_inputBuffer_4_rv_port1__read__08_BITS_36_TO_32___d110;
  tUInt8 DEF_inputBuffer_3_rv_port1__read__00_BITS_36_TO_32___d102;
  tUInt8 DEF_inputBuffer_2_rv_port1__read__2_BITS_36_TO_32___d94;
  tUInt8 DEF_inputBuffer_1_rv_port1__read__4_BITS_36_TO_32___d86;
  tUInt8 DEF_inputBuffer_0_rv_port1__read__6_BITS_36_TO_32___d78;
  tUInt32 DEF__read__h7839;
  tUInt64 DEF__0_CONCAT_DONTCARE___d209;
  tUInt8 DEF_NOT_IF_inputBuffer_4_rv_port1__read__08_BIT_37_ETC___d113;
  tUInt8 DEF_NOT_IF_inputBuffer_3_rv_port1__read__00_BIT_37_ETC___d105;
  tUInt8 DEF_NOT_IF_inputBuffer_2_rv_port1__read__2_BIT_37__ETC___d97;
  tUInt8 DEF_NOT_IF_inputBuffer_0_rv_port1__read__6_BIT_37__ETC___d81;
  tUInt8 DEF_NOT_IF_inputBuffer_1_rv_port1__read__4_BIT_37__ETC___d89;
 
 /* Rules */
 public:
  void RL_arbReqReg_0_canonicalize();
  void RL_arbReqReg_1_canonicalize();
  void RL_arbReqReg_2_canonicalize();
  void RL_arbReqReg_3_canonicalize();
  void RL_arbReqReg_4_canonicalize();
  void RL_arbReqReg_5_canonicalize();
  void RL_arbReqReg_6_canonicalize();
  void RL_arbReqReg_7_canonicalize();
  void RL_doInitialize();
  void RL_debug_tick();
  void RL_rl_Switch_Arbitration();
  void RL_rl_Switch_Traversal();
  void RL_rl_enqOutBufs();
  void RL_rl_enqOutBufs_1();
  void RL_rl_enqOutBufs_2();
  void RL_rl_enqOutBufs_3();
  void RL_rl_enqOutBufs_4();
 
 /* Methods */
 public:
  tUInt8 METH_isInited();
  tUInt8 METH_RDY_isInited();
  tUInt64 METH_dataLinks_0_getFlit();
  tUInt8 METH_RDY_dataLinks_0_getFlit();
  void METH_dataLinks_0_putFlit(tUInt64 ARG_dataLinks_0_putFlit_flit);
  tUInt8 METH_RDY_dataLinks_0_putFlit();
  tUInt64 METH_dataLinks_1_getFlit();
  tUInt8 METH_RDY_dataLinks_1_getFlit();
  void METH_dataLinks_1_putFlit(tUInt64 ARG_dataLinks_1_putFlit_flit);
  tUInt8 METH_RDY_dataLinks_1_putFlit();
  tUInt64 METH_dataLinks_2_getFlit();
  tUInt8 METH_RDY_dataLinks_2_getFlit();
  void METH_dataLinks_2_putFlit(tUInt64 ARG_dataLinks_2_putFlit_flit);
  tUInt8 METH_RDY_dataLinks_2_putFlit();
  tUInt64 METH_dataLinks_3_getFlit();
  tUInt8 METH_RDY_dataLinks_3_getFlit();
  void METH_dataLinks_3_putFlit(tUInt64 ARG_dataLinks_3_putFlit_flit);
  tUInt8 METH_RDY_dataLinks_3_putFlit();
  tUInt64 METH_dataLinks_4_getFlit();
  tUInt8 METH_RDY_dataLinks_4_getFlit();
  void METH_dataLinks_4_putFlit(tUInt64 ARG_dataLinks_4_putFlit_flit);
  tUInt8 METH_RDY_dataLinks_4_putFlit();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkRouter &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkRouter &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkRouter &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkRouter &backing);
};

#endif /* ifndef __mkRouter_h__ */
