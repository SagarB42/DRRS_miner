#include <iostream>
#include "blake2.h"
#include "ap_int.h"  // Include HLS-specific types

using namespace std;

int main() {

    // Test vectors from official BLAKE2 specification
    apuint512_t test_data[3] = {
        0x0000000000000000000000000000000000000000000000000000000000000000,
        0x6162636461626364616263646162636461626364616263646162636461626364,
        0x000102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f
    };

    apuint32_t expected_hash[3][8] = {
        {0x69217a30, 0x79908094, 0xe11121d0, 0x4255e660, 0x9a0c3a62, 0x04cb08d1, 0xb0107647, 0x5fa58fe0},
        {0x4f96e91f, 0x65f59c1a, 0x5552f961, 0x67c510aa, 0x0a8fbb8c, 0xc57b0abd, 0x95ab054e, 0x2c96716c},
        {0x0e5751c0, 0x26e541ba, 0x5113aad5, 0xec1f00f5, 0xe91f4b20, 0x90bef003, 0x0aaf53c2, 0xf1d7035b}
    };

    apuint32_t hash[8];

    for (int i = 0; i < 3; i++) {
        blake2s(test_data[i], hash);
        
        // Check if the calculated hash matches the expected hash
        bool hash_match = true;
        for (int j = 0; j < 8; j++) {
            if (hash[j] != expected_hash[i][j]) {
                hash_match = false;
                break;
            }
        }

        if (hash_match) {
            cout << "Test " << (i + 1) << " passed!" << endl;
        } else {
            cout << "Test " << (i + 1) << " failed." << endl;
            return 1; // Indicate failure
        }
    }

    return 0; // Indicate success
}
