module S011HD1P_X32Y2D128_BW(
    Q, CLK, CEN, WEN, BWEN, A, B, D
);
parameter Bits = 128;
parameter Word_Depth = 64;
parameter Add_Width = 6;
parameter Wen_Width = 128;

output reg [Bits-1:0] Q;
input                 CLK;
input                 CEN;
input                 WEN;
input [Wen_Width-1:0] BWEN;
input [Add_Width-1:0] A;
input [Add_Width-1:0] B;
input [Bits-1:0]      D;

wire cen  = CEN;
wire wen  = WEN;
wire [Wen_Width-1:0] bwen = BWEN;

reg [Bits-1:0] ram [0:Word_Depth-1];

always @(posedge CLK) begin
    if(cen && wen) begin
        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
        //$display("value is %x %x %x %x %x %x %x %x  , addr is %x\n",D[],A);
    end
    //Q <= cen && !wen ? ram[A] : {128{1'b1}};
    Q <=  ram[B] ;
end
initial begin
    $readmemb("/home/yud/Desktop/temp/cache/src/ram.patt",ram);
end
endmodule
