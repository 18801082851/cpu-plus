`include "../npc/vsrc/include/ysyx_22040210_define.v"
module ysyx_22040210_csr (
    //Interface with Input
    input   wire                                    clk,
    input   wire                                    rst,

    // Interface for write port
    input   wire                                    we_i,
    input   wire    [`ysyx_22040210_RegAddrBus]     waddr_i,
    input   wire    [`ysyx_22040210_RegBUS]         wdata_i,
    // Interface for read port1
    input   wire                                    re1_i,
    input   wire    [`ysyx_22040210_RegAddrBus]     raddr1_i,
    output  reg     [`ysyx_22040210_RegBUS]         rdata1_o,
    // Interface for read port2
    input   wire                                    re2_i,
    input   wire    [`ysyx_22040210_RegAddrBus]     raddr2_i,
    output  reg     [`ysyx_22040210_RegBUS]         rdata2_o

);



    reg[`ysyx_22040210_RegBUS] mtvec;
    reg[`ysyx_22040210_RegBUS] mcause;
    reg[`ysyx_22040210_RegBUS] mepc;
    reg[`ysyx_22040210_RegBUS] mstatus;
//    reg[`ysyx_22040210_RegBUS] mstatus;

always @(posedge clk ) begin
    if (rst) begin
        mstatus <=  64'ha00001800;
        mtvec   <=  `ysyx_22040210_ZeroWord;
        mcause  <=  `ysyx_22040210_ZeroWord;
        mepc    <=  `ysyx_22040210_ZeroWord;
    end else if (we_i == `ysyx_22040210_WriteEnable)begin
        case (waddr_i)
            `ysyx_22040210_ECALL:begin
                mepc    <= wdata_i;
                mcause  <= 64'd11;
            end
            `ysyx_22040210_MEPC: begin
                mepc    <= wdata_i;
            end
            `ysyx_22040210_MTVEC: begin
                mtvec <= wdata_i;
            end
            `ysyx_22040210_MCAUSE: begin
                mcause <= wdata_i;
            end
            `ysyx_22040210_MSTATUS: begin
                mstatus <= wdata_i;
            end
            default: begin end
        endcase
    end
end
always @(*) begin
        if ((raddr1_i == waddr_i ) && (we_i == `ysyx_22040210_WriteEnable) //fix data harzard
                    && (re1_i == `ysyx_22040210_ReadEnable) ) begin
            rdata1_o    =  wdata_i;   
        end else if(re1_i==`ysyx_22040210_ReadEnable)begin
        case (raddr1_i)
            `ysyx_22040210_MEPC: begin
                rdata1_o    = mepc;
            end
            `ysyx_22040210_MTVEC: begin
                rdata1_o    = mtvec;
            end
            `ysyx_22040210_MCAUSE: begin
                rdata1_o    = mcause;
            end
            `ysyx_22040210_MSTATUS: begin
                rdata1_o  = mstatus;
            end
            default: rdata1_o = `ysyx_22040210_ZeroWord;
        endcase
    end else begin
        rdata1_o = `ysyx_22040210_ZeroWord;
    end
end
always @(*) begin
        if ((raddr2_i == waddr_i ) && (we_i == `ysyx_22040210_WriteEnable) //fix data harzard
                    && (re2_i == `ysyx_22040210_ReadEnable) ) begin
            rdata2_o    =  wdata_i;   
        end else if(re2_i==`ysyx_22040210_ReadEnable)begin
        case (raddr2_i)
            `ysyx_22040210_MEPC: begin
                rdata2_o    = mepc;
            end
            `ysyx_22040210_MTVEC: begin
                rdata2_o    = mtvec;
            end
            `ysyx_22040210_MCAUSE: begin
                rdata2_o    = mcause;
            end
            `ysyx_22040210_MSTATUS: begin
                rdata2_o  = mstatus;
            end
            default: rdata2_o = `ysyx_22040210_ZeroWord;
        endcase
    end else begin
        rdata2_o = `ysyx_22040210_ZeroWord;
    end
end
endmodule
