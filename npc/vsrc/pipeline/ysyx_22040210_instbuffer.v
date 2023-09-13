`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210_instbuffer(
    //Interface with Gloabl
    input   wire                                    clk,
    input   wire                                    rst,
    input   wire                                    flush,
    //Interface with Inst Fetch Stage

    input   wire     [`ysyx_22040210_BHR_BUS]   buffer_inst1bhr_i,
    input   wire     [1:0]                         buffer_inst1pht_i,
    input   wire                                   buffer_inst1taken_i,
    input   wire     [`ysyx_22040210_InstAdderBus] buffer_inst1takenaddr_i,
    input   wire     [`ysyx_22040210_BHR_BUS]   buffer_inst2bhr_i,
    input   wire     [1:0]                         buffer_inst2pht_i,
    input   wire                                   buffer_inst2taken_i,
    input   wire     [`ysyx_22040210_InstAdderBus] buffer_inst2takenaddr_i,

    input   wire     [`ysyx_22040210_InstBus]       buffer_inst1_i,
    input   wire                                    buffer_inst1valid_i,
    input   wire     [`ysyx_22040210_InstAdderBus]  buffer_inst1_pc_i,
    input   wire     [`ysyx_22040210_InstBus]       buffer_inst2_i,
    input   wire                                    buffer_inst2valid_i,
    input   wire     [`ysyx_22040210_InstAdderBus]  buffer_inst2_pc_i,
    output  wire                                    buffer_full_o,
    //Interface with Decode Stage

    output  wire     [`ysyx_22040210_BHR_BUS]    buffer_inst1bhr_o,
    output  wire     [1:0]                          buffer_inst1pht_o,
    output  wire                                    buffer_inst1taken_o,
    output  wire     [`ysyx_22040210_InstAdderBus]  buffer_inst1takenaddr_o,

    input   wire                                    buffer_issuemode,
    input   wire                                    buffer_issueready_i,
    output  wire     [`ysyx_22040210_InstAdderBus]  buffer_inst1_pc_o,
    output  wire     [`ysyx_22040210_InstBus]       buffer_inst1_o,
    output  wire     [`ysyx_22040210_InstAdderBus]  buffer_inst2_pc_o,
    output  wire     [`ysyx_22040210_InstBus]       buffer_inst2_o,
    output  wire                                    buffer_issuevaild_o
);
//Initialize fifo for inst 
reg [`ysyx_22040210_InstBus]      buffer_inst_r   [`ysyx_22040210_InstBufferNum-1:0]; 
//Initialize fifo for pc 
reg [`ysyx_22040210_InstAdderBus] buffer_instpc_r [`ysyx_22040210_InstBufferNum-1:0]; 
//Initialize fifo for valid 
reg [`ysyx_22040210_InstBufferNum-1:0] buffer_valid_r;
// fifo control signal
reg [`ysyx_22040210_InstBufferNumLog-1:0] buffer_tailptr;
reg [`ysyx_22040210_InstBufferNumLog-1:0] buffer_headptr;

//Initialize fifo for inst 
reg [`ysyx_22040210_BHR_BUS]      buffer_instbhr_r   [`ysyx_22040210_InstBufferNum-1:0];
reg [1:0]      buffer_instpht_r   [`ysyx_22040210_InstBufferNum-1:0];
reg                               buffer_insttaken     [`ysyx_22040210_InstBufferNum-1:0];
reg [`ysyx_22040210_InstAdderBus] buffer_insttakenaddr [`ysyx_22040210_InstBufferNum-1:0];

//Pop && Push
always @(posedge clk ) begin
    if(rst || flush)begin
        buffer_headptr      <=  `ysyx_22040210_ZeroWord;
        buffer_valid_r      <=  `ysyx_22040210_ZeroWord;
    end else if (buffer_issueready_i && buffer_issuemode == `ysyx_22040210_SingleIssue) begin
        buffer_valid_r[buffer_headptr] <= `ysyx_22040210_False;
        buffer_headptr                 <= buffer_headptr + 1;
    end else if (buffer_issueready_i && buffer_issuemode == `ysyx_22040210_DualIssue) begin
        buffer_valid_r[buffer_headptr] <= `ysyx_22040210_False;
        buffer_valid_r[buffer_headptr+1] <= `ysyx_22040210_False;
        buffer_headptr                 <= buffer_headptr + 2;
    end 
    if (rst || flush) begin
        buffer_tailptr      <=  `ysyx_22040210_ZeroWord;
        //buffer_valid_r      <=  `ysyx_22040210_ZeroWord;
    end else if (buffer_inst1valid_i && buffer_inst2valid_i) begin
        buffer_valid_r[buffer_tailptr]   <= `ysyx_22040210_True;
        buffer_valid_r[buffer_tailptr+1] <= `ysyx_22040210_True;
        buffer_tailptr                   <= buffer_tailptr + 2;
    end else if (buffer_inst1valid_i && !buffer_inst2valid_i)begin
        buffer_valid_r[buffer_tailptr]   <= `ysyx_22040210_True;
        buffer_tailptr                  <= buffer_tailptr + 1;
    end
end
//Push
always @(posedge clk ) begin
    if (rst) begin
        
    end else begin
        if (buffer_inst1valid_i) begin
            buffer_inst_r   [buffer_tailptr]    <= buffer_inst1_i;
            buffer_instpc_r [buffer_tailptr]    <= buffer_inst1_pc_i;
            buffer_instbhr_r[buffer_tailptr]    <= buffer_inst1bhr_i;
            buffer_instpht_r[buffer_tailptr]    <= buffer_inst1pht_i;
            buffer_insttaken[buffer_tailptr]    <= buffer_inst1taken_i;
            buffer_insttakenaddr[buffer_tailptr]    <= buffer_inst1takenaddr_i;
        end 
        if (buffer_inst2valid_i) begin
            buffer_inst_r   [buffer_tailptr+1]  <= buffer_inst2_i;
            buffer_instpc_r [buffer_tailptr+1]  <= buffer_inst2_pc_i;
            buffer_instbhr_r[buffer_tailptr+1]  <= buffer_inst2bhr_i;
            buffer_instpht_r[buffer_tailptr+1]  <= buffer_inst2pht_i;
            buffer_insttaken[buffer_tailptr+1]  <= buffer_inst2taken_i;
            buffer_insttakenaddr[buffer_tailptr+1]  <= buffer_inst2takenaddr_i;
    end
    end
    
end

/*Output*/


assign  buffer_inst1_pc_o       = buffer_instpc_r[buffer_headptr];
assign  buffer_inst1_o          = buffer_inst_r[buffer_headptr];
assign  buffer_inst1bhr_o       = buffer_instbhr_r[buffer_headptr];
assign  buffer_inst1pht_o       = buffer_instpht_r[buffer_headptr];
assign  buffer_inst1taken_o     = buffer_insttaken[buffer_headptr];
assign  buffer_inst1takenaddr_o = buffer_insttakenaddr[buffer_headptr];
assign  buffer_inst2_pc_o       = buffer_instpc_r[buffer_headptr+1];
assign  buffer_inst2_o          = buffer_inst_r[buffer_headptr+1];
assign  buffer_issuevaild_o     = buffer_valid_r[buffer_headptr + 2];

assign  buffer_full_o           = buffer_valid_r[buffer_tailptr+4'd3];

// assign  buffer_full_o           = ((buffer_tailptr[`ysyx_22040210_InstBufferNumLog] !=buffer_headptr[`ysyx_22040210_InstBufferNumLog]) 
//                                     && (((buffer_tailptr[`ysyx_22040210_InstBufferNumLog-1:0]+4'd1)== buffer_headptr[`ysyx_22040210_InstBufferNumLog-1:0])
//                                         || ((buffer_tailptr[`ysyx_22040210_InstBufferNumLog-1:0])== buffer_headptr[`ysyx_22040210_InstBufferNumLog-1:0])));









endmodule

