`include "../npc/vsrc/include/ysyx_22040210_define.v"
module axi_master_interface(
    //Interface with AXI Gloable Chanal   
    input        wire                               clk,//ACLK
    input        wire                               rst,//ARESETn
    input        wire                               flush,//ARESETn
    //Interface with CPU Inst Fetch
    input        wire                               r_valid_i, 
    input        wire                               w_valid_i,         
    input        wire     [64-1:0]                  rw_w_data_i,        
    input        wire     [64-1:0]                  w_addr_i,        
    input        wire     [64-1:0]                  r_addr_i,  
    input        wire     [7:0]                     r_size_i,     
    input        wire     [7:0]                     w_size_i,     
    input        wire     [7:0]                     r_len_i,     
    input        wire     [7:0]                     w_len_i,
	output       reg                                r_ready_o,    
    output       reg                                w_ready_o,     
    output       reg      [64-1:0]                  data_read_o,        
    input        wire                               cache_w_last_i,
    //Interface with AXI Adress Read            Chanal
    output      reg       [10-1:0]                  axi_ar_id_o,
    output      reg       [64-1:0]                  axi_ar_addr_o,
    output      reg       [7:0]                     axi_ar_len_o,
    output      reg       [2:0]                     axi_ar_size_o,
    output      reg       [1:0]                     axi_ar_burst_o,
    output      reg                                 axi_ar_lock_o,
    output      reg       [3:0]                     axi_ar_cache_o,
    output      reg       [2:0]                     axi_ar_prot_o,
    output      reg       [3:0]                     axi_ar_qos_o,
    output      reg       [3:0]                     axi_ar_region_o,
    output      reg       [10-1:0]                  axi_ar_user_o,
    output      reg                                 axi_ar_valid_o, 
    input       wire                                axi_ar_ready_i,  
    //Interface with AXI Date   Read            Chanal
    input       wire      [10-1:0]                  axi_r_id_i,
    input       wire      [64-1:0]                  axi_r_data_i,
    input       wire      [1:0]                     axi_r_resp_i,
    input       wire                                axi_r_last_i,
    input       wire      [10-1:0]                  axi_r_user_i,
    input       wire                                axi_r_valid_i,
    output      reg                                 axi_r_ready_o,
    //Interface with AXI Adress Write           Chanal
    output      reg       [10-1:0]                  axi_aw_id_o,
    output      reg       [64-1:0]                  axi_aw_addr_o,
    output      reg       [7:0]                     axi_aw_len_o,
    output      reg       [2:0]                     axi_aw_size_o,
    output      reg       [1:0]                     axi_aw_burst_o,
    output      reg                                 axi_aw_lock_o,
    output      reg       [3:0]                     axi_aw_cache_o,
    output      reg       [2:0]                     axi_aw_prot_o,
    output      reg       [3:0]                     axi_aw_qos_o,
    output      reg       [3:0]                     axi_aw_region_o,
    output      reg       [10-1:0]                  axi_aw_user_o,
    output      reg                                 axi_aw_valid_o, 
    input       wire                                axi_aw_ready_i,  
    //Interface with AXI Date   Write           Chanal
    output      reg       [64-1:0]                  axi_w_data_o,
    output      reg       [64/8-1:0]                axi_w_strb_o,
    output      reg                                 axi_w_last_o,
    output      reg       [10-1:0]                  axi_w_user_o,
    output      reg                                 axi_w_valid_o,
    input       wire                                axi_w_ready_i,
    //Interface with AXI Date   Write Response  Chanal
    input       wire      [10-1:0]                  axi_b_id_i,
    input       wire      [1:0]                     axi_b_resp_i,
    input       wire      [10-1:0]                  axi_b_user_i,
    input       wire                                axi_b_valid_i,
    output                                          axi_b_ready_o
);
wire iswburst = (axi_aw_len_o != 0);
//assign iswburst=0;
assign axi_b_ready_o =1;

    always @(*) begin
        axi_ar_id_o         = 'b0;
        axi_ar_lock_o       = 1'b0;   
        axi_ar_prot_o       = 1'b0;//`AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
        axi_ar_qos_o        = 4'h0; 
        axi_ar_region_o     = 4'h0; 
        axi_ar_user_o       = 'b0;
        axi_aw_id_o         = 'b0;
        axi_aw_lock_o       = 1'b0;       
        axi_aw_prot_o       = 1'b0;//`AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
        axi_aw_qos_o        = 4'h0;     
        axi_aw_region_o     = 4'h0;
        axi_aw_user_o       = 'b0;
        axi_w_user_o        = 'b0;
        axi_w_last_o        = 1'b1;    
    end
    // ------------------Write Transaction------------------\
  
    reg[2:0] wcurrent_state;
    reg[2:0] wnext_state;
    always@(posedge clk)begin
        if(rst == `ysyx_22040210_RstEnable || flush == `ysyx_22040210_True)begin
            wcurrent_state <= `AXI_IDLE;
        end else begin
            wcurrent_state <= wnext_state;
        end
    end

    always@(*)begin
        if(rst == `ysyx_22040210_RstEnable || flush == `ysyx_22040210_True)begin
            wnext_state = `AXI_IDLE;
        end else begin
            case(wcurrent_state)
            `AXI_IDLE: begin
                if(w_valid_i == `ysyx_22040210_True)begin
                    wnext_state = `AWREADY;
                end else begin
                    wnext_state = `AXI_IDLE;
                end
            end
            `AWREADY:  begin
                if(axi_aw_ready_i == `ysyx_22040210_True)begin
                    wnext_state = `WREADY;
                end else begin
                    wnext_state = `AWREADY;
                end
            end
            `WREADY:   begin
                // if(axi_w_ready_i == `ysyx_22040210_True 
                //     && cache_w_last_i == `ysyx_22040210_True)begin
                if(axi_w_ready_i == `ysyx_22040210_True)begin
                    wnext_state = `BVALID; 
                end else begin
                    wnext_state = `WREADY;
                end
            end
            `BVALID:   begin
                //if(axi_b_valid_i == `ysyx_22040210_True )begin//w_ready_o
                if(w_ready_o == `ysyx_22040210_True )begin    
                    wnext_state = `AXI_IDLE; 
                end else begin
                    wnext_state = `BVALID; 
                end
            end
            default: wnext_state = `AXI_IDLE;
            endcase
        end
    end
    

    always@(posedge clk)begin  
        if(rst == `ysyx_22040210_RstEnable || flush == `ysyx_22040210_True)begin
            //Interface with AXI Adress Write Chanal
            axi_aw_len_o    <=  w_len_i;//uncertain
            axi_aw_size_o   <=  7'b0;
            axi_aw_burst_o  <=  `AXI_BURST_TYPE_INCR; 
            axi_aw_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
            axi_aw_valid_o  <=  `ysyx_22040210_False;
            axi_aw_addr_o   <=  'b0;
            //Interface with AXI Date  Write Chanal
            axi_w_strb_o    <=  7'b0;
            //axi_w_last_o    <=  `ysyx_22040210_False;
            axi_w_valid_o   <=  `ysyx_22040210_False;
            axi_w_data_o    <=  `ysyx_22040210_ZeroWord;
            w_ready_o       <= `ysyx_22040210_False;
        end else begin
            case(wcurrent_state)
            `AXI_IDLE: begin  
                w_ready_o       <= `ysyx_22040210_False;
                if(w_valid_i == `ysyx_22040210_True)begin
                    //Interface with AXI Adress Write Chanal
                    if (w_size_i == 8'b0001 || w_size_i == 8'b0010 || w_size_i == 8'b0100 || w_size_i == 8'b1000 ||
                        w_size_i == 8'b00010000 || w_size_i == 8'b00100000 || w_size_i == 8'b01000000 || w_size_i == 8'b10000000) begin
                        axi_aw_size_o   <=  3'b000;
                    end else if (w_size_i == 8'b00000011 || w_size_i == 8'b00001100 ||w_size_i == 8'b11000000 || w_size_i == 8'b00110000) begin
                        axi_aw_size_o   <=  3'b001;
                    end else if (w_size_i == 8'b00001111 || w_size_i == 8'b11110000)begin
                        axi_aw_size_o   <=  3'b010;
                    end else 
                        axi_aw_size_o   <=  3'b011;
                    axi_aw_len_o    <=  w_len_i;//uncertain
                    //axi_aw_size_o   <=  w_size_i;
                    axi_aw_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_aw_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_aw_valid_o  <=  `ysyx_22040210_True;
                    axi_aw_addr_o   <=  w_addr_i;
                    //Interface with AXI Date  Write Chanal
                    axi_w_strb_o    <=  w_size_i;
                    //axi_w_last_o    <=  `ysyx_22040210_False;
                end else begin
                    //Interface with AXI Adress Write Chanal
                    axi_aw_len_o    <=  w_len_i;//uncertain
                    axi_aw_size_o   <=  w_size_i;
                    axi_aw_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_aw_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_aw_valid_o  <=  `ysyx_22040210_False;
                    axi_aw_addr_o   <=  `ysyx_22040210_ZeroWord;
                    //Interface with AXI Date  Write Chanal
                    axi_w_strb_o    <=  w_size_i;
                 //   axi_w_last_o    <=  `ysyx_22040210_False;
                end
                    
            end
            `AWREADY:  begin
                if(axi_aw_ready_i == `ysyx_22040210_True)begin
                    //Interface with AXI Adress Write Chanal
                    axi_aw_len_o    <=  w_len_i;//uncertain
                    axi_aw_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_aw_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_aw_valid_o  <=  `ysyx_22040210_False;
                    

                    //Interface with AXI Date  Write Chanal
                    axi_w_valid_o   <=  `ysyx_22040210_True;
                    axi_w_data_o    <=  rw_w_data_i;
                //    axi_w_last_o    <=  `ysyx_22040210_True;
                end else begin
                    //Interface with AXI Adress Write Chanal
                    axi_aw_len_o    <=  w_len_i;//uncertain
                    axi_aw_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_aw_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_aw_valid_o  <=  `ysyx_22040210_True;
                    //Interface with AXI Date  Write Chanal
                    axi_w_valid_o   <=  `ysyx_22040210_False;
                    axi_w_data_o    <=  rw_w_data_i;
                //    axi_w_last_o    <=  `ysyx_22040210_False;
                end
            end
            `WREADY:   begin
            
                w_ready_o      <= axi_w_ready_i;
                
                if(axi_w_ready_i == `ysyx_22040210_True 
                    && cache_w_last_i == `ysyx_22040210_True 
                    && axi_w_valid_o == `ysyx_22040210_True
                    && iswburst == `ysyx_22040210_True)begin
                        
                    axi_w_valid_o <= `ysyx_22040210_False;
                    axi_w_data_o  <= rw_w_data_i;
             //       axi_w_last_o  <= `ysyx_22040210_False;    
                    
                end else if (axi_w_ready_i == `ysyx_22040210_True&& iswburst == `ysyx_22040210_True) begin//reassert wvalid for burst
                    axi_w_valid_o   <=  `ysyx_22040210_True;
                    axi_w_data_o    <=  rw_w_data_i;
             //       axi_w_last_o    <= `ysyx_22040210_True;
                end else begin
                    axi_w_valid_o   <=  axi_w_valid_o;
                    axi_w_data_o    <=  axi_w_data_o;
            //        axi_w_last_o    <=  axi_w_last_o;
                end
            end
            `BVALID:   begin
                w_ready_o       <= `ysyx_22040210_False;
                axi_w_valid_o <= `ysyx_22040210_False;
             //   axi_w_last_o  <= `ysyx_22040210_False;    
                axi_w_strb_o  <=  4'b1111;
                //axi_aw_size_o <=  3'b100;
                  
            end
            default:begin
            end

            endcase
            
        end
    end          
    

    // ------------------Read Transaction------------------
    reg[2:0] rcurrent_state;
    reg[2:0] rnext_state;
 
   
    // Read address channel signals
    always@(posedge clk)begin
        if(rst == `ysyx_22040210_RstEnable || flush == `ysyx_22040210_True)begin
            rcurrent_state <= `AXI_IDLE;
        end else begin
            rcurrent_state <= rnext_state;
        end
    end
    
    //next state
    always@(*)begin
        if(rst == `ysyx_22040210_RstEnable || flush == `ysyx_22040210_True)begin
            rnext_state = `AXI_IDLE;
        end else begin
            case(rcurrent_state)
            `AXI_IDLE: begin
                if(r_valid_i == `ysyx_22040210_True)begin
                    rnext_state = `ARREADY;
                end else begin
                    rnext_state = `AXI_IDLE;
                end
            end
            `ARREADY:  begin
                if(axi_ar_ready_i == `ysyx_22040210_True)begin
                    rnext_state = `RVALID;
                end else begin
                    rnext_state = `ARREADY;
                end
            end
            `RVALID:   begin
                if(axi_r_valid_i == `ysyx_22040210_False 
                    && axi_r_ready_o == `ysyx_22040210_False 
                    && r_ready_o == `ysyx_22040210_True)begin
                    rnext_state = `AXI_IDLE;
                end else begin
                    rnext_state = `RVALID;
                end
            end
            default: rnext_state = `AXI_IDLE;
            endcase
        end
    end

    // Read data channel signals
    
    always@(posedge clk)begin  
        if(rst == `ysyx_22040210_RstEnable || flush == `ysyx_22040210_True)begin
            //Interface with AXI Adress Write Chanal
            axi_ar_len_o    <=  r_len_i;//uncertain
            axi_ar_size_o   <=  7'b0;
            axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR; 
            axi_ar_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
            axi_ar_valid_o  <=  `ysyx_22040210_False;
            axi_ar_addr_o   <=  7'b0;
            //Interface with AXI Date  Write Chanal
           // axi_r_strb_o    <=  r_size_i;
            axi_r_ready_o   <=  `ysyx_22040210_False;
            r_ready_o      <=  `ysyx_22040210_False;
            data_read_o     <=  `ysyx_22040210_ZeroWord;
        end else begin
            case(rcurrent_state)
            `AXI_IDLE: begin         
                axi_r_ready_o   <=  `ysyx_22040210_False;                                                                  
                data_read_o     <=  data_read_o;
                r_ready_o      <=  `ysyx_22040210_False;
                if( r_valid_i == `ysyx_22040210_True)begin
                    //Interface with AXI Adress Read            Chanal
                    axi_ar_len_o    <= r_len_i;//uncertain;   
                    

                    if (r_size_i == 8'b0001 || r_size_i == 8'b0010 || r_size_i == 8'b0100 || r_size_i == 8'b1000 ||
                        r_size_i == 8'b00010000 || r_size_i == 8'b00100000 || r_size_i == 8'b01000000 || r_size_i == 8'b10000000) begin
                        axi_ar_size_o   <=  3'b000;
                    end else if (r_size_i == 8'b00000011 || r_size_i == 8'b00001100 ||r_size_i == 8'b11000000 || r_size_i == 8'b00110000) begin
                        axi_ar_size_o   <=  3'b001;
                    end else if (r_size_i == 8'b00001111 || r_size_i == 8'b11110000)begin
                        axi_ar_size_o   <=  3'b010;
                    end else 
                        axi_ar_size_o   <=  3'b011;

                    //axi_ar_size_o   <=  3'b011;//r_size_i;
                    
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_ar_cache_o  <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <= `ysyx_22040210_True;
                    axi_ar_addr_o   <= r_addr_i; 
                end else begin  
                    axi_ar_len_o    <= r_len_i;//uncertain;     
                    axi_ar_size_o   <=  r_size_i;
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR; 
                    axi_ar_cache_o  <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <= `ysyx_22040210_False;
                    axi_ar_addr_o   <= `ysyx_22040210_ZeroWord; 
                end
            end
            `ARREADY:  begin
                if(axi_ar_ready_i == `ysyx_22040210_True)begin  //
                //Interface with AXI Adress Read            Chanal
                    axi_ar_addr_o   <=  `ysyx_22040210_ZeroWord;
                    axi_ar_len_o    <=  r_len_i;//uncertain
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR;
                    axi_ar_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <=  `ysyx_22040210_False;
                //Interface with AXI Date   Read            Chanal
                    axi_r_ready_o   <=  `ysyx_22040210_True;
                end else begin
                    axi_ar_addr_o   <=  axi_ar_addr_o;
                    axi_ar_len_o    <=  r_len_i;//uncertain
                    axi_ar_burst_o  <=  `AXI_BURST_TYPE_INCR;
                    axi_ar_cache_o  <=  `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
                    axi_ar_valid_o  <=  `ysyx_22040210_True;
                //Interface with AXI Date   Read            Chanal
                    axi_r_ready_o   <=  `ysyx_22040210_False;
                end
            end
            `RVALID:  begin
                
                if(axi_r_valid_i == `ysyx_22040210_True 
                    && axi_r_last_i == `ysyx_22040210_True
                    && axi_r_ready_o == `ysyx_22040210_True)begin
                    r_ready_o <= axi_r_valid_i;
                    data_read_o <= axi_r_data_i;
                    axi_r_ready_o <= `ysyx_22040210_False;
                    //rresp<= axi_r_resp_i   ; 
                end else if((axi_ar_len_o!=0)&&axi_r_valid_i == `ysyx_22040210_True) begin
                    data_read_o <= axi_r_data_i;
                    r_ready_o <= axi_r_valid_i;
                end else if(axi_r_valid_i == `ysyx_22040210_False //read response
                    && axi_r_ready_o == `ysyx_22040210_False 
                    && r_ready_o == `ysyx_22040210_True) begin 
                    r_ready_o  <= `ysyx_22040210_False;
                     //           <= axi_r_resp_i   ;           
                end
            end
            default:;
            endcase
            
        end
    end




endmodule
