 `include "../npc/vsrc/include/ysyx_22040210_define.v"
 `define Testbtbsize 9:2
module ysyx_22040210_btb#(
	parameter GSH_BTB_NUM = 256)
(
    input    wire                                    clk,
    input    wire                                    rst,
    input    wire                                    stall,   
    // Interface with IF Stage
    input    wire     [`ysyx_22040210_InstAdderBus]  btb_pcdelay_i,
    input    wire     [`ysyx_22040210_InstAdderBus]  btb_pc1_i,
    input    wire     [`ysyx_22040210_InstAdderBus]  btb_pc2_i,
    output   wire                                    btb_hit1_o,
    output   wire                                    btb_hit2_o,
    output   wire     [`ysyx_22040210_InstAdderBus]  btb_hitaddr1_o,
    output   wire     [`ysyx_22040210_InstAdderBus]  btb_hitaddr2_o,
    output   reg      [2:0]                          btb_op_o,
    // Interface with Commit Stage   
    input    wire     [`ysyx_22040210_InstAdderBus]  btb_fixjumpaddr_i,
    input    wire                                    btb_fixwe_i,
    input    wire     [2:0]                          btb_fixjumpop_i,
    input    wire     [`ysyx_22040210_InstAdderBus]  btb_fixpc_i    
);

reg [63:0] btb [GSH_BTB_NUM -1 : 0] ;
reg [63:0] tag [GSH_BTB_NUM -1 : 0] ;
reg [2:0] btb_op[GSH_BTB_NUM -1 : 0] ;
reg [GSH_BTB_NUM -1 : 0]btb_valid_r  ;

reg [63:0] btb_data; 
reg [63:0] btb_tag;

wire [63:0] btb_pcdelayplus4 = btb_pcdelay_i +'h4;
assign btb_hit1_o =  (btb_pcdelay_i == btb_tag) && btb_valid_r[btb_pcdelay_i[`Testbtbsize]] ? 1'b1 : 1'b0 ;
assign btb_hit2_o =  (btb_pcdelayplus4 == btb_tag) && btb_valid_r[btb_pcdelayplus4[`Testbtbsize]] ? 1'b1 : 1'b0 ;
assign btb_hitaddr1_o   = btb_hit1_o ? btb_data : `ysyx_22040210_ZeroWord;
assign btb_hitaddr2_o   = btb_hit2_o ? btb_data : `ysyx_22040210_ZeroWord;

    always @(posedge clk ) begin
        if (rst) begin
            btb_valid_r <= `ysyx_22040210_ZeroWord;
        end else if (btb_fixwe_i) begin
            btb_valid_r[btb_fixpc_i[`Testbtbsize]] <= 1'b1;
        end
    end


    always @(posedge clk ) begin
        if (btb_fixwe_i == `ysyx_22040210_True) begin
            btb[btb_fixpc_i[`Testbtbsize]] <=  btb_fixjumpaddr_i;
            btb_op[btb_fixpc_i[`Testbtbsize]] <=  btb_fixjumpop_i;
        end 
        btb_data <= (btb_fixwe_i && (btb_pc1_i[`Testbtbsize]==btb_fixpc_i[`Testbtbsize] )) ? btb_fixjumpaddr_i  :btb[btb_pc1_i[`Testbtbsize]];
        btb_op_o   <= (btb_fixwe_i && (btb_pc1_i[`Testbtbsize]==btb_fixpc_i[`Testbtbsize] )) ? btb_fixjumpop_i  :btb_op[btb_pc1_i[`Testbtbsize]];
    end
    always @(posedge clk ) begin
        if (btb_fixwe_i == `ysyx_22040210_True) begin
            tag[btb_fixpc_i[`Testbtbsize]] <=  btb_fixpc_i;
        end 
        btb_tag <= (btb_fixwe_i && (btb_pc1_i[`Testbtbsize]==btb_fixpc_i[`Testbtbsize] )) ? btb_fixpc_i  : tag[btb_pc1_i[`Testbtbsize]];
    end
endmodule
