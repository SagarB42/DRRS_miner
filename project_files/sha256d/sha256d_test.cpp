#include <stdio.h>
#include <string.h>

// Function to convert a hexadecimal string to a byte array
void hex_string_to_byte_array(const char *hex_str, uint8_t *byte_array, size_t byte_array_len) {
    for (size_t i = 0; i < byte_array_len; i++) {
        sscanf(hex_str + 2 * i, "%2hhx", &byte_array[i]);
    }
}

// Test function
void test_sha256d() {
    uint8_t input[80] = {
        0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
        0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70,
        0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
        0x79, 0x7a, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35,
        0x36, 0x37, 0x38, 0x39, 0x21, 0x40, 0x23, 0x24,
        0x25, 0x5e, 0x26, 0x2a, 0x28, 0x29, 0x5f, 0x2b,
        0x2d, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d, 0x7c, 0x5c,
        0x3a, 0x3b, 0x22, 0x27, 0x3c, 0x3e, 0x2c, 0x2e,
        0x2f, 0x3f, 0x7e, 0x60, 0x6d, 0x6e, 0x6f, 0x70,
        0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78,
        0x79, 0x7a, 0x30, 0x31
    };

    uint8_t output[32];

    // Expected double SHA-256 hash for the given input
    const char *expected_hash_str = "ecb3cadfb3da7aaeffd576be080a5d62eb7ee1a08967c89528190f790eb7cc47";
    uint8_t expected_hash[32];
    hex_string_to_byte_array(expected_hash_str, expected_hash, sizeof(expected_hash));

    // Call the SHA256D function
    sha256d(input, output);

    // Print the output hash
    printf("Double SHA-256 hash: ");
    for (int i = 0; i < 32; i++) {
        printf("%02x", output[i]);
    }
    printf("\n");

    // Compare the output hash to the expected hash
    if (memcmp(output, expected_hash, 32) == 0) {
        printf("Test passed!\n");
    } else {
        printf("Test failed!\n");
    }
}

int main() {
    printf("Running SHA256D test...\n");
    test_sha256d();
    printf("Test completed.\n");
    return 0;
}
