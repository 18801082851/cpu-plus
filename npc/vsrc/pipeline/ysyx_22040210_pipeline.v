`include "../npc/vsrc/include/ysyx_22040210_define.v"

 module ysyx_22040210_pipeline(
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire    [`ysyx_22040210_InstAdderBus]   pipeline_thispc_i,
    input   wire    [`ysyx_22040210_InstBus]        pipeline_inst_i,
    input   wire    [`ysyx_22040210_InstBus]        pipeline_inst2_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   pipeline_thispc2_i,
    input   wire                                    pipeline_inst2vaild_i,
    output  reg                                     pipeline_ce_o,
    output  reg     [`ysyx_22040210_InstAdderBus]   pipeline_pc_o,
    //Interface with BPU
    input   wire    [`ysyx_22040210_BHR_BUS]                           pipeline_inst1bhr_i,
    input   wire    [1:0]                           pipeline_inst1pht_i,
    input   wire                                    pipeline_inst1taken_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   pipeline_inst1takenaddr_i,
    input   wire    [`ysyx_22040210_BHR_BUS]                           pipeline_inst2bhr_i,
    input   wire    [1:0]                           pipeline_inst2pht_i,
    input   wire                                    pipeline_inst2taken_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   pipeline_inst2takenaddr_i,
    output  wire    [`ysyx_22040210_BHR_BUS]                           bpu_bhr_o,
    output  wire    [1:0]                           bpu_pht_o,
    output  wire                                    bpu1istaken_o,
    output  wire                                    bpu2istaken_o,
    output  wire    [`ysyx_22040210_InstAdderBus]   bpu1hitaddr_o,
    output  wire    [`ysyx_22040210_InstAdderBus]   bpu2hitaddr_o,
    //Interface with DataMem
    input   wire                                    pipeline_invalidcachesuccess_i,
    output  wire                                    pipeline_invalidcache_o,
    input   wire    [`ysyx_22040210_MemBUS]         pipeline_memrdata_i,
    input   wire                                    pipeline_memrdatavaild_i,
    input   wire                                    pipeline_memwdatavaild_i,
    output  reg     [2:0]                           pipeline_memwsize_o,
    output  reg                                     pipeline_memre_o,
    output  reg     [`ysyx_22040210_StoreSelBus]    pipeline_memwe_o,
    output  reg     [`ysyx_22040210_MemAddrBus]     pipeline_memaddr_o,
    output  reg     [`ysyx_22040210_MemBUS]         pipeline_memwdata_o,
    
    input   wire                                    pipeline_icache_req2_i,
    output  wire                                    piepline_bpu1hit_o,
    //Interface with CtrlBlock
    input   wire                                    pipeline_instvaild_i,
 
    input   wire                                    stall_cachereq_i,
    input   wire                                    stall_uncachereq_i,
    output   wire    [5:0]                          stall,
    output   wire    [5:0]                          flush,
    input   wire                                    cachepipe_flushifid,
    output  wire                                    pipeline_instbuffer_full_o,
    // Interface with DPI-C
    output  reg                                     pipeline_dpic_stop_o

 );
    //Interface with ControlBlock
    // wire     [5:0]                           stall;
    // wire     [5:0]                           flush;
    wire                                     stall_exreq_w;
    wire                                     stall_idreq_w;
    wire                                     isjump_w;
    wire     [`ysyx_22040210_InstAdderBus]   jumpaddr_w;
    //Interface with IFstage
    wire                                     buffer_issuevaild_w;
    reg      [`ysyx_22040210_InstBus]        id_inst_r;
    reg      [`ysyx_22040210_InstBus]        ex_inst_r;
    reg      [`ysyx_22040210_InstAdderBus]   id_pc_r;
    reg      [`ysyx_22040210_InstAdderBus]   id_dnpc_r;
    //Interface with Regfile
    reg      [`ysyx_22040210_RegBUS]         id_reg1_rdata_r;
    reg      [`ysyx_22040210_RegBUS]         id_reg2_rdata_r;
    wire                                     id_reg1_re_w;
    wire                                     id_reg2_re_w;
    wire     [`ysyx_22040210_RegAddrBus]     id_reg1_raddr_w;
    reg     [`ysyx_22040210_RegAddrBus]         ex_reg1_raddr_r;
    wire     [`ysyx_22040210_RegAddrBus]     id_reg2_raddr_w;
    //Interface with CSR
    wire                                     id_csr1_re_w;
    wire     [`ysyx_22040210_RegAddrBus]     id_csr1_raddr_w;
    wire     [`ysyx_22040210_RegBUS]         id_csr1_rdata_w;
    wire                                     id_csr2_re_w;
    wire     [`ysyx_22040210_RegAddrBus]     id_csr2_raddr_w;
    wire     [`ysyx_22040210_RegBUS]         id_csr2_rdata_w;
    //Interface with EXstage
    wire     [`ysyx_22040210_InstAdderBus]   id_pc_w;
    wire     [`ysyx_22040210_InstAdderBus]   id_dnpc_w;
    wire                                     id_dpicstop_w;
    wire     [`ysyx_22040210_AluOpBus]       id_aluop_w;
    wire     [`ysyx_22040210_AluSelBus]      id_alusel_w;
    wire     [`ysyx_22040210_RegBUS]         id_op1_wdata_w;
    wire     [`ysyx_22040210_RegBUS]         id_op2_wdata_w;
    wire     [`ysyx_22040210_RegBUS]         id_op3_wdata_w;
    wire     [`ysyx_22040210_RegAddrBus]     id_reg_waddr_w;
    wire                                     id_we_w;
    wire                                     id_instvalid_w;
    wire     [`ysyx_22040210_RegBUS]         id_csrop1_wdata_w;
    wire     [`ysyx_22040210_RegBUS]         id_csrop2_wdata_w;
    wire     [`ysyx_22040210_RegAddrBus]     id_csrreg_waddr_w;
    wire                                     id_csr1we_w;
    //Interface with Instbuffer
    wire [`ysyx_22040210_InstAdderBus]   id_inst1takenaddr_w;
    wire                                 id_inst1taken_w;
    wire [1:0]                           id_inst1pht_w;
    wire [`ysyx_22040210_BHR_BUS]                           id_inst1bhr_w;
    //Interface with IDstage
    wire                                    prmiss;
    wire                                    prsuccess;
    reg     [1:0]                           ex_inst1pht_r;
    reg     [`ysyx_22040210_BHR_BUS]                           ex_inst1bhr_r;
    reg                                     ex_inst1taken_r;
    reg     [`ysyx_22040210_InstAdderBus]   ex_inst1takenaddr_r;
    reg    [`ysyx_22040210_InstAdderBus]   ex_pc_r;
    reg    [`ysyx_22040210_InstAdderBus]   ex_dnpc_r;
    reg                                    ex_dpicstop_r;
    reg    [`ysyx_22040210_AluOpBus]       ex_aluop_r;
    reg    [`ysyx_22040210_AluSelBus]      ex_alusel_r;
    reg    [`ysyx_22040210_RegBUS]         ex_op1_wdata_r;
    reg    [`ysyx_22040210_RegBUS]         ex_op2_wdata_r;
    reg    [`ysyx_22040210_RegBUS]         ex_op3_wdata_r;
    reg    [`ysyx_22040210_RegAddrBus]     ex_reg_waddr_r;
    reg                                    ex_we_r;
    reg                                    ex_instvalid_r;
    reg    [`ysyx_22040210_RegBUS]         ex_csrop1_wdata_r;
    reg    [`ysyx_22040210_RegBUS]         ex_csrop2_wdata_r;
    reg    [`ysyx_22040210_RegAddrBus]     ex_csrreg_waddr_r;
    reg                                    ex_csr1we_r;
    //Interface with MemStage
    wire   [`ysyx_22040210_AluOpBus]       ex_aluop_w;
    wire   [2:0]                           ex_bjop_w;
    wire   [`ysyx_22040210_InstAdderBus]   ex_pc_w;
    wire   [`ysyx_22040210_InstAdderBus]   ex_dnpc_w;
    wire                                   ex_dpicstop_w;
    wire                                   ex_instvalid_w;
    wire   [`ysyx_22040210_AluOpBus]       ex_aluop_o_w;
    wire   [`ysyx_22040210_RegAddrBus]     ex_reg_waddr_w;
    wire                                   ex_we_w;
    wire   [`ysyx_22040210_RegBUS]         ex_wdata_w;
    wire   [`ysyx_22040210_RegAddrBus]     ex_csr_waddr_w;
    wire                                   ex_csrwe_w;
    wire   [`ysyx_22040210_RegBUS]         ex_csrwdata_w;
    //Interface with EXStage
    reg                                     mem_prmiss_r;
    reg                                     mem_prsuccess_r;
    reg     [1:0]                           mem_inst1pht_r;
    reg     [`ysyx_22040210_BHR_BUS]                           mem_inst1bhr_r;
    reg                                     mem_inst1taken_r;
    reg     [`ysyx_22040210_InstAdderBus]   mem_inst1takenaddr_r;
    reg    [`ysyx_22040210_InstAdderBus]   mem_pc_r;
    reg    [`ysyx_22040210_InstAdderBus]   mem_dnpc_r;
    reg                                    mem_dpicstop_r;
    reg     [`ysyx_22040210_AluOpBus]      mem_aluop_r;
    reg                                    mem_instvalid_r;
    reg     [`ysyx_22040210_RegAddrBus]    mem_reg_waddr_r;
    reg                                    mem_we_r;
    reg     [`ysyx_22040210_RegBUS]        mem_wdata_r;
    reg     [`ysyx_22040210_RegAddrBus]    mem_csr_waddr_r;
    reg                                    mem_csrwe_r;
    reg     [2:0]                          mem_bjop_r;
    reg     [`ysyx_22040210_RegBUS]        mem_csrwdata_r;
    //Interface with WBStage
    wire                                    mem_stall_memreq_w;
    wire                                    mem_flush_memreq_w;
    wire     [`ysyx_22040210_InstAdderBus]  mem_pc_w;
    wire     [`ysyx_22040210_InstAdderBus]  mem_dnpc_w;
    wire                                    mem_dpicstop_w;
    wire                                    mem_instvalid_w;
    wire     [`ysyx_22040210_RegAddrBus]    mem_reg_waddr_w;
    wire                                    mem_we_w;
    wire     [`ysyx_22040210_RegBUS]        mem_wdata_w;
    wire     [`ysyx_22040210_RegAddrBus]    mem_csr_waddr_w;
    wire                                    mem_csrwe_w;
    wire     [`ysyx_22040210_RegBUS]        mem_csrwdata_w;
    reg                                     mem_isjump_r;
    //Interface with MEMStage
    wire    [1:0]                           bpu_fixpht_w;
    wire                                    bpu_fixwe_w;
    wire    [63:0]                          bpu_fixjumpaddr_w;
    reg                                     wb_prmiss_r;
    reg                                     wb_prsuccess_r;
    reg     [1:0]                           wb_inst1pht_r;
    reg     [`ysyx_22040210_BHR_BUS]                           wb_inst1bhr_r;
    reg                                     wb_inst1taken_r;
    reg     [`ysyx_22040210_InstAdderBus]   wb_inst1takenaddr_r;
    reg     [`ysyx_22040210_InstAdderBus]  wb_pc_r;
    reg     [`ysyx_22040210_InstAdderBus]  wb_dnpc_r;
    reg                                    wb_dpicstop_r;
    reg                                    wb_instvalid_r;
    reg     [`ysyx_22040210_RegAddrBus]    wb_reg_waddr_r;
    reg                                    wb_we_r;
    reg     [`ysyx_22040210_RegBUS]        wb_wdata_r;
    reg     [`ysyx_22040210_RegAddrBus]    wb_csr_waddr_r;
    reg                                    wb_csrwe_r;
    reg     [`ysyx_22040210_RegBUS]        wb_csrwdata_r;
    reg     [2:0]                           wb_bjop_r;
    reg     wb_isjump_r;
    wire    btb_fixwe_w;
//********************************************************************//

//******************************DPIC******************************//
import "DPI-C" function void checkdpicpc(input longint dpic_o);
import "DPI-C" function void checkdpicdnpc(input longint dpic_o);
import "DPI-C" function void checkdpicmempc(input longint dpic_o);
import "DPI-C" function void bypassregfilewe(input longint dpic_o);
import "DPI-C" function void bypassregfiledata(input longint  dpic_o);
import "DPI-C" function void bypassregfileaddr(input longint dpic_o);    
import "DPI-C" function void checkdpicinstvaild(input longint dpic_o); 
import "DPI-C" function void checkdpicwbghr(input longint dpic_o); 
    always @(posedge clk) begin
        checkdpicpc(wb_pc_r);
        checkdpicdnpc(wb_dnpc_r);
        bypassregfilewe(wb_we_r);
        bypassregfileaddr(wb_reg_waddr_r);
        checkdpicmempc(mem_pc_r);
        bypassregfiledata(wb_wdata_r);
        //$display("%x",wb_wdata_r);
        checkdpicinstvaild(wb_instvalid_r);
        checkdpicwbghr(wb_inst1bhr_r);
    end

    always @(*) begin
        pipeline_dpic_stop_o    = wb_dpicstop_r;
    end

//******************************Pipeline IF1******************************//
reg     [`ysyx_22040210_InstAdderBus]     pc;
wire [`ysyx_22040210_InstAdderBus] pcplus4 = pc + `ysyx_22040210_RegBUSNum'h4;
wire [`ysyx_22040210_InstAdderBus] pcplus8 = pc + `ysyx_22040210_RegBUSNum'h8;
reg [`ysyx_22040210_InstAdderBus] nextpc  ;
wire bpu1hit;
wire bpu2hit;
assign piepline_bpu1hit_o = bpu1hit ;
wire stallbpu =stall_uncachereq_i||stall_cachereq_i||pipeline_instbuffer_full_o;
always @(*) begin
    if (flush[0]) begin
        nextpc = flush[3] ? mem_dnpc_w :jumpaddr_w;
    end else if (stall_uncachereq_i||stall_cachereq_i||pipeline_instbuffer_full_o) begin
        nextpc = pc;
    end else if (bpu1hit) begin
        nextpc = bpu1hitaddr_o;
    end else if (bpu2hit && pipeline_icache_req2_i) begin
        nextpc = bpu2hitaddr_o;
    end else if (pc>64'ha00000000 || !pipeline_icache_req2_i) begin
    //end else if (pc[3] || !pipeline_icache_req2_i) begin
        nextpc = pcplus4;
    end else begin
        nextpc = pcplus8;
    end
end
    always @(posedge clk ) begin
        if (pipeline_ce_o== `ysyx_22040210_ChipDisable) begin
            pc  <=  `ysyx_22040210_RstVector;
       end else begin
            pc  <=  nextpc;
        end
    end
assign pipeline_pc_o = pc;
assign pipeline_ce_o = rst ? `ysyx_22040210_ChipDisable: `ysyx_22040210_ChipEnable;
//*********************BranchPredictionUnit**********************//
ysyx_22040210_bpu ysyx_22040210_bpu_u0(
    .clk(clk),
    .rst(rst),
    .stall(stallbpu),
    .flush(flush[0]),
    // Interface with EX Stage
    .exisjump_i(isjump_w),
    .gshare_prsuccessbutnotupdate_i(0),//if want tricky tuned bpu --->prsuccess&&(ex_inst1takenaddr_r=='h0)
    .bpu_prmiss_i(flush[0]),
    .bpu_exrealbhr_i(ex_inst1bhr_r),
    .bpu_exfixbhr_i(ex_inst1bhr_r),
    // Interface with Commit Stage   
    .btb_fixwe_i(btb_fixwe_w),
    .bpu_fixpht_i(bpu_fixpht_w),
    .bpu_fixpc_i(wb_pc_r),
    .bpu_fixbhr_i(wb_inst1bhr_r),
    .bpu_fixjumpaddr_i(bpu_fixjumpaddr_w),
    .bpu_fixwe_i(bpu_fixwe_w),
    .btb_fixjumpop_i(wb_bjop_r),
    // Interface with IF Stage
    .bpu_fetchpc_i(nextpc),
    .bpu1hit_o(bpu1hit),
    .bpu2hit_o(bpu2hit),
    .bpu1hitaddr_o(bpu1hitaddr_o),
    .bpu2hitaddr_o(bpu2hitaddr_o),
    .bpu_bhr_o(bpu_bhr_o),
    .bpu_pht_o(bpu_pht_o),
    .bpu_istaken1_o(bpu1istaken_o),
    .bpu_istaken2_o(bpu2istaken_o)
);
//******************************Pipeline******************************//
//***********************************************//

    ysyx_22040210_ctrl  ysyx_22040210_ctrl_u0(
    .rst                (rst),
    .ctrl_stall_cachereq_i(stall_cachereq_i),
    .ctrl_stall_exreq_i (stall_exreq_w),
    .ctrl_stall_idreq_i (stall_idreq_w),
    .ctrl_stall_memreq_i(mem_stall_memreq_w),
    .ctrl_mem_isjump    (mem_flush_memreq_w),
    .ctrl_ex_isjump     (prmiss),//if want tricky tuned bpu --->(prsuccess&&(ex_inst1takenaddr_r=='h0))||prmiss,
    .stall              (stall),
    .flush              (flush)
    );
//*********************InstBuffer**********************//
 ysyx_22040210_instbuffer ysyx_22040210_instbuffer_u0(
    //Interface with Gloabl
    .clk(clk),
    .rst(rst),
    .flush(flush[1]),
    //Interface with Inst Fetch Stage
    .buffer_inst1bhr_i(pipeline_inst1bhr_i),
    .buffer_inst1pht_i(pipeline_inst1pht_i),
    .buffer_inst1taken_i(pipeline_inst1taken_i),
    .buffer_inst1takenaddr_i(pipeline_inst1takenaddr_i),
    .buffer_inst2bhr_i(pipeline_inst2bhr_i),
    .buffer_inst2pht_i(pipeline_inst2pht_i),
    .buffer_inst2taken_i(pipeline_inst2taken_i),
    .buffer_inst2takenaddr_i(pipeline_inst2takenaddr_i),
    .buffer_inst1_i(pipeline_inst_i),
    .buffer_inst1valid_i(!((cachepipe_flushifid==`ysyx_22040210_True)||(pipeline_instvaild_i !=`ysyx_22040210_InstValid)||(flush[1] == `ysyx_22040210_FlushEnable)||pipeline_instbuffer_full_o == `ysyx_22040210_True)),
    .buffer_inst1_pc_i(pipeline_thispc_i),
    .buffer_inst2_i(pipeline_inst2_i),
    .buffer_inst2valid_i(!((cachepipe_flushifid==`ysyx_22040210_True)||(pipeline_inst2vaild_i !=`ysyx_22040210_InstValid)||(flush[1] == `ysyx_22040210_FlushEnable)||pipeline_instbuffer_full_o == `ysyx_22040210_True)),
    .buffer_inst2_pc_i(pipeline_thispc2_i),
    .buffer_full_o(pipeline_instbuffer_full_o),
    //Interface with Decode Stage
    .buffer_issuemode(1'b0),//SingleIssue
    .buffer_issueready_i(!((stall[1] == `ysyx_22040210_StallEnable)&&(stall[2] == `ysyx_22040210_StallEnable)) && buffer_issuevaild_w == `ysyx_22040210_True),
    .buffer_inst1_pc_o(id_pc_r),
    .buffer_inst1_o(id_inst_r),
    .buffer_inst1bhr_o(id_inst1bhr_w),
    .buffer_inst1pht_o(id_inst1pht_w),
    .buffer_inst1taken_o(id_inst1taken_w),
    .buffer_inst1takenaddr_o(id_inst1takenaddr_w),
    .buffer_inst2_pc_o(),
    .buffer_inst2_o(),
    .buffer_issuevaild_o(buffer_issuevaild_w)
);
assign id_dnpc_r = id_pc_r +4 ;
//*********************Decode*********************//
    
    ysyx_22040210_regfile  ysyx_22040210_regfile(
        //Interface with Input
        .clk        (clk),
        .rst        (rst),
        // Interface with WBstage
        .we_i       (wb_we_r),
        .waddr_i    (wb_reg_waddr_r),
        .wdata_i    (wb_wdata_r),
        // Interface with ID
        .re1_i      (id_reg1_re_w),
        .raddr1_i   (id_reg1_raddr_w),
        .rdata1_o   (id_reg1_rdata_r),
        .re2_i      (id_reg2_re_w),
        .raddr2_i   (id_reg2_raddr_w),
        .rdata2_o   (id_reg2_rdata_r) 
    );

    ysyx_22040210_csr ysyx_22040210_csr(
            //Interface with Input
        .clk(clk),
        .rst(rst),
    // Interface for write port
        .we_i(wb_csrwe_r),
        .waddr_i(wb_csr_waddr_r),
        .wdata_i(wb_csrwdata_r),
    // Interface for read port1
        .re1_i(id_csr1_re_w),
        .raddr1_i(id_csr1_raddr_w),
        .rdata1_o(id_csr1_rdata_w),
    // Interface for read port2
        .re2_i(id_csr2_re_w),
        .raddr2_i(id_csr2_raddr_w),
        .rdata2_o(id_csr2_rdata_w)
    );
    ysyx_22040210_id        ysyx_22040210_id_u0(
        //Interface with IFstage
        .id_pc_i            (id_pc_r),
        .id_dnpc_i          (id_dnpc_r),
        .id_inst_i          (id_inst_r),
        //Interface with Regfile
        .id_reg1_rdata_i    (id_reg1_rdata_r),
        .id_reg2_rdata_i    (id_reg2_rdata_r),
        .id_reg1_re_o       (id_reg1_re_w),
        .id_reg2_re_o       (id_reg2_re_w),
        .id_reg1_raddr_o    (id_reg1_raddr_w),
        .id_reg2_raddr_o    (id_reg2_raddr_w),
        //Interface with CSR
        .id_csr1_rdata_i    (id_csr1_rdata_w),
        .id_csr2_rdata_i    (id_csr2_rdata_w),
        .id_csr1_re_o       (id_csr1_re_w),
        .id_csr2_re_o       (id_csr2_re_w),
        .id_csr1_raddr_o    (id_csr1_raddr_w),
        .id_csr2_raddr_o    (id_csr2_raddr_w),
        //Interface with CtrlBlock
        .id_stall_idreq_o   (stall_idreq_w),
        //Interface with EXstage    
        .id_pc_o            (id_pc_w),
        .id_dnpc_o          (id_dnpc_w),
        .id_dpicstop_o      (id_dpicstop_w),
        .id_aluop_o         (id_aluop_w),
        .id_alusel_o        (id_alusel_w),
        .id_op1_wdata_o     (id_op1_wdata_w),
        .id_op2_wdata_o     (id_op2_wdata_w),
        .id_op3_wdata_o     (id_op3_wdata_w),
        .id_csrop1_wdata_o  (id_csrop1_wdata_w),
        .id_csrop2_wdata_o  (id_csrop2_wdata_w),
        .id_reg_waddr_o     (id_reg_waddr_w),
        .id_csrreg_waddr_o  (id_csrreg_waddr_w),
        .id_we_o            (id_we_w),
        .id_csr1we_o        (id_csr1we_w),
        .id_instvalid_o     (id_instvalid_w),
        .id_ex_alusel_i     (ex_alusel_r),
        .id_ex_reg_waddr_i  (ex_reg_waddr_w),//fix data harzard
        .id_ex_wdata_i      (ex_wdata_w),//fix data harzard
        .id_ex_we_i         (ex_we_w),//fix data harzard
        .id_ex_csr_waddr_i  (ex_csr_waddr_w),
        .id_ex_csrwe_i      (ex_csrwe_w),
        .id_ex_csrwdata_i   (ex_csrwdata_w),
        //Interface with Memstage
        .id_mem_reg_waddr_i (mem_reg_waddr_w),//fix data harzard
        .id_mem_wdata_i     (mem_wdata_w),//fix data harzard
        .id_mem_we_i        (mem_we_w),//fix data harzard
        .id_mem_csr_waddr_i (mem_csr_waddr_w),
        .id_mem_csrwe_i     (mem_csrwe_w),
        .id_mem_csrwdata_i  (mem_csrwdata_w)
    );


//*********************ID_EX*********************//

    always @(posedge clk ) begin
        if (rst ==  `ysyx_22040210_RstEnable || flush[3])begin  
            ex_inst_r                <=  `ysyx_22040210_ZeroWord;
            ex_inst1pht_r            <=  `ysyx_22040210_ZeroWord;
            ex_inst1bhr_r            <=  `ysyx_22040210_ZeroWord;
            ex_inst1taken_r          <=  `ysyx_22040210_ZeroWord;
            ex_inst1takenaddr_r      <=  `ysyx_22040210_ZeroWord;
            ex_pc_r                  <=  `ysyx_22040210_ZeroWord;
            ex_dnpc_r                <=  `ysyx_22040210_ZeroWord;
            ex_dpicstop_r            <=  `ysyx_22040210_DPICNOSTOP;
            ex_aluop_r               <=  `ysyx_22040210_ALU_NOP_OP;
            ex_alusel_r              <=  `ysyx_22040210_ALU_NOP_SEL;
            ex_op1_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_op2_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_op3_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_reg_waddr_r           <=  `ysyx_22040210_NOP_REG_Addr;
            ex_we_r                  <=  `ysyx_22040210_WriteDisable;
            ex_instvalid_r           <=  `ysyx_22040210_InstnVaild;
            ex_csrop1_wdata_r        <=  `ysyx_22040210_ZeroWord ;
            ex_csrop2_wdata_r        <=  `ysyx_22040210_ZeroWord ;
            ex_csrreg_waddr_r        <=  `ysyx_22040210_NOP_REG_Addr ;
            ex_csr1we_r              <=  `ysyx_22040210_WriteDisable ;
            ex_reg1_raddr_r          <=  `ysyx_22040210_ZeroWord;
        end else if(stall[2]==`ysyx_22040210_StallEnable
                &&stall[3]==`ysyx_22040210_StallDisable)begin
            ex_inst_r                <=  `ysyx_22040210_ZeroWord;
            ex_inst1pht_r            <=  `ysyx_22040210_ZeroWord;
            ex_inst1bhr_r            <=  `ysyx_22040210_ZeroWord;
            ex_inst1taken_r          <=  `ysyx_22040210_ZeroWord;
            ex_inst1takenaddr_r      <=  `ysyx_22040210_ZeroWord;
            ex_pc_r                  <=  `ysyx_22040210_ZeroWord;
            ex_dnpc_r                <=  `ysyx_22040210_ZeroWord;
            ex_dpicstop_r            <=  `ysyx_22040210_DPICNOSTOP;
            ex_aluop_r               <=  `ysyx_22040210_ALU_NOP_OP;
            ex_alusel_r              <=  `ysyx_22040210_ALU_NOP_SEL;
            ex_op1_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_op2_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_op3_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_reg_waddr_r           <=  `ysyx_22040210_NOP_REG_Addr;
            ex_we_r                  <=  `ysyx_22040210_WriteDisable;
            ex_instvalid_r           <=  `ysyx_22040210_InstnVaild;
            ex_csrop1_wdata_r        <=  `ysyx_22040210_ZeroWord ;
            ex_csrop2_wdata_r        <=  `ysyx_22040210_ZeroWord ;
            ex_csrreg_waddr_r        <=  `ysyx_22040210_NOP_REG_Addr ;
            ex_csr1we_r              <=  `ysyx_22040210_WriteDisable ;
            ex_reg1_raddr_r          <=  `ysyx_22040210_ZeroWord;
        end else if(stall[2]==`ysyx_22040210_StallEnable
                &&stall[3]==`ysyx_22040210_StallEnable)begin
            ex_inst_r                <=  ex_inst_r;
            ex_inst1pht_r            <=  ex_inst1pht_r;
            ex_inst1bhr_r            <=  ex_inst1bhr_r;
            ex_inst1taken_r          <=  ex_inst1taken_r;
            ex_inst1takenaddr_r      <=  ex_inst1takenaddr_r;
            ex_pc_r                  <=  ex_pc_r;
            ex_dnpc_r                <=  ex_dnpc_r;
            ex_dpicstop_r            <=  ex_dpicstop_r;
            ex_aluop_r               <=  ex_aluop_r;
            ex_alusel_r              <=  ex_alusel_r;
            ex_op1_wdata_r           <=  ex_op1_wdata_r;
            ex_op2_wdata_r           <=  ex_op2_wdata_r;
            ex_op3_wdata_r           <=  ex_op3_wdata_r;
            ex_reg_waddr_r           <=  ex_reg_waddr_r;
            ex_we_r                  <=  ex_we_r;
            ex_instvalid_r           <=  ex_instvalid_r;
            ex_csrop1_wdata_r        <=  ex_csrop1_wdata_r ;
            ex_csrop2_wdata_r        <=  ex_csrop2_wdata_r ;
            ex_csrreg_waddr_r        <=  ex_csrreg_waddr_r ;
            ex_csr1we_r              <=  ex_we_r ;
            ex_reg1_raddr_r          <=  `ysyx_22040210_ZeroWord;
        end else if(flush[2]==`ysyx_22040210_FlushEnable || buffer_issuevaild_w == 1'b0)begin
            ex_inst_r                <=  `ysyx_22040210_ZeroWord;
            ex_inst1pht_r            <=  `ysyx_22040210_ZeroWord;
            ex_inst1bhr_r            <=  `ysyx_22040210_ZeroWord;
            ex_inst1taken_r          <=  `ysyx_22040210_ZeroWord;
            ex_inst1takenaddr_r      <=  `ysyx_22040210_ZeroWord;
            ex_pc_r                  <=  `ysyx_22040210_ZeroWord;
            ex_dnpc_r                <=  `ysyx_22040210_ZeroWord;
            ex_dpicstop_r            <=  `ysyx_22040210_DPICNOSTOP;
            ex_aluop_r               <=  `ysyx_22040210_ALU_NOP_OP;
            ex_alusel_r              <=  `ysyx_22040210_ALU_NOP_SEL;
            ex_op1_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_op2_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_op3_wdata_r           <=  `ysyx_22040210_ZeroWord;
            ex_reg_waddr_r           <=  `ysyx_22040210_NOP_REG_Addr;
            ex_we_r                  <=  `ysyx_22040210_WriteDisable;
            ex_instvalid_r           <=  `ysyx_22040210_InstnVaild;
            ex_csrop1_wdata_r        <=  `ysyx_22040210_ZeroWord ;
            ex_csrop2_wdata_r        <=  `ysyx_22040210_ZeroWord ;
            ex_csrreg_waddr_r        <=  `ysyx_22040210_NOP_REG_Addr ;
            ex_csr1we_r              <=  `ysyx_22040210_WriteDisable ;
            ex_reg1_raddr_r          <=  `ysyx_22040210_ZeroWord;
        end else if (stall[2]==`ysyx_22040210_StallDisable)begin
            ex_inst_r                <=  id_inst_r;
            ex_inst1pht_r            <=  id_inst1pht_w;
            ex_inst1bhr_r            <=  id_inst1bhr_w;
            ex_inst1taken_r          <=  id_inst1taken_w;
            ex_inst1takenaddr_r      <=  id_inst1takenaddr_w;
            ex_pc_r                  <=  id_pc_w;
            ex_dnpc_r                <=  id_dnpc_w;
            ex_dpicstop_r            <=  id_dpicstop_w; 
            ex_aluop_r               <=  id_aluop_w;
            ex_alusel_r              <=  id_alusel_w;
            ex_op1_wdata_r           <=  id_op1_wdata_w;
            ex_op2_wdata_r           <=  id_op2_wdata_w;
            ex_op3_wdata_r           <=  id_op3_wdata_w;
            ex_reg_waddr_r           <=  id_reg_waddr_w;
            ex_we_r                  <=  id_we_w;
            ex_instvalid_r           <=  id_instvalid_w   ;
            ex_csrop1_wdata_r        <=  id_csrop1_wdata_w ;
            ex_csrop2_wdata_r        <=  id_csrop2_wdata_w ;
            ex_csrreg_waddr_r        <=  id_csrreg_waddr_w ;
            ex_csr1we_r              <=  id_csr1we_w ;
            ex_reg1_raddr_r          <=  id_reg1_raddr_w;
        end
    end

assign prmiss    = (ex_aluop_r ==`ysyx_22040210_ALU_JALR_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_JAL_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BGEU_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_BLTU_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_ECALL_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_MRET_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_BGE_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BLT_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BNE_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BEQ_OP ) ?
                ((isjump_w != ex_inst1taken_r) || isjump_w&&(ex_inst1takenaddr_r != jumpaddr_w)) :
                1'b0;
assign prsuccess = (ex_aluop_r ==`ysyx_22040210_ALU_JALR_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_JAL_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BGEU_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_BLTU_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_ECALL_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_MRET_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_BGE_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BLT_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BNE_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BEQ_OP ) ?
                ((isjump_w == ex_inst1taken_r) && (isjump_w&&(ex_inst1takenaddr_r == jumpaddr_w)||!isjump_w)) :
                1'b0;

//TEST
//`define BRANCHPERF
//`ifdef BRANCHPERF
wire exisjump =(ex_aluop_r ==`ysyx_22040210_ALU_JALR_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_JAL_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BGEU_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_BLTU_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_ECALL_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_MRET_OP ||
                ex_aluop_r ==`ysyx_22040210_ALU_BGE_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BLT_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BNE_OP  ||
                ex_aluop_r ==`ysyx_22040210_ALU_BEQ_OP );
reg [63:0]counterjump;
reg [63:0]counterISjump;
reg [63:0]countersuccess;
reg [63:0]countergsharesuccess;
reg [63:0]counterprimiss;
reg [63:0]counterbtbprimiss;
reg [63:0]counterras;
reg [63:0]counterrasprimiss;
reg [63:0]counterrasprimiss2;
reg [63:0]counterbtbhit;
reg [63:0]counterbtbhit2;
reg [63:0]counterbtbmiss;
reg [63:0]counterbtbretmiss;
reg [63:0]counterghrmiss;
reg [63:0] jumpflag1;
reg [63:0] jumpflag2;
reg [63:0] jumpflag3;
reg [63:0] jumpflag4;
reg [63:0] jumpflag5;
reg [63:0] jumpflag6;
reg [63:0] jumpflag7;
reg [63:0] jumpflag8;
reg [63:0] jumpflag9;
reg [63:0] jumpflag10;
reg [63:0] jumpflag11;
reg [63:0] jumpflag12;
reg [63:0] jumpflag13;
reg [63:0] jumpflag14;
reg [63:0] jumpflag15;
always@(posedge clk)begin
    if (rst) begin
        counterjump <= 0;
        jumpflag1<= 0;
    end else if((jumpflag1 != ex_pc_r) &&exisjump )begin
        counterjump <= counterjump +1;
        jumpflag1<= ex_pc_r;
    end else begin
        jumpflag1<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        countersuccess <= 0;
        jumpflag2<= 0;
    end else if((jumpflag2 != ex_pc_r) &&exisjump&&prsuccess)begin
        countersuccess <= countersuccess +1;
        jumpflag2<= ex_pc_r;
    end else begin
        jumpflag2<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        countergsharesuccess <= 0;
        jumpflag3<= 0;
    end else if((jumpflag3 != ex_pc_r) &&exisjump&&(isjump_w == ex_inst1taken_r))begin
        countergsharesuccess <= countergsharesuccess +1;
        jumpflag3<= ex_pc_r;
    end else begin
        jumpflag3<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterprimiss <= 0;
        jumpflag4<= 0;
    end else if((jumpflag4 != ex_pc_r) &&exisjump&&prmiss)begin
        counterprimiss <= counterprimiss +1;
        jumpflag4<= ex_pc_r;
    end else begin
        jumpflag4<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterbtbprimiss <= 0;
        jumpflag5<= 0;
    end else if((jumpflag5 != ex_pc_r) &&exisjump&&prmiss&&(isjump_w == ex_inst1taken_r))begin
        counterbtbprimiss <= counterbtbprimiss +1;
        jumpflag5<= ex_pc_r;
    end else begin
        jumpflag5<= ex_pc_r;
    end
end

always@(posedge clk)begin
    if (rst) begin
        counterrasprimiss <= 0;
        jumpflag6<= 0;
    end else if((jumpflag6 != ex_pc_r) &&exisjump&&prmiss&&(isjump_w == ex_inst1taken_r)&&(ex_inst_r==32'h00008067))begin
        counterrasprimiss <= counterrasprimiss +1;
        jumpflag6<= ex_pc_r;
    end else begin
        jumpflag6<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterrasprimiss2 <= 0;
        jumpflag7<= 0;
    end else if((jumpflag7 != ex_pc_r) &&exisjump&&prmiss&&(ex_inst_r==32'h00008067))begin
      //  $display("THIS PC IS %x RET REALADDR IS %x , PRIDECT IS %x",ex_pc_r,jumpaddr_w,ex_inst1takenaddr_r);
        counterrasprimiss2 <= counterrasprimiss2 +1;
        jumpflag7<= ex_pc_r;
    end else begin
        jumpflag7<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterras <= 0;
        jumpflag8<= 0;
    end else if((jumpflag8 != ex_pc_r) &&exisjump&&(ex_inst_r==32'h00008067))begin
        counterras <= counterras +1;
        jumpflag8<= ex_pc_r;
    end else begin
        jumpflag8<= ex_pc_r;
    end
end

always@(posedge clk)begin
    if (rst) begin
        counterbtbhit <= 0;
        jumpflag9<= 0;
    end else if((jumpflag9 != ex_pc_r) &&exisjump&&isjump_w&&(ex_inst1takenaddr_r == jumpaddr_w))begin
        counterbtbhit <= counterbtbhit +1;
        jumpflag9<= ex_pc_r;
    end else begin
        jumpflag9<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterbtbhit2 <= 0;
        jumpflag10<= 0;
    end else if((jumpflag10 != ex_pc_r) &&exisjump&&isjump_w&&(isjump_w != ex_inst1taken_r)&&(ex_inst1takenaddr_r == jumpaddr_w))begin
        counterbtbhit2 <= counterbtbhit2 +1;
        jumpflag10<= ex_pc_r;
    end else begin
        jumpflag10<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterISjump <= 0;
        jumpflag11<= 0;
    end else if((jumpflag11 != ex_pc_r) &&exisjump&&isjump_w )begin
        counterISjump <= counterISjump +1;
        jumpflag11<= ex_pc_r;
    end else begin
        jumpflag11<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterbtbmiss <= 0;
        jumpflag12<= 0;
    end else if((jumpflag12 != ex_pc_r) &&exisjump&&isjump_w &&(ex_inst1takenaddr_r != jumpaddr_w)&&(ex_inst_r!=32'h00008067)&&(ex_inst1takenaddr_r==0))begin
        counterbtbmiss <= counterbtbmiss +1;
        jumpflag12<= ex_pc_r;
    end else begin
        jumpflag12<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        counterbtbretmiss <= 0;
        jumpflag13<= 0;
    end else if((jumpflag13 != ex_pc_r) &&exisjump&&isjump_w &&(ex_inst1takenaddr_r != jumpaddr_w)&&(ex_inst_r==32'h00008067))begin
        counterbtbretmiss <= counterbtbretmiss +1;
        jumpflag13<= ex_pc_r;
    end else begin
        jumpflag13<= ex_pc_r;
    end
end
reg [`ysyx_22040210_BHR_BUS] testghr;

always@(posedge clk)begin
    if (rst) begin
        counterghrmiss <= 0;
        jumpflag14<= 0;
    end else if((jumpflag13 != ex_pc_r)&&exisjump  &&({testghr[`ysyx_22040210_BHRLEN-1:0]} != {ex_inst1bhr_r[`ysyx_22040210_BHRLEN-1:0]}))begin
        //$display("testghr is %b and ghr is %b THIS PC is %x\n",{testghr[`ysyx_22040210_BHRLEN-1:0]},{ex_inst1bhr_r[`ysyx_22040210_BHRLEN-1:0]},ex_pc_w);
        counterghrmiss <= counterghrmiss +1;
        jumpflag14<= ex_pc_r;
    end else begin
        jumpflag14<= ex_pc_r;
    end
end
always@(posedge clk)begin
    if (rst) begin
        testghr <= 0;
        jumpflag15<= 0;
    end else if((jumpflag15 != ex_pc_r) &&exisjump )begin
        testghr <= {testghr[`ysyx_22040210_BHRLEN-2:0], isjump_w};
        jumpflag15<= ex_pc_r;
    end else begin
        jumpflag15<= ex_pc_r;
    end
end
always @(*) begin
    if (wb_dpicstop_r) begin
        $display("SIMU END \n JUMP INST is %8d\n GSHAREHIT is %8d\n BTBMISS   is %8d\n PRSUCCESS is %8d\n PRMISS    is %8d\n Miss Rate is %8d%%\n GSHAREHIT is %8d%%\n",
                    counterjump,countergsharesuccess,counterbtbprimiss,countersuccess,counterprimiss,((counterprimiss*100)/counterjump),((countergsharesuccess*100)/counterjump));
        $display(" RET INST NUM  IS %8d\n RET MISS      IS %8d\n RET MISS2     IS %8d\n RET MISSRATE  IS %8d%%\n RET MISSRATE2 IS %8d%%\n",
        counterras,counterrasprimiss,counterrasprimiss2,(counterrasprimiss*100)/counterras,(counterrasprimiss2*100)/counterras);
        $display(" BTB HIT IS   %8d\n BTB HIT2 IS  %8d \n HITrate is  %8d%%\n HITrate2 is %8d%%\n",counterbtbhit,counterbtbhit2,(100*counterbtbhit)/counterISjump,(100*counterbtbhit2)/counterISjump);
        $display(" BTB MISS IS     %8d\n BTB MISSRET IS  %8d \n MISSrate is  %8d%%\n MISSRET is    %8d%%\n",counterbtbmiss,counterbtbretmiss,(100*counterbtbmiss)/counterISjump,(100*counterbtbretmiss)/counterISjump);
        $display(" GHR MISS IS     %8d\n GHR MISSRATE IS  %8d%% \n",counterghrmiss,(100*counterghrmiss)/counterjump);
    end
end
//`else

//`endif 
//TESTEND
    ysyx_22040210_ex ysyx_22040210_ex_u0(
    //Interface with IDstage
    .clk                (clk),
    .rst                (rst),
    .ex_pc_i            (ex_pc_r),
    .ex_dnpc_i          (ex_dnpc_r),
    .ex_dpicstop_i      (ex_dpicstop_r),
    .ex_instvalid_i     (ex_instvalid_r),
    .ex_aluop_i         (ex_aluop_r),
    .ex_alusel_i        (ex_alusel_r),
    .ex_op1_wdata_i     (ex_op1_wdata_r),
    .ex_op2_wdata_i     (ex_op2_wdata_r),
    .ex_op3_wdata_i     (ex_op3_wdata_r),
    .ex_reg_waddr_i     (ex_reg_waddr_r),
    .ex_we_i            (ex_we_r),
    .ex_csrop1_wdata_i  (ex_csrop1_wdata_r),
    .ex_csrop2_wdata_i  (ex_csrop2_wdata_r),
    .ex_csrreg_waddr_i  (ex_csrreg_waddr_r),
    .ex_csr1we_i        (ex_csr1we_r),
    .ex_reg1_raddr_i    (ex_reg1_raddr_r),
    //Interface with CtrlBlock and PCreg
    .stall              (stall),
    .ex_stall_exreq_o   (stall_exreq_w),
    .ex_isjump_o        (isjump_w),
    .ex_jumpaddr_o      (jumpaddr_w),
    //Interface with MemStage
    .ex_bjop_o          (ex_bjop_w),
    .ex_pc_o            (ex_pc_w),
    .ex_dnpc_o          (ex_dnpc_w),
    .ex_dpicstop_o      (ex_dpicstop_w),
    .ex_aluop_o         (ex_aluop_w),
    .ex_instvalid_o     (ex_instvalid_w),
    .ex_csr_waddr_o     (ex_csr_waddr_w),
    .ex_csrwe_o         (ex_csrwe_w),
    .ex_csrwdata_o      (ex_csrwdata_w),
    .ex_reg_waddr_o     (ex_reg_waddr_w),
    .ex_we_o            (ex_we_w),
    .ex_wdata_o         (ex_wdata_w)
    );


    
//*********************EX_MEM*********************//

    always @(posedge clk ) begin
        if (rst == `ysyx_22040210_RstEnable) begin
            mem_prmiss_r              <=   `ysyx_22040210_ZeroWord;
            mem_prsuccess_r           <=   `ysyx_22040210_ZeroWord;
            mem_inst1pht_r            <=   `ysyx_22040210_ZeroWord;
            mem_inst1bhr_r            <=   `ysyx_22040210_ZeroWord;
            mem_inst1taken_r          <=   `ysyx_22040210_ZeroWord;
            mem_inst1takenaddr_r      <=   `ysyx_22040210_ZeroWord;
            mem_pc_r                  <=   `ysyx_22040210_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22040210_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22040210_RstVector;
            mem_instvalid_r           <=   `ysyx_22040210_InstnVaild;
            mem_dpicstop_r            <=   `ysyx_22040210_DPICNOSTOP;
            mem_aluop_r               <=   `ysyx_22040210_ALU_NOP_OP;
            mem_reg_waddr_r           <=   `ysyx_22040210_NOP_REG_Addr;
            mem_we_r                  <=   `ysyx_22040210_WriteDisable;
            mem_wdata_r               <=   `ysyx_22040210_ZeroWord;
            mem_csr_waddr_r           <=   `ysyx_22040210_NOP_REG_Addr;
            mem_csrwe_r               <=   `ysyx_22040210_WriteDisable;
            mem_csrwdata_r            <=   `ysyx_22040210_ZeroWord;
            mem_bjop_r                <=    `ysyx_22040210_ZeroWord;
            mem_isjump_r              <=  `ysyx_22040210_ZeroWord;
        end else if(stall[3]  == `ysyx_22040210_StallEnable &&
                    stall[4] == `ysyx_22040210_StallDisable )begin
            mem_prmiss_r              <=   `ysyx_22040210_ZeroWord;
            mem_prsuccess_r           <=   `ysyx_22040210_ZeroWord;
            mem_inst1pht_r            <=   `ysyx_22040210_ZeroWord;
            mem_inst1bhr_r            <=   `ysyx_22040210_ZeroWord;
            mem_inst1taken_r          <=   `ysyx_22040210_ZeroWord;
            mem_inst1takenaddr_r      <=   `ysyx_22040210_ZeroWord;
            mem_pc_r                  <=   `ysyx_22040210_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22040210_ZeroWord;
            mem_instvalid_r           <=   `ysyx_22040210_InstnVaild;
            mem_dpicstop_r            <=   `ysyx_22040210_DPICNOSTOP;
            mem_aluop_r               <=   `ysyx_22040210_ALU_NOP_OP;
            mem_reg_waddr_r           <=   `ysyx_22040210_NOP_REG_Addr;
            mem_we_r                  <=   `ysyx_22040210_WriteDisable;
            mem_wdata_r               <=   `ysyx_22040210_ZeroWord;
            mem_csr_waddr_r           <=   `ysyx_22040210_NOP_REG_Addr;
            mem_csrwe_r               <=   `ysyx_22040210_WriteDisable;
            mem_csrwdata_r            <=   `ysyx_22040210_ZeroWord;
            mem_bjop_r                <=    `ysyx_22040210_ZeroWord;
            mem_isjump_r              <=  `ysyx_22040210_ZeroWord;
        end else if(stall[3]  == `ysyx_22040210_StallEnable &&
                    stall[4] == `ysyx_22040210_StallEnable )begin
            mem_prmiss_r              <=   mem_prmiss_r;
            mem_prsuccess_r           <=   mem_prsuccess_r;
            mem_inst1pht_r            <=   mem_inst1pht_r;
            mem_inst1bhr_r            <=   mem_inst1bhr_r;
            mem_inst1taken_r          <=   mem_inst1taken_r;
            mem_inst1takenaddr_r      <=   mem_inst1takenaddr_r;
            mem_pc_r                  <=   mem_pc_r;
            mem_dnpc_r                <=   mem_dnpc_r;
            mem_instvalid_r           <=   mem_instvalid_r;
            mem_dpicstop_r            <=   mem_dpicstop_r;
            mem_aluop_r               <=   mem_aluop_r;
            mem_reg_waddr_r           <=   mem_reg_waddr_r;
            mem_we_r                  <=   mem_we_r;
            mem_wdata_r               <=   mem_wdata_r;
            mem_csr_waddr_r           <=   mem_csr_waddr_r;
            mem_csrwe_r               <=   mem_csrwe_r;
            mem_csrwdata_r            <=   mem_csrwdata_r;
            mem_bjop_r                <=   mem_bjop_r;
            mem_isjump_r              <=  mem_isjump_r;
        end else if(flush[3]==`ysyx_22040210_FlushEnable)begin
            mem_prmiss_r              <=   `ysyx_22040210_ZeroWord;
            mem_prsuccess_r           <=   `ysyx_22040210_ZeroWord;
            mem_inst1pht_r            <=   `ysyx_22040210_ZeroWord;
            mem_inst1bhr_r            <=   `ysyx_22040210_ZeroWord;
            mem_inst1taken_r          <=   `ysyx_22040210_ZeroWord;
            mem_inst1takenaddr_r      <=   `ysyx_22040210_ZeroWord;
            mem_pc_r                  <=   `ysyx_22040210_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22040210_ZeroWord;
            mem_dnpc_r                <=   `ysyx_22040210_RstVector;
            mem_instvalid_r           <=   `ysyx_22040210_InstnVaild;
            mem_dpicstop_r            <=   `ysyx_22040210_DPICNOSTOP;
            mem_aluop_r               <=   `ysyx_22040210_ALU_NOP_OP;
            mem_reg_waddr_r           <=   `ysyx_22040210_NOP_REG_Addr;
            mem_we_r                  <=   `ysyx_22040210_WriteDisable;
            mem_wdata_r               <=   `ysyx_22040210_ZeroWord;
            mem_csr_waddr_r           <=   `ysyx_22040210_NOP_REG_Addr;
            mem_csrwe_r               <=   `ysyx_22040210_WriteDisable;
            mem_csrwdata_r            <=   `ysyx_22040210_ZeroWord;
            mem_bjop_r                <=    `ysyx_22040210_ZeroWord;
            mem_isjump_r              <=  `ysyx_22040210_ZeroWord;
        end else if (stall[3]  == `ysyx_22040210_StallDisable)begin
            mem_prmiss_r              <=   prmiss;
            mem_prsuccess_r           <=   prsuccess;
            mem_inst1pht_r            <=   ex_inst1pht_r;
            mem_inst1bhr_r            <=   ex_inst1bhr_r;
            mem_inst1taken_r          <=   prsuccess ? ex_inst1taken_r : prmiss ? isjump_w : 0;
            mem_inst1takenaddr_r      <=   prsuccess ? ex_inst1takenaddr_r : prmiss ? jumpaddr_w : 0;
            mem_pc_r                  <=   ex_pc_w; 
            mem_dnpc_r                <=   ex_dnpc_w;
            mem_dpicstop_r            <=   ex_dpicstop_w;
            mem_aluop_r               <=   ex_aluop_w;
            mem_instvalid_r           <=   ex_instvalid_w;
            mem_reg_waddr_r           <=   ex_reg_waddr_w;
            mem_we_r                  <=   ex_we_w;
            mem_wdata_r               <=   ex_wdata_w;
            mem_csr_waddr_r           <=   ex_csr_waddr_w;
            mem_csrwe_r               <=   ex_csrwe_w;
            mem_csrwdata_r            <=   ex_csrwdata_w;
            mem_bjop_r                <=    ex_bjop_w;
            mem_isjump_r              <=  (ex_inst1takenaddr_r != jumpaddr_w)&isjump_w;
        end
    end

    

    ysyx_22040210_mem ysyx_22040210_mem (
    //Interface with EXStage
    .mem_pc_i               (mem_pc_r),
    .mem_dnpc_i             (mem_dnpc_r),
    .mem_dpicstop_i         (mem_dpicstop_r),
    .mem_instvalid_i        (mem_instvalid_r),
    .mem_aluop_i            (mem_aluop_r),
    .mem_reg_waddr_i        (mem_reg_waddr_r),
    .mem_we_i               (mem_we_r),
    .mem_wdata_i            (mem_wdata_r),
    .mem_csr_waddr_i        (mem_csr_waddr_r),
    .mem_csrwe_i            (mem_csrwe_r),
    .mem_csrwdata_i         (mem_csrwdata_r),
    //Interface with CtrlBlock
    .mem_stall_memreq_o(mem_stall_memreq_w),
    .mem_flush_memreq_o(mem_flush_memreq_w),
    //Interface with DataMem
    .mem_invcachesuccess_i  (pipeline_invalidcachesuccess_i),
    .mem_invcachereq_o      (pipeline_invalidcache_o),
    .mem_memrdata_i         (pipeline_memrdata_i),
    .memwsize_o             (pipeline_memwsize_o),
    .mem_memrdatavaild_i    (pipeline_memrdatavaild_i),
    .mem_memwdatavaild_i    (pipeline_memwdatavaild_i),
    .mem_memre_o            (pipeline_memre_o),
    .mem_memwe_o            (pipeline_memwe_o),
    .mem_memaddr_o          (pipeline_memaddr_o),
    .mem_memwdata_o         (pipeline_memwdata_o),
    //Interface with WBStage
    .mem_pc_o               (mem_pc_w),
    .mem_dnpc_o             (mem_dnpc_w),
    .mem_dpicstop_o         (mem_dpicstop_w),
    .mem_instvalid_o        (mem_instvalid_w),
    .mem_csr_waddr_o        (mem_csr_waddr_w),
    .mem_csrwe_o            (mem_csrwe_w),
    .mem_csrwdata_o         (mem_csrwdata_w),
    .mem_reg_waddr_o        (mem_reg_waddr_w),
    .mem_we_o               (mem_we_w),
    .mem_wdata_o            (mem_wdata_w)
    );

    //*********************MEM_WB*********************//

    always @(posedge clk ) begin
        if (rst == `ysyx_22040210_RstEnable) begin
            wb_prmiss_r              <=   `ysyx_22040210_ZeroWord;
            wb_prsuccess_r           <=   `ysyx_22040210_ZeroWord;
            wb_inst1pht_r            <=   `ysyx_22040210_ZeroWord;
            wb_inst1bhr_r            <=   `ysyx_22040210_ZeroWord;
            wb_inst1taken_r          <=   `ysyx_22040210_ZeroWord;
            wb_inst1takenaddr_r      <=   `ysyx_22040210_ZeroWord;
            wb_pc_r             <=  `ysyx_22040210_ZeroWord;
            wb_dnpc_r           <=  `ysyx_22040210_ZeroWord;
            wb_dpicstop_r       <=  `ysyx_22040210_DPICNOSTOP;
            wb_instvalid_r      <=  `ysyx_22040210_InstnVaild;
            wb_reg_waddr_r      <=  `ysyx_22040210_NOP_REG_Addr;
            wb_we_r             <=  `ysyx_22040210_WriteDisable;
            wb_wdata_r          <=  `ysyx_22040210_ZeroWord;
            wb_csr_waddr_r      <=  `ysyx_22040210_NOP_REG_Addr;
            wb_csrwe_r          <=  `ysyx_22040210_WriteDisable;
            wb_csrwdata_r       <=  `ysyx_22040210_ZeroWord;
            wb_bjop_r           <=  `ysyx_22040210_ZeroWord;
            wb_isjump_r         <=  `ysyx_22040210_ZeroWord;
        end else if(stall[4]  == `ysyx_22040210_StallEnable &&
                    stall[5] == `ysyx_22040210_StallDisable )begin
            wb_prmiss_r              <=   `ysyx_22040210_ZeroWord;
            wb_prsuccess_r           <=   `ysyx_22040210_ZeroWord;
            wb_inst1pht_r            <=   `ysyx_22040210_ZeroWord;
            wb_inst1bhr_r            <=   `ysyx_22040210_ZeroWord;
            wb_inst1taken_r          <=   `ysyx_22040210_ZeroWord;
            wb_inst1takenaddr_r      <=   `ysyx_22040210_ZeroWord;
            wb_pc_r             <=  `ysyx_22040210_ZeroWord;
            wb_dnpc_r           <=  `ysyx_22040210_ZeroWord;
            wb_dpicstop_r       <=  `ysyx_22040210_DPICNOSTOP;
            wb_instvalid_r      <=  `ysyx_22040210_InstnVaild;
            wb_reg_waddr_r      <=  `ysyx_22040210_NOP_REG_Addr;
            wb_we_r             <=  `ysyx_22040210_WriteDisable;
            wb_wdata_r          <=  `ysyx_22040210_ZeroWord;
            wb_csr_waddr_r      <=  `ysyx_22040210_NOP_REG_Addr;
            wb_csrwe_r          <=  `ysyx_22040210_WriteDisable;
            wb_csrwdata_r       <=  `ysyx_22040210_ZeroWord;
            wb_bjop_r           <=  `ysyx_22040210_ZeroWord;
            wb_isjump_r         <=  `ysyx_22040210_ZeroWord;
        end else if (stall[4]  == `ysyx_22040210_StallDisable)begin
            wb_prmiss_r              <=   mem_prmiss_r;
            wb_prsuccess_r           <=   mem_prsuccess_r;
            wb_inst1pht_r            <=   mem_inst1pht_r;
            wb_inst1bhr_r            <=   mem_inst1bhr_r;
            wb_inst1taken_r          <=   mem_inst1taken_r;
            wb_inst1takenaddr_r      <=   mem_inst1takenaddr_r;
            wb_pc_r             <=  mem_pc_w;
            wb_dnpc_r           <=  mem_dnpc_w;
            wb_dpicstop_r       <=  mem_dpicstop_w;
            wb_instvalid_r      <=  mem_instvalid_w;
            wb_reg_waddr_r      <=  mem_reg_waddr_w;
            wb_we_r             <=  mem_we_w;
            wb_wdata_r          <=  mem_wdata_w;
            wb_csr_waddr_r      <=  mem_csr_waddr_w;
            wb_csrwe_r          <=  mem_csrwe_w;
            wb_csrwdata_r       <=  mem_csrwdata_w;
            wb_bjop_r           <=  mem_bjop_r;
            wb_isjump_r         <=  mem_isjump_r;
        end
        
    end
   
assign bpu_fixpht_w =  (wb_prsuccess_r&&wb_inst1taken_r) ? ((wb_inst1pht_r < 2'b11) ? wb_inst1pht_r + 2'b1 : 2'b11)
                                                        : (wb_prsuccess_r && !wb_inst1taken_r)  ? ((wb_inst1pht_r > 2'b0) ? wb_inst1pht_r - 2'b1 : 2'b0)
                                                        : (wb_prmiss_r  &&  wb_inst1taken_r)    ? ((wb_inst1pht_r < 2'b11) ? wb_inst1pht_r + 2'b1 : 2'b11)
                                                        : (wb_prmiss_r  && !wb_inst1taken_r)    ? ((wb_inst1pht_r > 2'b0) ? wb_inst1pht_r - 2'b1 : 2'b0)
                                                                                                : wb_inst1pht_r ;
assign bpu_fixwe_w       = wb_prsuccess_r | wb_prmiss_r;
assign btb_fixwe_w       = wb_prmiss_r && wb_isjump_r;
assign bpu_fixjumpaddr_w = wb_inst1takenaddr_r;
//assign wb_ghr_dpic = wb_prmiss_r|wb_prsuccess_r
//************************************************************//

endmodule
