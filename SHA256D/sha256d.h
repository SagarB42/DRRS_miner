#ifndef SHA256_H
#define SHA256_H

#include <stddef.h>

#define SHA256_BLOCK_SIZE 32  // SHA256 outputs a 32 byte digest
#define SHA256_BLOCK_LENGTH 64 // SHA256 processes data in 64 byte blocks
#define SHA256_DIGEST_LENGTH 32 // SHA256 digest length is 32 bytes

typedef unsigned char BYTE;   // 8-bit byte
typedef unsigned int WORD;    // 32-bit word

typedef struct {
    BYTE data[SHA256_BLOCK_LENGTH]; // Data block being processed
    WORD datalen;                    // Current length of data
    unsigned long long bitlen;       // Total length of data in bits
    WORD state[8];                   // Intermediate hash state
} SHA256_CTX;

void sha256_init(SHA256_CTX *ctx);                           // Initialize SHA256 context
void sha256_update(SHA256_CTX *ctx, const BYTE data[], size_t len); // Update context with new data
void sha256_final(SHA256_CTX *ctx, BYTE hash[]);             // Finalize hash and produce digest
void sha256d(BYTE hash[], const BYTE data[], size_t len);    // Double SHA256

#endif  // SHA256_H
