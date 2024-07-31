#include "C:\Xilinx\Vivado\2020.1\include\gmp.h"
#define __gmp_const const
#include <iostream>
#include <ap_axi_sdata.h>
#include "hls_stream.h"

#include <stdint.h>
typedef uint8_t myuint8;
typedef uint32_t myuint32;
typedef uint64_t myuint64;


void sha256d(hls::stream<ap_axiu<640,0,0,0> >& input, hls::stream<ap_axiu<256,0,0,0> >& output);


