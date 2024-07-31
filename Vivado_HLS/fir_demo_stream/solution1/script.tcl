############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fir_demo_stream
set_top sha256d
add_files fir_demo_stream/sources/fir.hpp
add_files fir_demo_stream/sources/fir.cpp
add_files -tb fir_demo_stream/sources/test.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xczu5eg-fbvb900-1-e}
create_clock -period 10 -name default
config_export -format ip_catalog -rtl vhdl
source "./fir_demo_stream/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl vhdl -format ip_catalog
