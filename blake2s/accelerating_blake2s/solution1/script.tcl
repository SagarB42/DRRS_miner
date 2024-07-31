############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project accelerating_blake2s
set_top blake2s
add_files blake2.h
add_files blake2s.cpp
add_files -tb blake2s_tb.cpp
open_solution "solution1"
set_part {xqzu5ev-ffrb900-1-i}
create_clock -period 10 -name default
#source "./accelerating_blake2s/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
