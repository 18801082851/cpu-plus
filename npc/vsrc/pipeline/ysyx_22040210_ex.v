`include "../npc/vsrc/include/ysyx_22040210_define.v"
module  ysyx_22040210_ex(
    
    //Interface with IDstage
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire    [`ysyx_22040210_InstAdderBus]   ex_pc_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   ex_dnpc_i,
    input   wire                                    ex_dpicstop_i,
    input   wire                                    ex_instvalid_i,
    input   wire    [`ysyx_22040210_AluOpBus]       ex_aluop_i,
    input   wire    [`ysyx_22040210_AluSelBus]      ex_alusel_i,
    input   wire    [`ysyx_22040210_RegBUS]         ex_op1_wdata_i,
    input   wire    [`ysyx_22040210_RegBUS]         ex_op2_wdata_i,
    input   wire    [`ysyx_22040210_RegBUS]         ex_op3_wdata_i,//branch
    input   wire    [`ysyx_22040210_RegAddrBus]     ex_reg_waddr_i,
    input   wire                                    ex_we_i,
    input   wire    [`ysyx_22040210_RegBUS]         ex_csrop1_wdata_i,
    input   wire    [`ysyx_22040210_RegBUS]         ex_csrop2_wdata_i,
    input   wire    [`ysyx_22040210_RegAddrBus]     ex_csrreg_waddr_i,
    input   wire                                    ex_csr1we_i,
    input   wire    [`ysyx_22040210_RegAddrBus]     ex_reg1_raddr_i,
    //Interface with CtrlBlock
    //Interface with CtrlBlock
    input   wire    [5:0]                           stall,
    output  reg                                     ex_stall_exreq_o,
    output  reg                                     ex_isjump_o,
    output  reg     [`ysyx_22040210_InstAdderBus]   ex_jumpaddr_o,
    //Interface with MemStage
    output  reg     [`ysyx_22040210_InstAdderBus]   ex_pc_o,
    output  reg     [`ysyx_22040210_InstAdderBus]   ex_dnpc_o,
    output  reg                                     ex_dpicstop_o,
    output  reg     [`ysyx_22040210_AluOpBus]       ex_aluop_o,
    output  reg                                     ex_instvalid_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     ex_csr_waddr_o,
    output  reg                                     ex_csrwe_o,
    output  reg     [`ysyx_22040210_RegBUS]         ex_csrwdata_o,
    output  reg     [`ysyx_22040210_RegAddrBus]     ex_reg_waddr_o,
    output  reg                                     ex_we_o,
    output  reg     [2:0]                           ex_bjop_o,
    output  reg     [`ysyx_22040210_RegBUS]         ex_wdata_o
);

    reg     [`ysyx_22040210_RegBUS]       arithmeticres;
    reg     [`ysyx_22040210_RegBUS]       logices;
    reg     [`ysyx_22040210_RegBUS]       memaddr;
    reg     [`ysyx_22040210_RegBUS]       ex_wdata_r;
    reg     [`ysyx_22040210_RegBUS]       csrdata;
    wire    [`ysyx_22040210_InstAdderBus] expcplus4 = ex_pc_i + 'h4;
    always @(*) begin
        ex_pc_o             =   ex_pc_i;
        ex_dpicstop_o       =   ex_dpicstop_i;
        ex_instvalid_o      =   ex_instvalid_i;
        ex_aluop_o          =   ex_aluop_i;
        if(ex_isjump_o)begin
            ex_dnpc_o       =   ex_jumpaddr_o;
        end else begin
            ex_dnpc_o       =   ex_dnpc_i;
        end
        
    end
wire rs1is1or5 = ex_reg1_raddr_i==64'd5||ex_reg1_raddr_i==64'd1;
wire rdis1or5 = ex_reg_waddr_o==64'd5||ex_reg_waddr_o==64'd1;
wire isjalrpush = rs1is1or5&&rdis1or5&&(ex_reg_waddr_o==ex_reg1_raddr_i) || (!rs1is1or5 &&rdis1or5);
wire isjalrpushpop = rs1is1or5&&rdis1or5&&(ex_reg_waddr_o!=ex_reg1_raddr_i);
    reg [63:0] ex_op1_mul_r,ex_op1_divrem_r,ex_op2_mul_r,ex_op2_divrem_r;
    wire [127:0] arithmeticres_mul_w;
    //assign arithmeticres_mul_w      = ex_op1_mul_r*ex_op2_mul_r;
    wire [63:0] arithmeticres_div_w;
    wire [63:0] arithmeticres_rem_w;
 
    
    wire ex_div_valid_w; 
    reg ex_is_divrem_r; 
    reg ex_div_doing_r;
    reg ex_div_qrvalid_r;
    wire ex_mul_valid_w; 
    reg ex_is_mul_r; 
    reg ex_mul_doing_r;
    reg ex_mul_mulvalid_r;
    assign ex_div_valid_w   =   ex_is_divrem_r && !ex_div_doing_r && !ex_div_qrvalid_r;
    assign ex_mul_valid_w   =   ex_is_mul_r && !ex_mul_doing_r && !ex_mul_mulvalid_r;
    assign ex_stall_exreq_o =   (ex_is_divrem_r && !ex_div_qrvalid_r) || (ex_is_mul_r && !ex_mul_mulvalid_r );
    
ysyx_22040210_div #(.WIDTH(64)) ysyx_22040210_div_u0(
	.clk                    (clk),
	.rst                    (rst),
    .div_ready              (!stall[3]),
	.div_datavalid_i        (ex_div_valid_w),
	.div_dividend_i         (ex_op1_divrem_r),
	.div_divisor_i          (ex_op2_divrem_r),
    .div_doing_o            (ex_div_doing_r),
	.div_qrvalid_o          (ex_div_qrvalid_r),
	.div_quotient_o         (arithmeticres_div_w),
	.div_remainder_o        (arithmeticres_rem_w)
);
ysyx_22040210_mul   ysyx_22040210_mul_u0(
	.clk                    (clk),
	.rst                    (rst),
	.mul_ready              (!stall[3]),
	.mul_datavaild_i        (ex_mul_valid_w),
	.multiplicand_i         (ex_op1_mul_r),
	.multiplier_i           (ex_op2_mul_r),
	.mul_doing_o            (ex_mul_doing_r),
	.mul_mulvalid_o         (ex_mul_mulvalid_r),
	.result_hi_o            (arithmeticres_mul_w[127:64]),
	.result_lo_o            (arithmeticres_mul_w[63:0])
);

    always @(*) begin
        arithmeticres           =   `ysyx_22040210_ZeroWord;
        logices                 =   `ysyx_22040210_ZeroWord;
        memaddr                 =   `ysyx_22040210_ZeroWord;
        ex_isjump_o             =   `ysyx_22040210_NoJump;
        ex_is_divrem_r          =   0;
        ex_is_mul_r             =   0;
        ex_jumpaddr_o           =   ex_pc_i + 4;
        ex_stall_exreq_o        =   `ysyx_22040210_StallDisable;
        ex_op1_mul_r            =   `ysyx_22040210_ZeroWord;
        ex_op2_mul_r            =   `ysyx_22040210_ZeroWord;
        ex_op1_divrem_r         =   `ysyx_22040210_ZeroWord;
        ex_op2_divrem_r         =   `ysyx_22040210_ZeroWord;
        csrdata                 =   `ysyx_22040210_ZeroWord;
        ex_bjop_o               =   `ysyx_22040210_BTB_BRANCHOP;
        case (ex_aluop_i) 
            `ysyx_22040210_ALU_MUL_OP : begin
                ex_op1_mul_r    =   ex_op1_wdata_i;
                ex_op2_mul_r    =   ex_op2_wdata_i;
                arithmeticres   =  arithmeticres_mul_w[63:0];
                ex_is_mul_r     =   1;
            end
            `ysyx_22040210_ALU_MULHU_OP : begin
                ex_op1_mul_r    =   ex_op1_wdata_i;
                ex_op2_mul_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_mul_w[127:64];
                ex_is_mul_r     =   1;
            end
            `ysyx_22040210_ALU_MULH_OP : begin
                ex_op1_mul_r    =   $signed(ex_op1_wdata_i);
                ex_op2_mul_r    =   $signed(ex_op2_wdata_i);
                arithmeticres   =   arithmeticres_mul_w[127:64];
                ex_is_mul_r     =   1;
            end
            `ysyx_22040210_ALU_MULHSU_OP : begin
                ex_op1_mul_r    =   $signed(ex_op2_wdata_i);
                ex_op2_mul_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_mul_w[127:64];
                ex_is_mul_r     =   1;
            end
            `ysyx_22040210_ALU_DIV_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i);
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_DIVU_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i;
                ex_op2_divrem_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_DIVW_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i[31:0]);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i[31:0]);
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_DIVUW_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i[31:0];
                ex_op2_divrem_r    =   ex_op2_wdata_i[31:0];
                arithmeticres   =   arithmeticres_div_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_REM_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i);
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_REMU_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i;
                ex_op2_divrem_r    =   ex_op2_wdata_i;
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_REMW_OP : begin
                ex_op1_divrem_r    =   $signed(ex_op1_wdata_i[31:0]);
                ex_op2_divrem_r    =   $signed(ex_op2_wdata_i[31:0]);
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_REMUW_OP : begin
                ex_op1_divrem_r    =   ex_op1_wdata_i[31:0];
                ex_op2_divrem_r    =   ex_op2_wdata_i[31:0];
                arithmeticres   =   arithmeticres_rem_w;
                //
                ex_is_divrem_r          =   1;
            end
            `ysyx_22040210_ALU_ADD_OP : begin
                arithmeticres   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_SUB_OP :begin
                arithmeticres   =   ex_op1_wdata_i - ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_AND_OP :begin
                logices           =   ex_op1_wdata_i & ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_OR_OP :begin
                logices           =   ex_op1_wdata_i | ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_XOR_OP :begin
                logices           =   ex_op1_wdata_i ^ ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_COMP_OP :begin
                logices           =   {31'b0,$signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i)};
            end
            `ysyx_22040210_ALU_COMPU_OP :begin
                logices           =   {31'b0,ex_op1_wdata_i < ex_op2_wdata_i};
            end
            `ysyx_22040210_ALU_SLL_OP :begin
                logices           =   ex_op1_wdata_i << ex_op2_wdata_i[5:0];
            end
            `ysyx_22040210_ALU_SLLW_OP :begin
                logices           =   ex_op1_wdata_i[31:0] << ex_op2_wdata_i[4:0];
            end
            `ysyx_22040210_ALU_SRL_OP :begin
                logices           =   ex_op1_wdata_i >> ex_op2_wdata_i[5:0];
            end
            `ysyx_22040210_ALU_SRLW_OP :begin
                logices           =   ex_op1_wdata_i[31:0] >> ex_op2_wdata_i[4:0];
            end
            `ysyx_22040210_ALU_SRA_OP :begin
                logices           =   $signed(ex_op1_wdata_i) >>> ex_op2_wdata_i[5:0];
            end
            `ysyx_22040210_ALU_SRAW_OP :begin
                logices           =   $signed(ex_op1_wdata_i[31:0]) >>> ex_op2_wdata_i[4:0];
            end
            
            `ysyx_22040210_ALU_BEQ_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i == ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op3_wdata_i) : expcplus4;
            end
            `ysyx_22040210_ALU_BNE_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i != ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op3_wdata_i) : expcplus4;
            end
            `ysyx_22040210_ALU_BLT_OP :begin
                ex_isjump_o           =   $signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i);
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op3_wdata_i) : expcplus4;
            end
            `ysyx_22040210_ALU_BGE_OP :begin
                ex_isjump_o           =   ~($signed(ex_op1_wdata_i) < $signed(ex_op2_wdata_i));
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op3_wdata_i) : expcplus4;
            end
            `ysyx_22040210_ALU_BLTU_OP :begin
                ex_isjump_o           =   ex_op1_wdata_i < ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op3_wdata_i) : expcplus4;
            end
            `ysyx_22040210_ALU_BGEU_OP :begin
                ex_isjump_o           =   (ex_op1_wdata_i) >= ex_op2_wdata_i;
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op3_wdata_i) : expcplus4;
            end
            `ysyx_22040210_ALU_JAL_OP :begin
                arithmeticres         =    ex_pc_i+64'd4;
                if (ex_reg_waddr_o==64'd1 || ex_reg_waddr_o==64'd5) begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_CALLOP;
                end else begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_JALOP;
                end
                ex_isjump_o           =   `ysyx_22040210_IsJump;
                ex_jumpaddr_o         =   ex_isjump_o ? (ex_pc_i+ex_op2_wdata_i): expcplus4;
            end
            `ysyx_22040210_ALU_JALR_OP :begin
                if (!rdis1or5 && rs1is1or5) begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_RETOP;
                end else if(isjalrpush)begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_CALLOP;
                end else if(isjalrpushpop)begin    
                    ex_bjop_o             =   `ysyx_22040210_BTB_CALLANDRETOP;
                end else begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_JALOP;
                end
                arithmeticres         =    ex_pc_i+64'd4;
                ex_isjump_o           =   `ysyx_22040210_IsJump;
                ex_jumpaddr_o         =   ex_isjump_o ? ((ex_op1_wdata_i + ex_op2_wdata_i)& 64'b11111111_11111111_11111111_11111111_11111111_11111111_11111111_11111110) : expcplus4;
            end
            `ysyx_22040210_ALU_AUIPC_OP :begin
                arithmeticres         =    ex_pc_i+ex_op2_wdata_i;
                
            end
            `ysyx_22040210_ALU_LUI_OP :begin
                arithmeticres         =    ex_op1_wdata_i + ex_op2_wdata_i;
                
            end
            `ysyx_22040210_ALU_LB_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_LH_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_LW_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_LD_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_LBU_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_LHU_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_LWU_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op2_wdata_i;
            end
            `ysyx_22040210_ALU_SB_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22040210_ALU_SH_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22040210_ALU_SW_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22040210_ALU_SD_OP : begin
                    memaddr   =   ex_op1_wdata_i + ex_op3_wdata_i;
            end
            `ysyx_22040210_ALU_ECALL_OP : begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_CSROP;
                    ex_isjump_o           =   `ysyx_22040210_IsJump;
                    ex_jumpaddr_o         =   ex_isjump_o ? ex_csrop1_wdata_i : expcplus4;
                    csrdata               =   ex_pc_i;
            end
            `ysyx_22040210_ALU_MRET_OP : begin
                    ex_bjop_o             =   `ysyx_22040210_BTB_CSROP;
                    ex_isjump_o           =   `ysyx_22040210_IsJump;
                    ex_jumpaddr_o         =   ex_isjump_o ? ex_csrop1_wdata_i :expcplus4;
            end

            `ysyx_22040210_ALU_CSRRC_OP : begin
                    csrdata   =   (~ex_op1_wdata_i) & ex_csrop2_wdata_i;
                    arithmeticres =  ex_csrop2_wdata_i;
            end
            `ysyx_22040210_ALU_CSRRS_OP : begin
                    csrdata   =   ex_op1_wdata_i  | ex_csrop2_wdata_i;
                    arithmeticres =  ex_csrop2_wdata_i;
            end
            `ysyx_22040210_ALU_CSRRW_OP : begin
                    csrdata   =   ex_op1_wdata_i;
                    arithmeticres =  ex_csrop2_wdata_i;
            end
            default: begin
            end
        endcase
    end

    always @(*) begin
        ex_we_o             =   ex_we_i;
        ex_csrwe_o          =   ex_csr1we_i;
        ex_reg_waddr_o      =   ex_reg_waddr_i;
        ex_csr_waddr_o      =   ex_csrreg_waddr_i;
        ex_csrwdata_o       =   `ysyx_22040210_ZeroWord;
        ex_wdata_r          =   `ysyx_22040210_ZeroWord;
        case (ex_alusel_i)
            `ysyx_22040210_ALU_ARITHMETIC_SEL : begin
                ex_wdata_r  =   arithmeticres;
            end
            `ysyx_22040210_ALU_LOGIC_SEL : begin
                ex_wdata_r  =   logices;
            end
            `ysyx_22040210_ALU_LOAD_SEL : begin
                ex_wdata_r  =   memaddr;
            end
            `ysyx_22040210_ALU_STORE_SEL : begin
                ex_wdata_r  =   ex_op2_wdata_i;
                ex_reg_waddr_o = memaddr;
            end
            `ysyx_22040210_ALU_CSR_SEL : begin
                ex_wdata_r  =   arithmeticres;
                ex_csrwdata_o = csrdata;
            end
            default : begin
            end
        endcase
    end

    always @(*) begin
        if(ex_alusel_i==`ysyx_22040210_ALU_64W_SEL)begin
            ex_wdata_o     =    {{32{arithmeticres[31]}},arithmeticres[31:0]};
        end else if (ex_alusel_i==`ysyx_22040210_ALU_64LOGICW_SEL)begin
            ex_wdata_o     =    {{32{logices[31]}},logices[31:0]};
        end else begin
            ex_wdata_o     =    ex_wdata_r;
        end
    end




endmodule
