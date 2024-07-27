#include <stdint.h>
#include <stdio.h>
#include <string.h>

// Function declarations from the SHA-256 implementation file
void sha256d(const uint8_t input[], uint8_t output[]);

// Example memory-mapped I/O
extern volatile uint8_t input_memory[80];   // Input memory location
extern volatile uint8_t output_memory[32];  // Output memory location;

void print_hash(const uint8_t hash[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");
}

int main() {
    // Initialize input_memory with a fixed 80-byte string
    const char *test_input = "The quick brown fox jumps over the lazy dog and then runs away quickly!";
    for (int i = 0; i < 80; i++) {
        input_memory[i] = (i < strlen(test_input)) ? test_input[i] : ' ';
    }

    // Call the SHA256D function
    sha256d(input_memory, output_memory);

    // Print the resulting hash
    printf("SHA256D: ");
    print_hash(output_memory, 32);

    // Verification with known value
    // Known double SHA-256 hash of the test input "The quick brown fox jumps over the lazy dog and then runs away quickly!":
    // Replace this with the actual expected hash value if known
    const uint8_t known_hash[32] = {
        0x17, 0x89, 0x44, 0x5f, 0xba, 0x4a, 0x3e, 0x17,
        0x59, 0x8b, 0x1c, 0x5f, 0x3a, 0x9b, 0x9d, 0x63,
        0xe3, 0x76, 0xad, 0x0a, 0x63, 0x5b, 0x9d, 0x24,
        0xe1, 0x53, 0xec, 0x12, 0x42, 0xaa, 0x78, 0xac
    };

    int match = 1;
    for (int i = 0; i < 32; i++) {
        if (output_memory[i] != known_hash[i]) {
            match = 0;
            break;
        }
    }

    if (match) {
        printf("Test Passed: The computed hash matches the known value.\n");
    } else {
        printf("Test Failed: The computed hash does not match the known value.\n");
    }

    return 0;
}