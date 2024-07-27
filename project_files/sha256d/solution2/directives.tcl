############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type complete -dim 1 "sha256d" input
set_directive_array_partition -type complete -dim 1 "sha256d" output
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
set_directive_unroll "sha256d/Store_Input_2"
set_directive_unroll "sha256d/Append_Zero_2"
set_directive_unroll "sha256d/Append_Orignal_Size_2"
set_directive_unroll "sha256d/Rewiring_Output"
