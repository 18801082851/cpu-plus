`include "../npc/vsrc/include/ysyx_22040210_define.v"
 module ysyx_22040210_id (

    //Interface with IFstage
    input   wire    [`ysyx_22040210_InstAdderBus]   id_pc_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   id_dnpc_i,
    input   wire    [`ysyx_22040210_InstBus]        id_inst_i,

    //Interface with Regfile
    input   wire    [`ysyx_22040210_RegBUS]         id_reg1_rdata_i,
    input   wire    [`ysyx_22040210_RegBUS]         id_reg2_rdata_i,
    output  reg                                     id_reg1_re_o,
    output  reg                                     id_reg2_re_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     id_reg1_raddr_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     id_reg2_raddr_o,
    //Interface with CSR
    input   wire    [`ysyx_22040210_RegBUS]         id_csr1_rdata_i,
    input   wire    [`ysyx_22040210_RegBUS]         id_csr2_rdata_i,
    output  reg                                     id_csr1_re_o,
    output  reg                                     id_csr2_re_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     id_csr1_raddr_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     id_csr2_raddr_o,
    //Interface with CtrlBlock
    output  reg                                     id_stall_idreq_o,
    //Interface with EXstage
    output  reg     [`ysyx_22040210_InstAdderBus]   id_pc_o, 
    output  reg     [`ysyx_22040210_InstAdderBus]   id_dnpc_o,  
    output  reg                                     id_dpicstop_o,                                 
    output  reg     [`ysyx_22040210_AluOpBus]       id_aluop_o,
    output  reg     [`ysyx_22040210_AluSelBus]      id_alusel_o,
    output  reg     [`ysyx_22040210_RegBUS]         id_op1_wdata_o,
    output  reg     [`ysyx_22040210_RegBUS]         id_op2_wdata_o,
    output  reg     [`ysyx_22040210_RegBUS]         id_op3_wdata_o,
    output  reg     [`ysyx_22040210_RegBUS]         id_csrop1_wdata_o,
    output  reg     [`ysyx_22040210_RegBUS]         id_csrop2_wdata_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     id_reg_waddr_o,
    output  reg                                     id_we_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     id_csrreg_waddr_o,
    output  reg                                     id_csr1we_o,
    output  reg                                     id_instvalid_o,
    input   wire    [`ysyx_22040210_AluSelBus]      id_ex_alusel_i,     //fix data harzard
    input   wire    [`ysyx_22040210_RegAddrBus]     id_ex_reg_waddr_i,  //fix data harzard
    input   wire                                    id_ex_we_i,         //fix data harzard
    input   wire    [`ysyx_22040210_RegBUS]         id_ex_wdata_i,      //fix data harzard
    input   wire    [`ysyx_22040210_RegAddrBus]     id_ex_csr_waddr_i,
    input   wire                                    id_ex_csrwe_i,
    input   wire    [`ysyx_22040210_RegBUS]         id_ex_csrwdata_i,

    //Interface with Memstage
    input   wire    [`ysyx_22040210_RegAddrBus]     id_mem_reg_waddr_i, //fix data harzard
    input   wire                                    id_mem_we_i,        //fix data harzard
    input   wire    [`ysyx_22040210_RegBUS]         id_mem_wdata_i,      //fix data harzard
    input   wire    [`ysyx_22040210_RegAddrBus]     id_mem_csr_waddr_i,
    input   wire                                    id_mem_csrwe_i,
    input   wire    [`ysyx_22040210_RegBUS]         id_mem_csrwdata_i
 );
    


    wire[6:0] opcode    =       id_inst_i[6:0];
    wire[2:0] funct3    =       id_inst_i[14:12];
    wire[6:0] funct6    =       id_inst_i[31:26];
    wire[6:0] funct7    =       id_inst_i[31:25];
    wire[11:0] funct12   =       id_inst_i[31:20];
    wire[11:0] csr   =        id_inst_i[31:20];
    wire[4:0] rd        =       id_inst_i[11:7];
    wire[4:0] zimm      =       id_inst_i[19:15];
    wire[4:0] rs1       =       id_inst_i[19:15];
    wire[4:0] rs2       =       id_inst_i[24:20];
    wire[5:0] shamt     =       id_inst_i[25:20];
    wire[`ysyx_22040210_RegBUS]	id_Simm       =   {{52{id_inst_i[31]}}, id_inst_i[31:25], id_inst_i[11:7]};
    wire[`ysyx_22040210_RegBUS]	id_Bimm       =   {{52{id_inst_i[31]}}, id_inst_i[7], id_inst_i[30:25], id_inst_i[11:8], 1'b0};
    wire[`ysyx_22040210_RegBUS]	id_JALimm     =   {{44{id_inst_i[31]}}, id_inst_i[19:12], id_inst_i[20], id_inst_i[30:21], 1'b0};
    wire[`ysyx_22040210_RegBUS]	id_JALRimm    =   {{52{id_inst_i[31]}}, id_inst_i[31:20]};
    reg [`ysyx_22040210_RegBUS]	id_imm;

    wire id_preinstisload;
    assign id_preinstisload = (id_ex_alusel_i==`ysyx_22040210_AluSelBusNum'd3);

    always @(*) begin
        if((id_preinstisload==1'b1)&&((id_ex_reg_waddr_i==id_reg1_raddr_o)||(id_ex_reg_waddr_i==id_reg2_raddr_o))&&(id_reg1_re_o == `ysyx_22040210_ReadEnable)&&(id_ex_we_i == `ysyx_22040210_WriteEnable)) begin
            id_stall_idreq_o = `ysyx_22040210_StallEnable;
        end else begin
            id_stall_idreq_o = `ysyx_22040210_StallDisable;
        end

    end

    always @(*) begin
        id_pc_o             =   id_pc_i;
        id_dnpc_o           =   id_dnpc_i;
        if (opcode==`ysyx_22040210_INST_TYPE_S) begin
            id_op3_wdata_o      =   id_Simm;
        end else begin
            id_op3_wdata_o      =   id_Bimm;
        end
        
    end

    always @(*) begin
        id_aluop_o          =       `ysyx_22040210_ALU_NOP_OP;
        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
        id_reg_waddr_o      =       `ysyx_22040210_NOP_REG_Addr;
        id_we_o             =       `ysyx_22040210_WriteDisable;
        id_instvalid_o      =       `ysyx_22040210_InstnVaild;
        id_reg1_re_o        =       `ysyx_22040210_ReadDisable;
        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
        id_reg1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
        id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
        id_imm              =       `ysyx_22040210_ZeroWord;
        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
        
        id_csrreg_waddr_o   =       `ysyx_22040210_NOP_REG_Addr;
        id_csr1we_o         =       `ysyx_22040210_WriteDisable;
        id_csr1_re_o        =       `ysyx_22040210_ReadDisable;
        id_csr2_re_o        =       `ysyx_22040210_ReadDisable;
        id_csr1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
        id_csr2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr ;      
        case(opcode)
            `ysyx_22040210_INST_Fence   : begin
                if(id_inst_i == 32'b00000000000000000001000000001111)begin//fence.i
                        id_aluop_o          =       `ysyx_22040210_Fencei_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_reg_waddr_o      =       `ysyx_22040210_NOP_REG_Addr;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_instvalid_o      =       `ysyx_22040210_InstValid;
                        id_reg1_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                        id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                end 
            end
            `ysyx_22040210_INST_TYPE_ILD: begin
                case(funct3) 
                    `ysyx_22040210_INST_LB: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LB_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_LH: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LH_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    `ysyx_22040210_INST_LW: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LW_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    `ysyx_22040210_INST_LD: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LD_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    `ysyx_22040210_INST_LBU: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LBU_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    `ysyx_22040210_INST_LHU: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LHU_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                    
                    end
                    `ysyx_22040210_INST_LWU: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_LWU_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOAD_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                    
                    end
                    default:begin
                    end
                endcase
            end
            `ysyx_22040210_INST_TYPE_S: begin
                case(funct3) 
                    `ysyx_22040210_INST_SB: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_SB_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_STORE_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       id_Simm;
                        id_instvalid_o        =     `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_SH: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_SH_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_STORE_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       id_Simm;
                        id_instvalid_o        =     `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    `ysyx_22040210_INST_SW: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_SW_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_STORE_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       id_Simm;
                        id_instvalid_o        =     `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    `ysyx_22040210_INST_SD: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_SD_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_STORE_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       id_Simm;
                        id_instvalid_o        =     `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                        
                    end
                    default:begin
                    end
                endcase
            end
            `ysyx_22040210_INST_TYPE_I: begin
                case(funct3) 
                    `ysyx_22040210_INST_ADDI: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_ADD_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_XORI: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_XOR_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_ORI : begin
                        id_aluop_o          =       `ysyx_22040210_ALU_OR_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_ANDI: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_AND_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_SLTI: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_COMP_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_SLTIU: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_COMPU_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_SLLIFUN3:begin
                        case(funct6)
                            `ysyx_22040210_INST_SLLI:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SLL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        
                        endcase
                    end
                    `ysyx_22040210_INST_SRLIFUN3:begin
                        case(funct6)
                            `ysyx_22040210_INST_SRLI:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_SRAI:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    
                    default:begin
                    end   
                endcase
            end
            `ysyx_22040210_INST_TYPE_I64:begin
                case(funct3) 
                    `ysyx_22040210_INST_ADDIW: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_ADD_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                        id_we_o             =       `ysyx_22040210_WriteEnable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       {{52{id_inst_i[31]}}, id_inst_i[31:20]};
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_SLLIWFUN3:begin
                        case(funct6)
                            `ysyx_22040210_INST_SLLIW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SLLW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            default:begin
                            end
                        endcase
                    end
                    `ysyx_22040210_INST_SRLIWFUN3:begin
                        case(funct6)
                            `ysyx_22040210_INST_SRLIW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRLW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_SRAIW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRAW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       shamt;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            default:begin
                            end
                        endcase
                    end
                    default:begin
                    end   
                endcase
            end
            `ysyx_22040210_INST_TYPE_R  : begin
                case (funct3)
                    `ysyx_22040210_INST_ADDFUN3: begin
                        case(funct7)
                            `ysyx_22040210_INST_ADD:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_ADD_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_SUB:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SUB_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//MUL
                                id_aluop_o          =       `ysyx_22040210_ALU_MUL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_ANDFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_AND:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_AND_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//REMU
                                id_aluop_o          =       `ysyx_22040210_ALU_REMU_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_ORFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_OR:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_OR_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//REM
                                id_aluop_o          =       `ysyx_22040210_ALU_REM_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_XORFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_XOR:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_XOR_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//DIV
                                id_aluop_o          =       `ysyx_22040210_ALU_DIV_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_SLTFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_SLT:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_COMP_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//MULHSU
                                id_aluop_o          =       `ysyx_22040210_ALU_MULHSU_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_SLTUFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_SLTU:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_COMPU_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//MULHU
                                id_aluop_o          =       `ysyx_22040210_ALU_MULHU_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_SLLFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_SLL:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SLL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                             `ysyx_22040210_INST_MDU:begin//MULH
                                id_aluop_o          =       `ysyx_22040210_ALU_MULH_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_SRAFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_SRA:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_SRL:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//DIVU
                                id_aluop_o          =       `ysyx_22040210_ALU_DIVU_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    // `ysyx_22040210_INST_MULFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // `ysyx_22040210_INST_MULHFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // `ysyx_22040210_INST_MULHSUFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // `ysyx_22040210_INST_MULHUFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // `ysyx_22040210_INST_DIVFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // `ysyx_22040210_INST_DIVUFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // `ysyx_22040210_INST_REMFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    // default: begin
                    // end
                    // `ysyx_22040210_INST_REMUFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SRA_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_LOGIC_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                endcase
            end
            `ysyx_22040210_INST_TYPE_R64 : begin
                case (funct3)
                    `ysyx_22040210_INST_ADDWFUN3: begin
                        case(funct7)
                            `ysyx_22040210_INST_ADDW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_ADD_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_SUBW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SUB_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//MULW
                                id_aluop_o          =       `ysyx_22040210_ALU_MUL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_SLLWFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_SLLW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SLLW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_SRAWFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_SRAW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRAW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_SRLW:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_SRLW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                            `ysyx_22040210_INST_MDU:begin//DIVUW
                                id_aluop_o          =       `ysyx_22040210_ALU_DIVUW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    // `ysyx_22040210_INST_MULWFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SLLW_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o      =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    `ysyx_22040210_INST_DIVWFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_MDU:begin//DIVW
                                id_aluop_o          =       `ysyx_22040210_ALU_DIVW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    // `ysyx_22040210_INST_DIVUWFUN3:begin
                    //     case(funct7)
                    //         `ysyx_22040210_INST_MDU:begin
                    //             id_aluop_o          =       `ysyx_22040210_ALU_SLLW_OP;
                    //             id_alusel_o         =       `ysyx_22040210_ALU_64LOGICW_SEL;
                    //             id_we_o             =       `ysyx_22040210_WriteEnable;
                    //             id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                    //             id_reg_waddr_o      =       rd;
                    //             id_reg1_raddr_o     =       rs1;
                    //             id_reg2_raddr_o     =       rs2;
                    //             id_imm              =       `ysyx_22040210_ZeroWord;
                    //             id_instvalid_o        =       `ysyx_22040210_InstValid;
                    //             id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    //         end
                    //     default:begin
                    //     end
                    //     endcase
                    // end
                    `ysyx_22040210_INST_REMWFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_MDU:begin//REMW
                                id_aluop_o          =       `ysyx_22040210_ALU_REMW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    `ysyx_22040210_INST_REMUWFUN3:begin
                        case(funct7)
                            `ysyx_22040210_INST_MDU:begin//REMUW
                                id_aluop_o          =       `ysyx_22040210_ALU_REMUW_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_64W_SEL;
                                id_we_o             =       `ysyx_22040210_WriteEnable;
                                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                                id_reg_waddr_o      =       rd;
                                id_reg1_raddr_o     =       rs1;
                                id_reg2_raddr_o     =       rs2;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                            end
                        default:begin
                        end
                        endcase
                    end
                    default: begin
                    end
                endcase
            end
            `ysyx_22040210_INST_TYPE_B : begin
                case (funct3)
                    `ysyx_22040210_INST_BEQ: begin
                        id_aluop_o          =       `ysyx_22040210_ALU_BEQ_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_BNE:begin
                        id_aluop_o          =       `ysyx_22040210_ALU_BNE_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_BLT:begin
                        id_aluop_o          =       `ysyx_22040210_ALU_BLT_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_BGE:begin
                        id_aluop_o          =       `ysyx_22040210_ALU_BGE_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_BLTU:begin
                        id_aluop_o          =       `ysyx_22040210_ALU_BLTU_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    `ysyx_22040210_INST_BGEU:begin
                        id_aluop_o          =       `ysyx_22040210_ALU_BGEU_OP;
                        id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                        id_we_o             =       `ysyx_22040210_WriteDisable;
                        id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg2_re_o        =       `ysyx_22040210_ReadEnable;
                        id_reg_waddr_o      =       rd;
                        id_reg1_raddr_o     =       rs1;
                        id_reg2_raddr_o     =       rs2;
                        id_imm              =       `ysyx_22040210_ZeroWord;
                        id_instvalid_o        =       `ysyx_22040210_InstValid;
                        id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                    end
                    default: begin
                    end
                endcase
            end
            `ysyx_22040210_INST_JAL   : begin//xxx
                id_aluop_o          =       `ysyx_22040210_ALU_JAL_OP;
                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22040210_WriteEnable;
                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       rs1;//pc?
                id_reg2_raddr_o     =       rs2;
                id_imm              =       id_JALimm;
                id_instvalid_o        =       `ysyx_22040210_InstValid;
                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP; 
            end
            `ysyx_22040210_INST_JALR   : begin//xxx
                if(funct3==`ysyx_22040210_INST_JALRFUN3)begin
                    id_aluop_o          =       `ysyx_22040210_ALU_JALR_OP;
                    id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                    id_we_o             =       `ysyx_22040210_WriteEnable;
                    id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                    id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                    id_reg_waddr_o      =       rd;
                    id_reg1_raddr_o     =       rs1;//pc?
                    id_reg2_raddr_o     =       rs2;
                    id_imm              =       id_JALRimm;
                    id_instvalid_o        =       `ysyx_22040210_InstValid;
                    id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;
                end
            end
            `ysyx_22040210_INST_AUIPC   : begin//xxx
                id_aluop_o          =       `ysyx_22040210_ALU_AUIPC_OP;
                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22040210_WriteEnable;
                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       rs1;//pc?
                id_reg2_raddr_o     =       rs2;
                id_imm              =       {{44{id_inst_i[31]}}, id_inst_i[31:12]}<<4'd12;
                id_instvalid_o        =       `ysyx_22040210_InstValid;
                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP; 
            end
            `ysyx_22040210_INST_LUI :   begin
                id_aluop_o          =       `ysyx_22040210_ALU_LUI_OP;
                id_alusel_o         =       `ysyx_22040210_ALU_ARITHMETIC_SEL;
                id_we_o             =       `ysyx_22040210_WriteEnable;
                id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                id_reg_waddr_o      =       rd;
                id_reg1_raddr_o     =       `ysyx_22040210_RegAddrBusNum'b0;//gpr0
                id_reg2_raddr_o     =       rs2;
                id_imm              =       {{44{id_inst_i[31]}}, id_inst_i[31:12]}<<4'd12;
                id_instvalid_o        =       `ysyx_22040210_InstValid;
                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;                
            end
            `ysyx_22040210_INST_CSR: begin
                case(funct3)
                    `ysyx_22040210_INST_ENVIRONMENT: begin
                        case(funct12)
                            `ysyx_22040210_INST_EBREAK:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_NOP_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_NOP_SEL;
                                id_reg_waddr_o      =       `ysyx_22040210_NOP_REG_Addr;
                                id_we_o             =       `ysyx_22040210_WriteDisable;
                                id_instvalid_o        =       `ysyx_22040210_InstValid;
                                id_reg1_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                                id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_dpicstop_o       =       `ysyx_22040210_DPICSTOP;
                            end
                            `ysyx_22040210_INST_ECALL:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_ECALL_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_CSR_SEL;
                                id_reg_waddr_o      =       `ysyx_22040210_NOP_REG_Addr;
                                id_we_o             =       `ysyx_22040210_WriteDisable;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_reg1_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                                id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;

                                id_csrreg_waddr_o   =       `ysyx_22040210_ECALL;
                                id_csr1we_o          =      `ysyx_22040210_WriteEnable;
                                id_csr1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_csr2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_csr1_raddr_o     =       `ysyx_22040210_MTVEC;
                                id_csr2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            end
                            `ysyx_22040210_INST_MRET:begin
                                id_aluop_o          =       `ysyx_22040210_ALU_MRET_OP;
                                id_alusel_o         =       `ysyx_22040210_ALU_CSR_SEL;
                                id_reg_waddr_o      =       `ysyx_22040210_NOP_REG_Addr;
                                id_we_o             =       `ysyx_22040210_WriteDisable;
                                id_instvalid_o      =       `ysyx_22040210_InstValid;
                                id_reg1_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_reg1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                                id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                                id_imm              =       `ysyx_22040210_ZeroWord;
                                id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;

                                id_csrreg_waddr_o   =       `ysyx_22040210_NOP_REG_Addr;
                                id_csr1we_o          =       `ysyx_22040210_WriteDisable;
                                id_csr1_re_o        =       `ysyx_22040210_ReadEnable;
                                id_csr2_re_o        =       `ysyx_22040210_ReadDisable;
                                id_csr1_raddr_o     =       `ysyx_22040210_MEPC;
                                id_csr2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            end
                            
                            default:begin
                            end
                        endcase
                    end
                    `ysyx_22040210_INST_CSRRC:begin
                            id_aluop_o          =       `ysyx_22040210_ALU_CSRRC_OP;
                            id_alusel_o         =       `ysyx_22040210_ALU_CSR_SEL;
                            id_reg_waddr_o      =       rd;
                            id_we_o             =       `ysyx_22040210_WriteEnable;
                            id_instvalid_o      =       `ysyx_22040210_InstValid;
                            id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                            id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                            id_reg1_raddr_o     =       rs1;
                            id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            id_imm              =       `ysyx_22040210_ZeroWord;
                            id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;

                            id_csrreg_waddr_o   =       csr;
                            id_csr1we_o          =       `ysyx_22040210_WriteEnable;
                            id_csr1_re_o        =       `ysyx_22040210_ReadDisable;
                            id_csr2_re_o        =       `ysyx_22040210_ReadEnable;
                            id_csr1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            id_csr2_raddr_o     =       csr;
                        end
                    `ysyx_22040210_INST_CSRRS:begin
                            id_aluop_o          =       `ysyx_22040210_ALU_CSRRS_OP;
                            id_alusel_o         =       `ysyx_22040210_ALU_CSR_SEL;
                            id_reg_waddr_o      =       rd;
                            id_we_o             =       `ysyx_22040210_WriteEnable;
                            id_instvalid_o      =       `ysyx_22040210_InstValid;
                            id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                            id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                            id_reg1_raddr_o     =       rs1;
                            id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            id_imm              =       `ysyx_22040210_ZeroWord;
                            id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;

                            id_csrreg_waddr_o   =       csr;
                            id_csr1we_o          =       `ysyx_22040210_WriteEnable;
                            id_csr1_re_o        =       `ysyx_22040210_ReadDisable;
                            id_csr2_re_o        =       `ysyx_22040210_ReadEnable;
                            id_csr1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            id_csr2_raddr_o     =       csr;
                        end
                    `ysyx_22040210_INST_CSRRW:begin
                            id_aluop_o          =       `ysyx_22040210_ALU_CSRRW_OP;
                            id_alusel_o         =       `ysyx_22040210_ALU_CSR_SEL;
                            id_reg_waddr_o      =       rd;
                            id_we_o             =       `ysyx_22040210_WriteEnable;
                            id_instvalid_o      =       `ysyx_22040210_InstValid;
                            id_reg1_re_o        =       `ysyx_22040210_ReadEnable;
                            id_reg2_re_o        =       `ysyx_22040210_ReadDisable;
                            id_reg1_raddr_o     =       rs1;
                            id_reg2_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            id_imm              =       `ysyx_22040210_ZeroWord;
                            id_dpicstop_o       =       `ysyx_22040210_DPICNOSTOP;

                            id_csrreg_waddr_o   =       csr;
                            id_csr1we_o          =       `ysyx_22040210_WriteEnable;
                            id_csr1_re_o        =       `ysyx_22040210_ReadDisable;
                            id_csr2_re_o        =       `ysyx_22040210_ReadEnable;
                            id_csr1_raddr_o     =       `ysyx_22040210_NOP_REG_Addr;
                            id_csr2_raddr_o     =       csr;
                        end

                    default:begin
                    end
                endcase
            end
            default:begin
            end
        endcase
    end


	always @ (*) begin
		if(((id_ex_reg_waddr_i==id_reg1_raddr_o)&&(id_ex_reg_waddr_i != 0)&&(id_reg1_re_o == `ysyx_22040210_ReadEnable)&&(id_ex_we_i == `ysyx_22040210_WriteEnable)) &&(id_reg1_raddr_o!=0)) begin
	  	    id_op1_wdata_o = id_ex_wdata_i;
        end else if((id_mem_reg_waddr_i==id_reg1_raddr_o)&&(id_mem_reg_waddr_i != 0)&&(id_reg1_re_o == `ysyx_22040210_ReadEnable)&&(id_mem_we_i == `ysyx_22040210_WriteEnable)&&(id_reg1_raddr_o!=0))begin
            id_op1_wdata_o = id_mem_wdata_i;
        end else if(id_reg1_re_o == `ysyx_22040210_ReadEnable)begin
            id_op1_wdata_o = id_reg1_rdata_i;
	    end else if(id_reg1_re_o == `ysyx_22040210_ReadDisable) begin
	  	    id_op1_wdata_o = id_imm;
	    end else begin
	        id_op1_wdata_o = `ysyx_22040210_ZeroWord;
	    end
	end

	always @ (*) begin
		if((id_ex_reg_waddr_i==id_reg2_raddr_o)&&(id_reg2_re_o == `ysyx_22040210_ReadEnable)&&(id_ex_we_i == `ysyx_22040210_WriteEnable)&&(id_reg2_raddr_o!=0)) begin
	  	    id_op2_wdata_o = id_ex_wdata_i;
        end else if((id_mem_reg_waddr_i==id_reg2_raddr_o)&&(id_reg2_re_o == `ysyx_22040210_ReadEnable)&&(id_mem_we_i == `ysyx_22040210_WriteEnable)&&(id_reg2_raddr_o!=0))begin
            id_op2_wdata_o = id_mem_wdata_i;
        end else if(id_reg2_re_o == `ysyx_22040210_ReadEnable)begin
            id_op2_wdata_o = id_reg2_rdata_i;
	    end else if(id_reg2_re_o == `ysyx_22040210_ReadDisable) begin
	  	    id_op2_wdata_o = id_imm;
	    end else begin
	        id_op2_wdata_o = `ysyx_22040210_ZeroWord;
	    end
	end

	always @ (*) begin
		if(((id_ex_csr_waddr_i==id_csr1_raddr_o)&&(id_csr1_re_o == `ysyx_22040210_ReadEnable)&&(id_ex_csrwe_i == `ysyx_22040210_WriteEnable)) ) begin
	  	    id_csrop1_wdata_o = id_ex_csrwdata_i;
        end else if((id_mem_csr_waddr_i==id_csr1_raddr_o)&&(id_csr1_re_o == `ysyx_22040210_ReadEnable)&&(id_mem_csrwe_i == `ysyx_22040210_WriteEnable))begin
            id_csrop1_wdata_o = id_mem_csrwdata_i;
        end else if(id_csr1_re_o == `ysyx_22040210_ReadEnable)begin
            id_csrop1_wdata_o = id_csr1_rdata_i;
	    end else if(id_csr1_re_o == `ysyx_22040210_ReadDisable) begin
	  	    id_csrop1_wdata_o = id_imm;
	    end else begin
	        id_csrop1_wdata_o = `ysyx_22040210_ZeroWord;
	    end
	end
    always @ (*) begin
		if(((id_ex_csr_waddr_i==id_csr2_raddr_o)&&(id_csr2_re_o == `ysyx_22040210_ReadEnable)&&(id_ex_csrwe_i == `ysyx_22040210_WriteEnable)) ) begin
	  	    id_csrop2_wdata_o = id_ex_csrwdata_i;
        end else if((id_mem_csr_waddr_i==id_csr2_raddr_o)&&(id_csr2_re_o == `ysyx_22040210_ReadEnable)&&(id_mem_csrwe_i == `ysyx_22040210_WriteEnable))begin
            id_csrop2_wdata_o = id_mem_csrwdata_i;
        end else if(id_csr2_re_o == `ysyx_22040210_ReadEnable)begin
            id_csrop2_wdata_o = id_csr2_rdata_i;
	    end else if(id_csr2_re_o == `ysyx_22040210_ReadDisable) begin
	  	    id_csrop2_wdata_o = id_imm;
	    end else begin
	        id_csrop2_wdata_o = `ysyx_22040210_ZeroWord;
	    end
	end
endmodule
