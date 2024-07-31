############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type complete -dim 1 "fir_stream" filter
set_directive_interface -mode axis -register "fir_stream" input
set_directive_interface -mode s_axilite "fir_stream" filter
set_directive_interface -mode axis -register "fir_stream" output
set_directive_array_partition -type complete -dim 1 "fir_stream" signal
set_directive_interface -mode axis -register -register_mode both "sha256d" input
set_directive_interface -mode axis -register -register_mode both "sha256d" output
set_directive_array_partition -type complete -dim 1 "sha256d" input_data
set_directive_array_partition -type complete -dim 1 "sha256d" state
set_directive_array_partition -type complete -dim 1 "sha256d" data1
set_directive_array_partition -type complete -dim 1 "sha256d" data
set_directive_array_partition -type complete -dim 1 "sha256d" data2
set_directive_array_partition -type complete -dim 1 "sha256d" m
set_directive_unroll "sha256d/Load_Input"
set_directive_unroll "sha256d/Append_Zero"
set_directive_unroll "sha256d/Appened_Original_Size"
set_directive_unroll "sha256d/Store_first_block"
set_directive_unroll "sha256d/Store_second_block"
set_directive_array_partition -type complete -dim 1 "sha256d/Transfrom" m
set_directive_unroll "sha256d/Load_Message_Schedule"
set_directive_unroll "sha256d/Extend_Message_Schedule"
set_directive_pipeline "sha256d/Updates"
set_directive_unroll "sha256d/Store_Input_2"
set_directive_unroll "sha256d/Append_Zero_2"
set_directive_unroll "sha256d/Append_Orignal_Size_2"
set_directive_unroll "sha256d/Load_Message_Schedule_2"
set_directive_unroll "sha256d/Extend_Message_Schedule_2"
set_directive_pipeline "sha256d/Updates_2"
