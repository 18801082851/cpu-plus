$(shell find $(abspath ./vsrc)  -name "*.v" > ./filelist_all.f)
VSRC = $(shell cat ./filelist_all.f)
#V2F = $( if [ -f $(path) ]; then  vcd2fsdb npc_sim.vcd ./obj_dir/npc_sim.vcd; fi; )
path = ./obj_dir/npc_sim.vcd
$(echo $(VSRC))
CPPFLAGS =
ifeq ($(trace), 1)  
CPPFLAGS += -DTRACE_ON 
endif


##################################################################################
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" -DNVBOARD_ON 
LDFLAGS += -lSDL2 -lSDL2_image

DIFFSO =/home/yud/Desktop/ysyx/nemu/tools/spike-diff/build/riscv64-spike-so


#DIFFSO = /home/giftwen/workplace/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
# $(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
# 	@rm -rf $(OBJ_DIR)
# 	$(VERILATOR) $(VERILATOR_CFLAGS) \
# 		--top-module $(TOPNAME) $^ \
# 		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
# 		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# run: $(BIN)
# 	@$^




################################################################################
all: $(VSRC)
	verilator  -cc -exe --build +define+USE_RF_DEBUG+SNPS_FAST_SIM_FFV  main.cpp $^ -top-module top --trace -CFLAGS "$(CPPFLAGS)"  -Wno-WIDTH -Wno-CMPCONST -Wno-REDEFMACRO --timescale-override 1ns/1ps
	-./obj_dir/Vysyx_22040210_top  



run: $(VSRC)
	@$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@verilator   -cc -exe -LDFLAGS -ldl --build -Wall --trace -CFLAGS "$(CPPFLAGS) -DSIM_ON  "  ./csrc/main.cpp  $^ -top-module ysyx_22040210_top     -Wno-WIDTH  -Wno-UNUSED    -Wno-PINCONNECTEMPTY -Wno-UNDRIVEN  --timescale-override 1ns/1ps  
	./obj_dir/Vysyx_22040210_top -i $(IMG) -d $(DIFFSO) 


v2f: 
	@if [ -f $(path) ];  then cd ./obj_dir;  vcd2fsdb  ./npc_sim.vcd ; fi;

verdi: $(VSRC)
	verdi -f ./filelist_all.f -ssf ./obj_dir/npc_sim.vcd.fsdb &

clean:
	rm -rf ./obj_dir verdiLog novas.* vcd2fsdbLog $(BUILD_DIR)

default: all 

.PHONY: clean v2f all run 


