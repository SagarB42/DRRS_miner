// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

`define TV_IN_input_r_TDATA "../tv/cdatafile/c.sha256d.autotvin_input_V_data_V.dat"
`define TV_IN_input_r_TKEEP "../tv/cdatafile/c.sha256d.autotvin_input_V_keep_V.dat"
`define TV_IN_input_r_TSTRB "../tv/cdatafile/c.sha256d.autotvin_input_V_strb_V.dat"
`define TV_IN_input_r_TLAST "../tv/cdatafile/c.sha256d.autotvin_input_V_last_V.dat"

`define AUTOTB_TRANSACTION_NUM 1

module AESL_axi_s_input_r (
    input clk,
    input reset,
    output [640 - 1:0] TRAN_input_r_TDATA,
    output [80 - 1:0] TRAN_input_r_TKEEP,
    output [80 - 1:0] TRAN_input_r_TSTRB,
    output TRAN_input_r_TLAST,
    output TRAN_input_r_TVALID,
    input TRAN_input_r_TREADY,
    input ready,
    input done,
    output [31:0] transaction);

    wire TRAN_input_r_TVALID_temp;
    wire input_r_TDATA_full;
    wire input_r_TDATA_empty;
    reg input_r_TDATA_write_en;
    reg [640 - 1:0] input_r_TDATA_write_data;
    reg input_r_TDATA_read_en;
    wire [640 - 1:0] input_r_TDATA_read_data;
    
    fifo #(1, 640) fifo_input_r_TDATA (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(input_r_TDATA_write_en),
        .write_data(input_r_TDATA_write_data),
        .read_clock(clk),
        .read_en(input_r_TDATA_read_en),
        .read_data(input_r_TDATA_read_data),
        .full(input_r_TDATA_full),
        .empty(input_r_TDATA_empty));
    
    always @ (*) begin
        input_r_TDATA_write_en <= 0;
        input_r_TDATA_read_en <= TRAN_input_r_TREADY & TRAN_input_r_TVALID;
    end
    
    assign TRAN_input_r_TDATA = input_r_TDATA_read_data;
    wire input_r_TKEEP_full;
    wire input_r_TKEEP_empty;
    reg input_r_TKEEP_write_en;
    reg [80 - 1:0] input_r_TKEEP_write_data;
    reg input_r_TKEEP_read_en;
    wire [80 - 1:0] input_r_TKEEP_read_data;
    
    fifo #(1, 80) fifo_input_r_TKEEP (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(input_r_TKEEP_write_en),
        .write_data(input_r_TKEEP_write_data),
        .read_clock(clk),
        .read_en(input_r_TKEEP_read_en),
        .read_data(input_r_TKEEP_read_data),
        .full(input_r_TKEEP_full),
        .empty(input_r_TKEEP_empty));
    
    always @ (*) begin
        input_r_TKEEP_write_en <= 0;
        input_r_TKEEP_read_en <= TRAN_input_r_TREADY & TRAN_input_r_TVALID;
    end
    
    assign TRAN_input_r_TKEEP = input_r_TKEEP_read_data;
    wire input_r_TSTRB_full;
    wire input_r_TSTRB_empty;
    reg input_r_TSTRB_write_en;
    reg [80 - 1:0] input_r_TSTRB_write_data;
    reg input_r_TSTRB_read_en;
    wire [80 - 1:0] input_r_TSTRB_read_data;
    
    fifo #(1, 80) fifo_input_r_TSTRB (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(input_r_TSTRB_write_en),
        .write_data(input_r_TSTRB_write_data),
        .read_clock(clk),
        .read_en(input_r_TSTRB_read_en),
        .read_data(input_r_TSTRB_read_data),
        .full(input_r_TSTRB_full),
        .empty(input_r_TSTRB_empty));
    
    always @ (*) begin
        input_r_TSTRB_write_en <= 0;
        input_r_TSTRB_read_en <= TRAN_input_r_TREADY & TRAN_input_r_TVALID;
    end
    
    assign TRAN_input_r_TSTRB = input_r_TSTRB_read_data;
    wire input_r_TLAST_full;
    wire input_r_TLAST_empty;
    reg input_r_TLAST_write_en;
    reg [1 - 1:0] input_r_TLAST_write_data;
    reg input_r_TLAST_read_en;
    wire [1 - 1:0] input_r_TLAST_read_data;
    
    fifo #(1, 1) fifo_input_r_TLAST (
        .reset(1'b0),
        .write_clock(clk),
        .write_en(input_r_TLAST_write_en),
        .write_data(input_r_TLAST_write_data),
        .read_clock(clk),
        .read_en(input_r_TLAST_read_en),
        .read_data(input_r_TLAST_read_data),
        .full(input_r_TLAST_full),
        .empty(input_r_TLAST_empty));
    
    always @ (*) begin
        input_r_TLAST_write_en <= 0;
        input_r_TLAST_read_en <= TRAN_input_r_TREADY & TRAN_input_r_TVALID;
    end
    
    assign TRAN_input_r_TLAST = input_r_TLAST_read_data;
    assign TRAN_input_r_TVALID = TRAN_input_r_TVALID_temp;

    
    assign TRAN_input_r_TVALID_temp = ~(input_r_TDATA_empty || input_r_TKEEP_empty || input_r_TSTRB_empty || input_r_TLAST_empty);
    
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
    
    reg [31:0] transaction_load_input_r_TDATA;
    
    assign transaction = transaction_load_input_r_TDATA;
    
    initial begin : AXI_stream_driver_input_r_TDATA
        integer fp;
        reg [1303:0] token;
        reg [640 - 1:0] data;
        reg [1303:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_input_r_TDATA = 0;
        fifo_input_r_TDATA.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_input_r_TDATA, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_input_r_TDATA);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_input_r_TDATA.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_input_r_TDATA.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_input_r_TDATA.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_input_r_TDATA.snapshot();
                end else begin
                    fifo_input_r_TDATA.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_input_r_TDATA = transaction_load_input_r_TDATA + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_input_r_TKEEP;
    
    initial begin : AXI_stream_driver_input_r_TKEEP
        integer fp;
        reg [1303:0] token;
        reg [80 - 1:0] data;
        reg [1303:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_input_r_TKEEP = 0;
        fifo_input_r_TKEEP.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_input_r_TKEEP, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_input_r_TKEEP);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_input_r_TKEEP.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_input_r_TKEEP.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_input_r_TKEEP.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_input_r_TKEEP.snapshot();
                end else begin
                    fifo_input_r_TKEEP.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_input_r_TKEEP = transaction_load_input_r_TKEEP + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_input_r_TSTRB;
    
    initial begin : AXI_stream_driver_input_r_TSTRB
        integer fp;
        reg [1303:0] token;
        reg [80 - 1:0] data;
        reg [1303:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_input_r_TSTRB = 0;
        fifo_input_r_TSTRB.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_input_r_TSTRB, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_input_r_TSTRB);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_input_r_TSTRB.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_input_r_TSTRB.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_input_r_TSTRB.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_input_r_TSTRB.snapshot();
                end else begin
                    fifo_input_r_TSTRB.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_input_r_TSTRB = transaction_load_input_r_TSTRB + 1;
            end
        end
    end
    
    reg [31:0] transaction_load_input_r_TLAST;
    
    initial begin : AXI_stream_driver_input_r_TLAST
        integer fp;
        reg [1303:0] token;
        reg [1 - 1:0] data;
        reg [1303:0] data_integer;
        reg [8 * 5:1] str;
        integer ret;
        
        transaction_load_input_r_TLAST = 0;
        fifo_input_r_TLAST.clear();
        wait (reset === 1);
        fp = $fopen(`TV_IN_input_r_TLAST, "r");
        if (fp == 0) begin
            $display("ERROR: Failed to open file \"%s\"!", `TV_IN_input_r_TLAST);
            $finish;
        end
        token = read_token(fp);
        if (token != "[[[runtime]]]") begin
            $display("ERROR: token %s != [[[runtime]]]", token);
            $finish;
        end
        token = read_token(fp); // read 1st "[[transaction]]"
        forever begin
            @ (negedge clk);
            if (ready == 1) begin
                if (token != "[[[/runtime]]]") begin
                    if (token != "[[transaction]]") begin
                        $display("ERROR: token %s != [[[transaction]]]", token);
                        $finish;
                    end
                    token = read_token(fp); // skip transaction number
                    fifo_input_r_TLAST.clear();
                    token = read_token(fp);
                    while (token != "[[/transaction]]") begin
                        if (fifo_input_r_TLAST.full) begin
                            $display("ERROR: FIFO is full");
                            $finish;
                        end
                        ret = $sscanf(rm_0x(token), "%x", data_integer);
                        data = data_integer;
                        fifo_input_r_TLAST.push(data);
                        token = read_token(fp);
                    end
                    token = read_token(fp);
                    fifo_input_r_TLAST.snapshot();
                end else begin
                    fifo_input_r_TLAST.restore();
                    if (fp != 0) begin
                        $fclose(fp);
                        fp = 0;
                    end
                end
                transaction_load_input_r_TLAST = transaction_load_input_r_TLAST + 1;
            end
        end
    end

endmodule
