#include "fir.hpp"
#include <stdint.h>

typedef uint8_t myuint8;
typedef uint32_t myuint32;
typedef uint64_t myuint64;

int main() {
    // Original input data (80 bytes)
    myuint8 data[80] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
        0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
        0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f,
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
        0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
        0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
        0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f
    };

    myuint32 expected_hash[8] = {
        0x852c9804, 0x4fb00507, 0x122ff63b, 0xda7b5295,
        0x66348fc2, 0x04f72b00, 0xdff1afd7, 0xb40501e4
    };

    // AXI Stream input and output
    hls::stream<ap_axiu<640, 0, 0, 0>> input_stream;
    hls::stream<ap_axiu<256, 0, 0, 0>> output_stream;

    // Prepare the input stream
    ap_axiu<640, 0, 0, 0> input_axi;
    for (int i = 0; i < 80; i++) {
        input_axi.data.range(8*(i+1)-1, 8*i) = data[i];
    }
    input_axi.last = 1;
    input_stream.write(input_axi);

    // Call the SHA-256 function
    sha256d(input_stream, output_stream);

    // Read the output
    myuint32 hash[8];
    if (!output_stream.empty()) {
        ap_axiu<256, 0, 0, 0> output_axi = output_stream.read();
        for (int i = 0; i < 8; ++i) {
            hash[i] = output_axi.data.range((i + 1) * 32 - 1, i * 32);
        }
    } else {
        std::cout << "No output data available." << std::endl;
        return 1;
    }

    // Check the result
    bool passed = true;
    for (int i = 0; i < 8; i++) {
        if (hash[i] != expected_hash[i]) {
            passed = false;
            break;
        }
    }

    if (passed) {
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }

    // Print the result and expected value
    for (int i = 0; i < 8; i++) {
        std::cout << "hash[" << i << "] = " << std::hex << hash[i] << std::endl;
        std::cout << "expected_hash[" << i << "] = " << std::hex << expected_hash[i] << std::endl;
    }

    return 0;
}
