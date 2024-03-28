/*
 * Generated by Bluespec Compiler, version 2023.07-27-gf00d2058 (build f00d2058)
 * 
 * On Tue Mar 26 17:40:43 EDT 2024
 * 
 */

/* Generation options: */
#ifndef __mkCrossbarSwitch_h__
#define __mkCrossbarSwitch_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkCrossbarBuffer.h"


/* Class declaration for the mkCrossbarSwitch module */
class MOD_mkCrossbarSwitch : public Module {
 
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
  MOD_mkCrossbarBuffer INST_outBuffer_0;
  MOD_mkCrossbarBuffer INST_outBuffer_1;
  MOD_mkCrossbarBuffer INST_outBuffer_2;
  MOD_mkCrossbarBuffer INST_outBuffer_3;
  MOD_mkCrossbarBuffer INST_outBuffer_4;
 
 /* Constructor */
 public:
  MOD_mkCrossbarSwitch(tSimStateHdl simHdl, char const *name, Module *parent);
 
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
 
 /* Local definitions */
 private:
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  void METH_crossbarPorts_0_putFlit(tUInt64 ARG_crossbarPorts_0_putFlit_traverseFlit,
				    tUInt8 ARG_crossbarPorts_0_putFlit_destDirn);
  tUInt8 METH_RDY_crossbarPorts_0_putFlit();
  tUInt64 METH_crossbarPorts_0_getFlit();
  tUInt8 METH_RDY_crossbarPorts_0_getFlit();
  void METH_crossbarPorts_1_putFlit(tUInt64 ARG_crossbarPorts_1_putFlit_traverseFlit,
				    tUInt8 ARG_crossbarPorts_1_putFlit_destDirn);
  tUInt8 METH_RDY_crossbarPorts_1_putFlit();
  tUInt64 METH_crossbarPorts_1_getFlit();
  tUInt8 METH_RDY_crossbarPorts_1_getFlit();
  void METH_crossbarPorts_2_putFlit(tUInt64 ARG_crossbarPorts_2_putFlit_traverseFlit,
				    tUInt8 ARG_crossbarPorts_2_putFlit_destDirn);
  tUInt8 METH_RDY_crossbarPorts_2_putFlit();
  tUInt64 METH_crossbarPorts_2_getFlit();
  tUInt8 METH_RDY_crossbarPorts_2_getFlit();
  void METH_crossbarPorts_3_putFlit(tUInt64 ARG_crossbarPorts_3_putFlit_traverseFlit,
				    tUInt8 ARG_crossbarPorts_3_putFlit_destDirn);
  tUInt8 METH_RDY_crossbarPorts_3_putFlit();
  tUInt64 METH_crossbarPorts_3_getFlit();
  tUInt8 METH_RDY_crossbarPorts_3_getFlit();
  void METH_crossbarPorts_4_putFlit(tUInt64 ARG_crossbarPorts_4_putFlit_traverseFlit,
				    tUInt8 ARG_crossbarPorts_4_putFlit_destDirn);
  tUInt8 METH_RDY_crossbarPorts_4_putFlit();
  tUInt64 METH_crossbarPorts_4_getFlit();
  tUInt8 METH_RDY_crossbarPorts_4_getFlit();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkCrossbarSwitch &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkCrossbarSwitch &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkCrossbarSwitch &backing);
};

#endif /* ifndef __mkCrossbarSwitch_h__ */
