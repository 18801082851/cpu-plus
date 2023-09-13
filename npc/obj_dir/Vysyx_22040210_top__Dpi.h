// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_22040210_TOP__DPI_H_
#define VERILATED_VYSYX_22040210_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:212:30
    extern void bypassregfileaddr(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:211:30
    extern void bypassregfiledata(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:210:30
    extern void bypassregfilewe(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/cache/ysyx_22040210_dcache.v:265:30
    extern void checkdcachewrite(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:208:30
    extern void checkdpicdnpc(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:213:30
    extern void checkdpicinstvaild(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:209:30
    extern void checkdpicmempc(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:207:30
    extern void checkdpicpc(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/ysyx_22040210.v:183:30
    extern void checkdpicstop(const svLogicVecVal* dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_pipeline.v:214:30
    extern void checkdpicwbghr(long long dpic_o);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/soc/ysyx_22040210_data_rom.v:27:31
    extern void pmem_read(long long inst_raddr, long long* inst);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/soc/ysyx_22040210_data_rom.v:28:34
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/yud/Desktop/ysyx/npc/vsrc/pipeline/ysyx_22040210_regfile.v:30:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
