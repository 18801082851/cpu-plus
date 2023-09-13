`include "../npc/vsrc/include/ysyx_22040210_define.v"
 module ysyx_22040210_ctrl (
    input   wire                                        rst,
    input   wire                                        ctrl_stall_cachereq_i,
    input   wire                                        ctrl_stall_idreq_i,
    input   wire                                        ctrl_stall_exreq_i,
    input   wire                                        ctrl_stall_memreq_i,
    input   wire                                        ctrl_ex_isjump,
    input   wire                                        ctrl_mem_isjump,
    output  reg         [5:0]                           stall,
    output  reg         [5:0]                           flush
 );

    always @(*) begin
        if(rst == `ysyx_22040210_RstEnable)begin
            flush = 6'b000000;
        end else if(ctrl_mem_isjump == `ysyx_22040210_IsJump)begin
            flush = 6'b001111;
        end else if(ctrl_ex_isjump == `ysyx_22040210_IsJump)begin
            flush = 6'b000111;
        end  else begin
            flush = 6'b000000;
        end
    end

    always @(*) begin
        if(rst == `ysyx_22040210_RstEnable)begin
            stall = 6'b000000;
        end else if(ctrl_stall_memreq_i == `ysyx_22040210_StallEnable)begin
            stall = 6'b011111;	
        end else if(ctrl_stall_exreq_i == `ysyx_22040210_StallEnable)begin
            stall = 6'b001111;	
        end else if(ctrl_stall_idreq_i == `ysyx_22040210_StallEnable)begin
            stall = 6'b000111;
        end else if(ctrl_stall_cachereq_i == `ysyx_22040210_StallEnable)begin
            stall = 6'b000001;
        end else begin
            stall = 6'b000000;
        end
    end

endmodule
