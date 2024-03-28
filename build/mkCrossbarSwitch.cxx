/*
 * Generated by Bluespec Compiler, version 2023.07-27-gf00d2058 (build f00d2058)
 * 
 * On Tue Mar 26 17:40:43 EDT 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkCrossbarSwitch.h"


/* Constructor */
MOD_mkCrossbarSwitch::MOD_mkCrossbarSwitch(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_outBuffer_0(simHdl, "outBuffer_0", this),
    INST_outBuffer_1(simHdl, "outBuffer_1", this),
    INST_outBuffer_2(simHdl, "outBuffer_2", this),
    INST_outBuffer_3(simHdl, "outBuffer_3", this),
    INST_outBuffer_4(simHdl, "outBuffer_4", this),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 5u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkCrossbarSwitch::init_symbols_0()
{
  init_symbol(&symbols[0u], "outBuffer_0", SYM_MODULE, &INST_outBuffer_0);
  init_symbol(&symbols[1u], "outBuffer_1", SYM_MODULE, &INST_outBuffer_1);
  init_symbol(&symbols[2u], "outBuffer_2", SYM_MODULE, &INST_outBuffer_2);
  init_symbol(&symbols[3u], "outBuffer_3", SYM_MODULE, &INST_outBuffer_3);
  init_symbol(&symbols[4u], "outBuffer_4", SYM_MODULE, &INST_outBuffer_4);
}


/* Rule actions */


/* Methods */

void MOD_mkCrossbarSwitch::METH_crossbarPorts_0_putFlit(tUInt64 ARG_crossbarPorts_0_putFlit_traverseFlit,
							tUInt8 ARG_crossbarPorts_0_putFlit_destDirn)
{
  tUInt8 DEF_crossbarPorts_0_putFlit_destDirn_EQ_0___d1;
  tUInt8 DEF_crossbarPorts_0_putFlit_destDirn_EQ_1___d2;
  tUInt8 DEF_crossbarPorts_0_putFlit_destDirn_EQ_2___d3;
  tUInt8 DEF_crossbarPorts_0_putFlit_destDirn_EQ_3___d4;
  tUInt8 DEF_crossbarPorts_0_putFlit_destDirn_EQ_4___d5;
  DEF_crossbarPorts_0_putFlit_destDirn_EQ_4___d5 = ARG_crossbarPorts_0_putFlit_destDirn == (tUInt8)4u;
  DEF_crossbarPorts_0_putFlit_destDirn_EQ_3___d4 = ARG_crossbarPorts_0_putFlit_destDirn == (tUInt8)3u;
  DEF_crossbarPorts_0_putFlit_destDirn_EQ_2___d3 = ARG_crossbarPorts_0_putFlit_destDirn == (tUInt8)2u;
  DEF_crossbarPorts_0_putFlit_destDirn_EQ_1___d2 = ARG_crossbarPorts_0_putFlit_destDirn == (tUInt8)1u;
  DEF_crossbarPorts_0_putFlit_destDirn_EQ_0___d1 = ARG_crossbarPorts_0_putFlit_destDirn == (tUInt8)0u;
  if (DEF_crossbarPorts_0_putFlit_destDirn_EQ_0___d1)
    INST_outBuffer_0.METH_bufferChannel_0_putFlit(ARG_crossbarPorts_0_putFlit_traverseFlit);
  if (DEF_crossbarPorts_0_putFlit_destDirn_EQ_1___d2)
    INST_outBuffer_1.METH_bufferChannel_0_putFlit(ARG_crossbarPorts_0_putFlit_traverseFlit);
  if (DEF_crossbarPorts_0_putFlit_destDirn_EQ_2___d3)
    INST_outBuffer_2.METH_bufferChannel_0_putFlit(ARG_crossbarPorts_0_putFlit_traverseFlit);
  if (DEF_crossbarPorts_0_putFlit_destDirn_EQ_3___d4)
    INST_outBuffer_3.METH_bufferChannel_0_putFlit(ARG_crossbarPorts_0_putFlit_traverseFlit);
  if (DEF_crossbarPorts_0_putFlit_destDirn_EQ_4___d5)
    INST_outBuffer_4.METH_bufferChannel_0_putFlit(ARG_crossbarPorts_0_putFlit_traverseFlit);
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_0_putFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_0_putFlit;
  tUInt8 PORT_RDY_crossbarPorts_0_putFlit;
  DEF_CAN_FIRE_crossbarPorts_0_putFlit = (tUInt8)1u;
  PORT_RDY_crossbarPorts_0_putFlit = DEF_CAN_FIRE_crossbarPorts_0_putFlit;
  return PORT_RDY_crossbarPorts_0_putFlit;
}

tUInt64 MOD_mkCrossbarSwitch::METH_crossbarPorts_0_getFlit()
{
  tUInt64 PORT_crossbarPorts_0_getFlit;
  tUInt64 DEF_AVMeth_outBuffer_0_getFlit;
  DEF_AVMeth_outBuffer_0_getFlit = INST_outBuffer_0.METH_getFlit();
  PORT_crossbarPorts_0_getFlit = DEF_AVMeth_outBuffer_0_getFlit;
  return PORT_crossbarPorts_0_getFlit;
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_0_getFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_0_getFlit;
  tUInt8 PORT_RDY_crossbarPorts_0_getFlit;
  DEF_CAN_FIRE_crossbarPorts_0_getFlit = INST_outBuffer_0.METH_RDY_getFlit();
  PORT_RDY_crossbarPorts_0_getFlit = DEF_CAN_FIRE_crossbarPorts_0_getFlit;
  return PORT_RDY_crossbarPorts_0_getFlit;
}

void MOD_mkCrossbarSwitch::METH_crossbarPorts_1_putFlit(tUInt64 ARG_crossbarPorts_1_putFlit_traverseFlit,
							tUInt8 ARG_crossbarPorts_1_putFlit_destDirn)
{
  tUInt8 DEF_crossbarPorts_1_putFlit_destDirn_EQ_0___d6;
  tUInt8 DEF_crossbarPorts_1_putFlit_destDirn_EQ_1___d7;
  tUInt8 DEF_crossbarPorts_1_putFlit_destDirn_EQ_2___d8;
  tUInt8 DEF_crossbarPorts_1_putFlit_destDirn_EQ_3___d9;
  tUInt8 DEF_crossbarPorts_1_putFlit_destDirn_EQ_4___d10;
  DEF_crossbarPorts_1_putFlit_destDirn_EQ_4___d10 = ARG_crossbarPorts_1_putFlit_destDirn == (tUInt8)4u;
  DEF_crossbarPorts_1_putFlit_destDirn_EQ_3___d9 = ARG_crossbarPorts_1_putFlit_destDirn == (tUInt8)3u;
  DEF_crossbarPorts_1_putFlit_destDirn_EQ_2___d8 = ARG_crossbarPorts_1_putFlit_destDirn == (tUInt8)2u;
  DEF_crossbarPorts_1_putFlit_destDirn_EQ_1___d7 = ARG_crossbarPorts_1_putFlit_destDirn == (tUInt8)1u;
  DEF_crossbarPorts_1_putFlit_destDirn_EQ_0___d6 = ARG_crossbarPorts_1_putFlit_destDirn == (tUInt8)0u;
  if (DEF_crossbarPorts_1_putFlit_destDirn_EQ_0___d6)
    INST_outBuffer_0.METH_bufferChannel_1_putFlit(ARG_crossbarPorts_1_putFlit_traverseFlit);
  if (DEF_crossbarPorts_1_putFlit_destDirn_EQ_1___d7)
    INST_outBuffer_1.METH_bufferChannel_1_putFlit(ARG_crossbarPorts_1_putFlit_traverseFlit);
  if (DEF_crossbarPorts_1_putFlit_destDirn_EQ_2___d8)
    INST_outBuffer_2.METH_bufferChannel_1_putFlit(ARG_crossbarPorts_1_putFlit_traverseFlit);
  if (DEF_crossbarPorts_1_putFlit_destDirn_EQ_3___d9)
    INST_outBuffer_3.METH_bufferChannel_1_putFlit(ARG_crossbarPorts_1_putFlit_traverseFlit);
  if (DEF_crossbarPorts_1_putFlit_destDirn_EQ_4___d10)
    INST_outBuffer_4.METH_bufferChannel_1_putFlit(ARG_crossbarPorts_1_putFlit_traverseFlit);
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_1_putFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_1_putFlit;
  tUInt8 PORT_RDY_crossbarPorts_1_putFlit;
  DEF_CAN_FIRE_crossbarPorts_1_putFlit = (tUInt8)1u;
  PORT_RDY_crossbarPorts_1_putFlit = DEF_CAN_FIRE_crossbarPorts_1_putFlit;
  return PORT_RDY_crossbarPorts_1_putFlit;
}

tUInt64 MOD_mkCrossbarSwitch::METH_crossbarPorts_1_getFlit()
{
  tUInt64 PORT_crossbarPorts_1_getFlit;
  tUInt64 DEF_AVMeth_outBuffer_1_getFlit;
  DEF_AVMeth_outBuffer_1_getFlit = INST_outBuffer_1.METH_getFlit();
  PORT_crossbarPorts_1_getFlit = DEF_AVMeth_outBuffer_1_getFlit;
  return PORT_crossbarPorts_1_getFlit;
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_1_getFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_1_getFlit;
  tUInt8 PORT_RDY_crossbarPorts_1_getFlit;
  DEF_CAN_FIRE_crossbarPorts_1_getFlit = INST_outBuffer_1.METH_RDY_getFlit();
  PORT_RDY_crossbarPorts_1_getFlit = DEF_CAN_FIRE_crossbarPorts_1_getFlit;
  return PORT_RDY_crossbarPorts_1_getFlit;
}

void MOD_mkCrossbarSwitch::METH_crossbarPorts_2_putFlit(tUInt64 ARG_crossbarPorts_2_putFlit_traverseFlit,
							tUInt8 ARG_crossbarPorts_2_putFlit_destDirn)
{
  tUInt8 DEF_crossbarPorts_2_putFlit_destDirn_EQ_0___d11;
  tUInt8 DEF_crossbarPorts_2_putFlit_destDirn_EQ_1___d12;
  tUInt8 DEF_crossbarPorts_2_putFlit_destDirn_EQ_2___d13;
  tUInt8 DEF_crossbarPorts_2_putFlit_destDirn_EQ_3___d14;
  tUInt8 DEF_crossbarPorts_2_putFlit_destDirn_EQ_4___d15;
  DEF_crossbarPorts_2_putFlit_destDirn_EQ_4___d15 = ARG_crossbarPorts_2_putFlit_destDirn == (tUInt8)4u;
  DEF_crossbarPorts_2_putFlit_destDirn_EQ_3___d14 = ARG_crossbarPorts_2_putFlit_destDirn == (tUInt8)3u;
  DEF_crossbarPorts_2_putFlit_destDirn_EQ_2___d13 = ARG_crossbarPorts_2_putFlit_destDirn == (tUInt8)2u;
  DEF_crossbarPorts_2_putFlit_destDirn_EQ_1___d12 = ARG_crossbarPorts_2_putFlit_destDirn == (tUInt8)1u;
  DEF_crossbarPorts_2_putFlit_destDirn_EQ_0___d11 = ARG_crossbarPorts_2_putFlit_destDirn == (tUInt8)0u;
  if (DEF_crossbarPorts_2_putFlit_destDirn_EQ_0___d11)
    INST_outBuffer_0.METH_bufferChannel_2_putFlit(ARG_crossbarPorts_2_putFlit_traverseFlit);
  if (DEF_crossbarPorts_2_putFlit_destDirn_EQ_1___d12)
    INST_outBuffer_1.METH_bufferChannel_2_putFlit(ARG_crossbarPorts_2_putFlit_traverseFlit);
  if (DEF_crossbarPorts_2_putFlit_destDirn_EQ_2___d13)
    INST_outBuffer_2.METH_bufferChannel_2_putFlit(ARG_crossbarPorts_2_putFlit_traverseFlit);
  if (DEF_crossbarPorts_2_putFlit_destDirn_EQ_3___d14)
    INST_outBuffer_3.METH_bufferChannel_2_putFlit(ARG_crossbarPorts_2_putFlit_traverseFlit);
  if (DEF_crossbarPorts_2_putFlit_destDirn_EQ_4___d15)
    INST_outBuffer_4.METH_bufferChannel_2_putFlit(ARG_crossbarPorts_2_putFlit_traverseFlit);
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_2_putFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_2_putFlit;
  tUInt8 PORT_RDY_crossbarPorts_2_putFlit;
  DEF_CAN_FIRE_crossbarPorts_2_putFlit = (tUInt8)1u;
  PORT_RDY_crossbarPorts_2_putFlit = DEF_CAN_FIRE_crossbarPorts_2_putFlit;
  return PORT_RDY_crossbarPorts_2_putFlit;
}

tUInt64 MOD_mkCrossbarSwitch::METH_crossbarPorts_2_getFlit()
{
  tUInt64 PORT_crossbarPorts_2_getFlit;
  tUInt64 DEF_AVMeth_outBuffer_2_getFlit;
  DEF_AVMeth_outBuffer_2_getFlit = INST_outBuffer_2.METH_getFlit();
  PORT_crossbarPorts_2_getFlit = DEF_AVMeth_outBuffer_2_getFlit;
  return PORT_crossbarPorts_2_getFlit;
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_2_getFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_2_getFlit;
  tUInt8 PORT_RDY_crossbarPorts_2_getFlit;
  DEF_CAN_FIRE_crossbarPorts_2_getFlit = INST_outBuffer_2.METH_RDY_getFlit();
  PORT_RDY_crossbarPorts_2_getFlit = DEF_CAN_FIRE_crossbarPorts_2_getFlit;
  return PORT_RDY_crossbarPorts_2_getFlit;
}

void MOD_mkCrossbarSwitch::METH_crossbarPorts_3_putFlit(tUInt64 ARG_crossbarPorts_3_putFlit_traverseFlit,
							tUInt8 ARG_crossbarPorts_3_putFlit_destDirn)
{
  tUInt8 DEF_crossbarPorts_3_putFlit_destDirn_EQ_0___d16;
  tUInt8 DEF_crossbarPorts_3_putFlit_destDirn_EQ_1___d17;
  tUInt8 DEF_crossbarPorts_3_putFlit_destDirn_EQ_2___d18;
  tUInt8 DEF_crossbarPorts_3_putFlit_destDirn_EQ_3___d19;
  tUInt8 DEF_crossbarPorts_3_putFlit_destDirn_EQ_4___d20;
  DEF_crossbarPorts_3_putFlit_destDirn_EQ_4___d20 = ARG_crossbarPorts_3_putFlit_destDirn == (tUInt8)4u;
  DEF_crossbarPorts_3_putFlit_destDirn_EQ_3___d19 = ARG_crossbarPorts_3_putFlit_destDirn == (tUInt8)3u;
  DEF_crossbarPorts_3_putFlit_destDirn_EQ_2___d18 = ARG_crossbarPorts_3_putFlit_destDirn == (tUInt8)2u;
  DEF_crossbarPorts_3_putFlit_destDirn_EQ_1___d17 = ARG_crossbarPorts_3_putFlit_destDirn == (tUInt8)1u;
  DEF_crossbarPorts_3_putFlit_destDirn_EQ_0___d16 = ARG_crossbarPorts_3_putFlit_destDirn == (tUInt8)0u;
  if (DEF_crossbarPorts_3_putFlit_destDirn_EQ_0___d16)
    INST_outBuffer_0.METH_bufferChannel_3_putFlit(ARG_crossbarPorts_3_putFlit_traverseFlit);
  if (DEF_crossbarPorts_3_putFlit_destDirn_EQ_1___d17)
    INST_outBuffer_1.METH_bufferChannel_3_putFlit(ARG_crossbarPorts_3_putFlit_traverseFlit);
  if (DEF_crossbarPorts_3_putFlit_destDirn_EQ_2___d18)
    INST_outBuffer_2.METH_bufferChannel_3_putFlit(ARG_crossbarPorts_3_putFlit_traverseFlit);
  if (DEF_crossbarPorts_3_putFlit_destDirn_EQ_3___d19)
    INST_outBuffer_3.METH_bufferChannel_3_putFlit(ARG_crossbarPorts_3_putFlit_traverseFlit);
  if (DEF_crossbarPorts_3_putFlit_destDirn_EQ_4___d20)
    INST_outBuffer_4.METH_bufferChannel_3_putFlit(ARG_crossbarPorts_3_putFlit_traverseFlit);
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_3_putFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_3_putFlit;
  tUInt8 PORT_RDY_crossbarPorts_3_putFlit;
  DEF_CAN_FIRE_crossbarPorts_3_putFlit = (tUInt8)1u;
  PORT_RDY_crossbarPorts_3_putFlit = DEF_CAN_FIRE_crossbarPorts_3_putFlit;
  return PORT_RDY_crossbarPorts_3_putFlit;
}

tUInt64 MOD_mkCrossbarSwitch::METH_crossbarPorts_3_getFlit()
{
  tUInt64 PORT_crossbarPorts_3_getFlit;
  tUInt64 DEF_AVMeth_outBuffer_3_getFlit;
  DEF_AVMeth_outBuffer_3_getFlit = INST_outBuffer_3.METH_getFlit();
  PORT_crossbarPorts_3_getFlit = DEF_AVMeth_outBuffer_3_getFlit;
  return PORT_crossbarPorts_3_getFlit;
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_3_getFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_3_getFlit;
  tUInt8 PORT_RDY_crossbarPorts_3_getFlit;
  DEF_CAN_FIRE_crossbarPorts_3_getFlit = INST_outBuffer_3.METH_RDY_getFlit();
  PORT_RDY_crossbarPorts_3_getFlit = DEF_CAN_FIRE_crossbarPorts_3_getFlit;
  return PORT_RDY_crossbarPorts_3_getFlit;
}

void MOD_mkCrossbarSwitch::METH_crossbarPorts_4_putFlit(tUInt64 ARG_crossbarPorts_4_putFlit_traverseFlit,
							tUInt8 ARG_crossbarPorts_4_putFlit_destDirn)
{
  tUInt8 DEF_crossbarPorts_4_putFlit_destDirn_EQ_0___d21;
  tUInt8 DEF_crossbarPorts_4_putFlit_destDirn_EQ_1___d22;
  tUInt8 DEF_crossbarPorts_4_putFlit_destDirn_EQ_2___d23;
  tUInt8 DEF_crossbarPorts_4_putFlit_destDirn_EQ_3___d24;
  tUInt8 DEF_crossbarPorts_4_putFlit_destDirn_EQ_4___d25;
  DEF_crossbarPorts_4_putFlit_destDirn_EQ_4___d25 = ARG_crossbarPorts_4_putFlit_destDirn == (tUInt8)4u;
  DEF_crossbarPorts_4_putFlit_destDirn_EQ_3___d24 = ARG_crossbarPorts_4_putFlit_destDirn == (tUInt8)3u;
  DEF_crossbarPorts_4_putFlit_destDirn_EQ_2___d23 = ARG_crossbarPorts_4_putFlit_destDirn == (tUInt8)2u;
  DEF_crossbarPorts_4_putFlit_destDirn_EQ_1___d22 = ARG_crossbarPorts_4_putFlit_destDirn == (tUInt8)1u;
  DEF_crossbarPorts_4_putFlit_destDirn_EQ_0___d21 = ARG_crossbarPorts_4_putFlit_destDirn == (tUInt8)0u;
  if (DEF_crossbarPorts_4_putFlit_destDirn_EQ_0___d21)
    INST_outBuffer_0.METH_bufferChannel_4_putFlit(ARG_crossbarPorts_4_putFlit_traverseFlit);
  if (DEF_crossbarPorts_4_putFlit_destDirn_EQ_1___d22)
    INST_outBuffer_1.METH_bufferChannel_4_putFlit(ARG_crossbarPorts_4_putFlit_traverseFlit);
  if (DEF_crossbarPorts_4_putFlit_destDirn_EQ_2___d23)
    INST_outBuffer_2.METH_bufferChannel_4_putFlit(ARG_crossbarPorts_4_putFlit_traverseFlit);
  if (DEF_crossbarPorts_4_putFlit_destDirn_EQ_3___d24)
    INST_outBuffer_3.METH_bufferChannel_4_putFlit(ARG_crossbarPorts_4_putFlit_traverseFlit);
  if (DEF_crossbarPorts_4_putFlit_destDirn_EQ_4___d25)
    INST_outBuffer_4.METH_bufferChannel_4_putFlit(ARG_crossbarPorts_4_putFlit_traverseFlit);
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_4_putFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_4_putFlit;
  tUInt8 PORT_RDY_crossbarPorts_4_putFlit;
  DEF_CAN_FIRE_crossbarPorts_4_putFlit = (tUInt8)1u;
  PORT_RDY_crossbarPorts_4_putFlit = DEF_CAN_FIRE_crossbarPorts_4_putFlit;
  return PORT_RDY_crossbarPorts_4_putFlit;
}

tUInt64 MOD_mkCrossbarSwitch::METH_crossbarPorts_4_getFlit()
{
  tUInt64 PORT_crossbarPorts_4_getFlit;
  tUInt64 DEF_AVMeth_outBuffer_4_getFlit;
  DEF_AVMeth_outBuffer_4_getFlit = INST_outBuffer_4.METH_getFlit();
  PORT_crossbarPorts_4_getFlit = DEF_AVMeth_outBuffer_4_getFlit;
  return PORT_crossbarPorts_4_getFlit;
}

tUInt8 MOD_mkCrossbarSwitch::METH_RDY_crossbarPorts_4_getFlit()
{
  tUInt8 DEF_CAN_FIRE_crossbarPorts_4_getFlit;
  tUInt8 PORT_RDY_crossbarPorts_4_getFlit;
  DEF_CAN_FIRE_crossbarPorts_4_getFlit = INST_outBuffer_4.METH_RDY_getFlit();
  PORT_RDY_crossbarPorts_4_getFlit = DEF_CAN_FIRE_crossbarPorts_4_getFlit;
  return PORT_RDY_crossbarPorts_4_getFlit;
}


/* Reset routines */

void MOD_mkCrossbarSwitch::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_outBuffer_4.reset_RST_N(ARG_rst_in);
  INST_outBuffer_3.reset_RST_N(ARG_rst_in);
  INST_outBuffer_2.reset_RST_N(ARG_rst_in);
  INST_outBuffer_1.reset_RST_N(ARG_rst_in);
  INST_outBuffer_0.reset_RST_N(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkCrossbarSwitch::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkCrossbarSwitch::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_outBuffer_0.dump_state(indent + 2u);
  INST_outBuffer_1.dump_state(indent + 2u);
  INST_outBuffer_2.dump_state(indent + 2u);
  INST_outBuffer_3.dump_state(indent + 2u);
  INST_outBuffer_4.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkCrossbarSwitch::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 1u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  if (levels != 1u)
  {
    unsigned int l = levels == 0u ? 0u : levels - 1u;
    num = INST_outBuffer_0.dump_VCD_defs(l);
    num = INST_outBuffer_1.dump_VCD_defs(l);
    num = INST_outBuffer_2.dump_VCD_defs(l);
    num = INST_outBuffer_3.dump_VCD_defs(l);
    num = INST_outBuffer_4.dump_VCD_defs(l);
  }
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkCrossbarSwitch::dump_VCD(tVCDDumpType dt,
				    unsigned int levels,
				    MOD_mkCrossbarSwitch &backing)
{
  vcd_defs(dt, backing);
  if (levels != 1u)
    vcd_submodules(dt, levels - 1u, backing);
}

void MOD_mkCrossbarSwitch::vcd_defs(tVCDDumpType dt, MOD_mkCrossbarSwitch &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
    }
}

void MOD_mkCrossbarSwitch::vcd_submodules(tVCDDumpType dt,
					  unsigned int levels,
					  MOD_mkCrossbarSwitch &backing)
{
  INST_outBuffer_0.dump_VCD(dt, levels, backing.INST_outBuffer_0);
  INST_outBuffer_1.dump_VCD(dt, levels, backing.INST_outBuffer_1);
  INST_outBuffer_2.dump_VCD(dt, levels, backing.INST_outBuffer_2);
  INST_outBuffer_3.dump_VCD(dt, levels, backing.INST_outBuffer_3);
  INST_outBuffer_4.dump_VCD(dt, levels, backing.INST_outBuffer_4);
}
