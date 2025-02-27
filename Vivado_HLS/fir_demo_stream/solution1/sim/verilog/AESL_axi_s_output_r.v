// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

`define TV_OUT_output_r_TDATA "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_data_V.dat"
`define TV_OUT_output_r_TKEEP "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_keep_V.dat"
`define TV_OUT_output_r_TSTRB "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_strb_V.dat"
`define TV_OUT_output_r_TLAST "../tv/rtldatafile/rtl.sha256d.autotvout_output_V_last_V.dat"

`define AUTOTB_TRANSACTION_NUM 1

module AESL_axi_s_output_r (
    input clk,
    input reset,
    input [256 - 1:0] TRAN_output_r_TDATA,
    input [32 - 1:0] TRAN_output_r_TKEEP,
    input [32 - 1:0] TRAN_output_r_TSTRB,
    input TRAN_output_r_TLAST,
    input TRAN_output_r_TVALID,
    output TRAN_output_r_TREADY,
    input ready,
    input done,
    output [31:0] transaction);

    wire TRAN_output_r_TVALID_temp;
    wire output_r_TDATA_full;
    wire output_r_TDATA_empty;
    reg output_r_TDATA_write_en;
    reg [256 - 1:0] output_r_TDATA_write_data;
    reg output_r_TDATA_read_en;
    wire [256 - 1:0] output_r_TDATA_read_data;
    
    fifo #(1, 256) fifo_output_r_TDATA (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(output_r_TDATA_write_en),
        .write_data(output_r_TDATA_write_data),
        .read_clock(clk),
        .read_en(output_r_TDATA_read_en),
        .read_data(output_r_TDATA_read_data),
        .full(output_r_TDATA_full),
        .empty(output_r_TDATA_empty));
    
    always @ (*) begin
        output_r_TDATA_write_en <= TRAN_output_r_TVALID;
        output_r_TDATA_write_data <= TRAN_output_r_TDATA;
        output_r_TDATA_read_en <= 0;
    end
    wire output_r_TKEEP_full;
    wire output_r_TKEEP_empty;
    reg output_r_TKEEP_write_en;
    reg [32 - 1:0] output_r_TKEEP_write_data;
    reg output_r_TKEEP_read_en;
    wire [32 - 1:0] output_r_TKEEP_read_data;
    
    fifo #(1, 32) fifo_output_r_TKEEP (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(output_r_TKEEP_write_en),
        .write_data(output_r_TKEEP_write_data),
        .read_clock(clk),
        .read_en(output_r_TKEEP_read_en),
        .read_data(output_r_TKEEP_read_data),
        .full(output_r_TKEEP_full),
        .empty(output_r_TKEEP_empty));
    
    always @ (*) begin
        output_r_TKEEP_write_en <= TRAN_output_r_TVALID;
        output_r_TKEEP_write_data <= TRAN_output_r_TKEEP;
        output_r_TKEEP_read_en <= 0;
    end
    wire output_r_TSTRB_full;
    wire output_r_TSTRB_empty;
    reg output_r_TSTRB_write_en;
    reg [32 - 1:0] output_r_TSTRB_write_data;
    reg output_r_TSTRB_read_en;
    wire [32 - 1:0] output_r_TSTRB_read_data;
    
    fifo #(1, 32) fifo_output_r_TSTRB (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(output_r_TSTRB_write_en),
        .write_data(output_r_TSTRB_write_data),
        .read_clock(clk),
        .read_en(output_r_TSTRB_read_en),
        .read_data(output_r_TSTRB_read_data),
        .full(output_r_TSTRB_full),
        .empty(output_r_TSTRB_empty));
    
    always @ (*) begin
        output_r_TSTRB_write_en <= TRAN_output_r_TVALID;
        output_r_TSTRB_write_data <= TRAN_output_r_TSTRB;
        output_r_TSTRB_read_en <= 0;
    end
    wire output_r_TLAST_full;
    wire output_r_TLAST_empty;
    reg output_r_TLAST_write_en;
    reg [1 - 1:0] output_r_TLAST_write_data;
    reg output_r_TLAST_read_en;
    wire [1 - 1:0] output_r_TLAST_read_data;
    
    fifo #(1, 1) fifo_output_r_TLAST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(output_r_TLAST_write_en),
        .write_data(output_r_TLAST_write_data),
        .read_clock(clk),
        .read_en(output_r_TLAST_read_en),
        .read_data(output_r_TLAST_read_data),
        .full(output_r_TLAST_full),
        .empty(output_r_TLAST_empty));
    
    always @ (*) begin
        output_r_TLAST_write_en <= TRAN_output_r_TVALID;
        output_r_TLAST_write_data <= TRAN_output_r_TLAST;
        output_r_TLAST_read_en <= 0;
    end
    assign TRAN_output_r_TVALID = TRAN_output_r_TVALID_temp;

    
    assign TRAN_output_r_TREADY = ~(output_r_TDATA_full || output_r_TKEEP_full || output_r_TSTRB_full || output_r_TLAST_full);
    
    function is_blank_char(input [7:0] in_char);
        if (in_char == " " || in_char == "\011" || in_char == "\012" || in_char == "\015") begin
            is_blank_char = 1;
        end else begin
            is_blank_char = 0;
        end
    endfunction
    
    function [1303:0] read_token(input integer fp);
        integer ret;
        begin
            read_token = "";
                    ret = 0;
                    ret = $fscanf(fp,"%s",read_token);
        end
    endfunction
    
    function [1303:0] rm_0x(input [1303:0] token);
        reg [1303:0] token_tmp;
        integer i;
        begin
            token_tmp = "";
            for (i = 0; token[15:0] != "0x"; token = token >> 8) begin
                token_tmp = (token[7:0] << (8 * i)) | token_tmp;
                i = i + 1;
            end
            rm_0x = token_tmp;
        end
    endfunction
    
    reg done_1;
    
    always @ (posedge clk or reset) begin
        if (~reset) begin
            done_1 <= 0;
        end else begin
            done_1 <= done;
        end
    end
    
    reg [31:0] transaction_save_output_r_TDATA;
    
    assign transaction = transaction_save_output_r_TDATA;
    
    initial begin : AXI_stream_receiver_output_r_TDATA
        integer fp;
        reg [256 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_output_r_TDATA = 0;
        fifo_output_r_TDATA.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_output_r_TDATA, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_output_r_TDATA);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_output_r_TDATA);
                while (~fifo_output_r_TDATA.empty) begin
                    fifo_output_r_TDATA.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_output_r_TDATA = transaction_save_output_r_TDATA + 1;
                fifo_output_r_TDATA.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_output_r_TKEEP;
    
    initial begin : AXI_stream_receiver_output_r_TKEEP
        integer fp;
        reg [32 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_output_r_TKEEP = 0;
        fifo_output_r_TKEEP.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_output_r_TKEEP, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_output_r_TKEEP);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_output_r_TKEEP);
                while (~fifo_output_r_TKEEP.empty) begin
                    fifo_output_r_TKEEP.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_output_r_TKEEP = transaction_save_output_r_TKEEP + 1;
                fifo_output_r_TKEEP.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_output_r_TSTRB;
    
    initial begin : AXI_stream_receiver_output_r_TSTRB
        integer fp;
        reg [32 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_output_r_TSTRB = 0;
        fifo_output_r_TSTRB.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_output_r_TSTRB, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_output_r_TSTRB);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_output_r_TSTRB);
                while (~fifo_output_r_TSTRB.empty) begin
                    fifo_output_r_TSTRB.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_output_r_TSTRB = transaction_save_output_r_TSTRB + 1;
                fifo_output_r_TSTRB.clear();
                $fclose(fp);
            end
        end
    end
    
    reg [31:0] transaction_save_output_r_TLAST;
    
    initial begin : AXI_stream_receiver_output_r_TLAST
        integer fp;
        reg [1 - 1:0] data;
        reg [8 * 5:1] str;
        
        transaction_save_output_r_TLAST = 0;
        fifo_output_r_TLAST.clear();
        wait (reset === 1);
        forever begin
            @ (negedge clk);
            if (done_1 == 1) begin
                fp = $fopen(`TV_OUT_output_r_TLAST, "a");
                if (fp == 0) begin // Failed to open file
                    $display("ERROR: Failed to open file \"%s\"!", `TV_OUT_output_r_TLAST);
                    $finish;
                end
                $fdisplay(fp, "[[transaction]] %d", transaction_save_output_r_TLAST);
                while (~fifo_output_r_TLAST.empty) begin
                    fifo_output_r_TLAST.pop(data);
                    $fdisplay(fp, "0x%x", data);
                end
                $fdisplay(fp, "[[/transaction]]");
                transaction_save_output_r_TLAST = transaction_save_output_r_TLAST + 1;
                fifo_output_r_TLAST.clear();
                $fclose(fp);
            end
        end
    end

endmodule
