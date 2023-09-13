`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210_bpu(
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire                                    stall,
    input   wire                                    flush,
    // Interface with EX Stage
    input   wire                                            exisjump_i,
    input   wire                                    gshare_prsuccessbutnotupdate_i,
    input   wire                                    bpu_prmiss_i,
    input   wire    [`ysyx_22040210_BHR_BUS]        bpu_exfixbhr_i,
    input   wire    [`ysyx_22040210_BHR_BUS]        bpu_exrealbhr_i,
    // Interface with Commit Stage  
    input   wire                                    btb_fixwe_i,
    input   wire    [`ysyx_22040210_BHR_BUS]                           bpu_fixbhr_i,
    input   wire    [1:0]                           bpu_fixpht_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   bpu_fixpc_i,
    input   wire    [`ysyx_22040210_InstAdderBus]   bpu_fixjumpaddr_i,
    input   wire                                    bpu_fixwe_i,
    input   wire     [2:0]                          btb_fixjumpop_i,
    // Interface with IF Stage
    input   wire    [`ysyx_22040210_InstAdderBus]   bpu_fetchpc_i,
    output  wire                                    bpu1hit_o,
    output  wire                                    bpu2hit_o,
    output  wire    [`ysyx_22040210_InstAdderBus]   bpu1hitaddr_o,
    output  wire    [`ysyx_22040210_InstAdderBus]   bpu2hitaddr_o,
    output  wire    [`ysyx_22040210_BHR_BUS]                           bpu_bhr_o,
    output  wire    [1:0]                           bpu_pht_o,
    output  wire                                    bpu_istaken1_o,
    output  wire                                    bpu_istaken2_o
);
reg  [`ysyx_22040210_InstAdderBus] pcdelay;
wire gshare_istaken1_w;
wire gshare_istaken2_w;
wire btb_hit1_w;
wire btb_hit2_w;
wire [`ysyx_22040210_InstAdderBus] bpu1hitaddr_w;
wire [`ysyx_22040210_InstAdderBus] bpu2hitaddr_w;
wire [`ysyx_22040210_InstAdderBus] bpurastarget_w;
wire [2:0] btb_op_w;
always @(posedge clk ) begin
    if(rst)begin
        pcdelay <= `ysyx_22040210_ZeroWord;
    end else begin
        pcdelay <= bpu_fetchpc_i;
    end
end 
wire [`ysyx_22040210_InstAdderBus]bpu_fetchpcplus4 = bpu_fetchpc_i +'h4;
ysyx_22040210_gshare ysyx_22040210_gshare_u0(
    .clk                (clk),
    .rst                (rst),
    .stall              (stall),
    .flush              (flush),
    // Interface with IF Stage
    .gshare_pc1_i       (bpu_fetchpc_i),
    .gshare_pc2_i       (bpu_fetchpcplus4),
    .gshare_btbhit_i    (btb_hit1_w|btb_hit2_w),
    .gshare_bhr_o       (bpu_bhr_o),
    .gshare_pht_o       (bpu_pht_o),
    .gshare_istaken1_o  (gshare_istaken1_w),
    .gshare_istaken2_o  (gshare_istaken2_w),
    .gshare_btbop_i     (btb_op_w),
    // Interface with EX Stage
    .exisjump_i         (exisjump_i),
    .bpu_exfixbhr_i     (bpu_exfixbhr_i),
    .gshare_prmiss_i    (bpu_prmiss_i),
    .gshare_prsuccessbutnotupdate_i (gshare_prsuccessbutnotupdate_i),
    .bpu_exrealbhr_i    (bpu_exrealbhr_i),
    // Interface with Commit Stage
    .gshare_wepht_i     (bpu_fixwe_i),
    .gshare_fixpht_i    (bpu_fixpht_i),    
    .bpu_fixbhr_i       (bpu_fixbhr_i),   
    .gshare_fixpc_i     (bpu_fixpc_i)    
);

ysyx_22040210_btb ysyx_22040210_btb_u0(
    .clk                (clk),
    .rst                (rst),
    .stall              (stall),
    // Interface with IF Stage
    .btb_pcdelay_i      (pcdelay),
    .btb_pc1_i          (bpu_fetchpc_i),
    .btb_pc2_i          (bpu_fetchpcplus4),
    .btb_hit1_o         (btb_hit1_w),
    .btb_hit2_o         (btb_hit2_w),
    .btb_hitaddr1_o     (bpu1hitaddr_w),
    .btb_hitaddr2_o     (bpu2hitaddr_w),
    // Interface with Commit Stage   
    .btb_op_o            (btb_op_w),
    .btb_fixjumpaddr_i  (bpu_fixjumpaddr_i),
    .btb_fixjumpop_i    (btb_fixjumpop_i),
    .btb_fixwe_i        (btb_fixwe_i),
    .btb_fixpc_i        (bpu_fixpc_i)    
);
wire [63:0]pcdelayplus4 = pcdelay + 'h4;
wire [63:0]pcdelayplus8 = pcdelay + 'h8;
ysyx_22040210_ras ysyx_22040210_ras_u0(
    .clk(clk),
    .rst(rst),
    .stall       (stall),
    .flush              (flush),
    .ras_jumpop_i(btb_op_w),
    .ras_btbhit_i(bpu1hit_o|bpu2hit_o),
    .ras_btbhitaddr(bpu1hit_o ? pcdelayplus4 : pcdelayplus8),
    .ras_target_o(bpurastarget_w)
);
assign bpu_istaken1_o = gshare_istaken1_w;
assign bpu_istaken2_o = gshare_istaken2_w;
assign bpu1hit_o      = gshare_istaken1_w && btb_hit1_w ;
assign bpu2hit_o      = gshare_istaken2_w && btb_hit2_w ;


// assign bpu_istaken1_o = btb_hit1_w;
// assign bpu_istaken2_o = btb_hit2_w;
// assign bpu1hit_o      = btb_hit1_w ;
// assign bpu2hit_o      = btb_hit2_w ;
// assign bpu1hitaddr_o  = bpu1hitaddr_w ;
// assign bpu2hitaddr_o  = bpu2hitaddr_w;
// wire [63:0] pcdelayplus4 = pcdelay+'h4;
// always @(*) begin
//     if((!gshare_istaken1_w)&&(bpu1hitaddr_w!=pcdelayplus4)&&btb_hit1_w)begin
//         $display("this pc is %x btbpc is %x",pcdelay,bpu1hitaddr_w);
//     end
// end

// assign bpu1hitaddr_o  = gshare_istaken1_w ?  ((btb_op_w==`ysyx_22040210_BTB_RETOP && btb_hit1_w) ? bpurastarget_w : bpu1hitaddr_w) : pcdelay + 'h4;
// assign bpu2hitaddr_o  = gshare_istaken2_w ?  ((btb_op_w==`ysyx_22040210_BTB_RETOP && btb_hit2_w) ? bpurastarget_w : bpu2hitaddr_w) : pcdelay + 'h8;

assign bpu1hitaddr_o  = gshare_istaken1_w ?  (((btb_op_w==`ysyx_22040210_BTB_RETOP || btb_op_w==`ysyx_22040210_BTB_CALLANDRETOP) && btb_hit1_w) 
                                                                    ? bpurastarget_w : bpu1hitaddr_w) : bpu1hitaddr_w;
assign bpu2hitaddr_o  = gshare_istaken2_w ?  (((btb_op_w==`ysyx_22040210_BTB_RETOP || btb_op_w==`ysyx_22040210_BTB_CALLANDRETOP) && btb_hit2_w) 
                                                                    ? bpurastarget_w : bpu2hitaddr_w) : bpu2hitaddr_w;

endmodule
