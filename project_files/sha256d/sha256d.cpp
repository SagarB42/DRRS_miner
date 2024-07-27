#include "sha256d.h"

// SHA-256 constants
static const uint32_t K[] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
    0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
    0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
    0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
    0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
    0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
};

// SHA-256 functions
#define ROTLEFT(a,b) (((a) << (b)) | ((a) >> (32-(b))))
#define ROTRIGHT(a,b) (((a) >> (b)) | ((a) << (32-(b))))

#define CH(x,y,z) (((x) & (y)) ^ (~(x) & (z)))
#define MAJ(x,y,z) (((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)))
#define EP0(x) (ROTRIGHT(x,2) ^ ROTRIGHT(x,13) ^ ROTRIGHT(x,22))
#define EP1(x) (ROTRIGHT(x,6) ^ ROTRIGHT(x,11) ^ ROTRIGHT(x,25))
#define SIG0(x) (ROTRIGHT(x,7) ^ ROTRIGHT(x,18) ^ ((x) >> 3))
#define SIG1(x) (ROTRIGHT(x,17) ^ ROTRIGHT(x,19) ^ ((x) >> 10))

// SHA-256 transformation function
void sha256_transform(uint32_t state[8], const uint8_t data[64]) {
    uint32_t a, b, c, d, e, f, g, h, i, j, t1, t2, m[64];

    for (i = 0, j = 0; i < 16; ++i, j += 4)
        m[i] = (data[j] << 24) | (data[j + 1] << 16) | (data[j + 2] << 8) | (data[j + 3]);
    for (; i < 64; ++i)
        m[i] = SIG1(m[i - 2]) + m[i - 7] + SIG0(m[i - 15]) + m[i - 16];

    a = state[0];
    b = state[1];
    c = state[2];
    d = state[3];
    e = state[4];
    f = state[5];
    g = state[6];
    h = state[7];

    for (i = 0; i < 64; ++i) {
        t1 = h + EP1(e) + CH(e, f, g) + K[i] + m[i];
        t2 = EP0(a) + MAJ(a, b, c);
        h = g;
        g = f;
        f = e;
        e = d + t1;
        d = c;
        c = b;
        b = a;
        a = t1 + t2;
    }

    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    state[4] += e;
    state[5] += f;
    state[6] += g;
    state[7] += h;
}

// SHA-256 initialization function
void sha256_init(uint32_t state[8]) {
    state[0] = 0x6a09e667;
    state[1] = 0xbb67ae85;
    state[2] = 0x3c6ef372;
    state[3] = 0xa54ff53a;
    state[4] = 0x510e527f;
    state[5] = 0x9b05688c;
    state[6] = 0x1f83d9ab;
    state[7] = 0x5be0cd19;
}

// SHA-256 prepare function
void sha256_prepare_1(const uint8_t input[80], uint8_t data[2][64]) {
    //append the bit '1' to the message
    uint8_t data1[128];
    for (int i = 0; i < 80; i++) {
        data1[i] = input[i];
    }
    data1[80] = 0x80;

    //319 bit  '0'
    for (int i = 81; i < 128; i++) {
        data1[i] = 0x00;
    }

    //append the original length
    uint64_t length = 640;
    for (int i = 0; i < 8; i++) {
        data1[127 - i] = (length >> (i * 8)) & 0xff;
    }

    //prepare the data
    for (int i = 0; i < 64; i++) {
        data[0][i] = data1[i];
    }
    for (int i = 0; i < 64; i++) {
        data[1][i] = data1[i + 64];
    }
}

// SHA256D function
void sha256_1(const uint8_t input[80], uint32_t output[8]) {
    uint32_t hash1[8];
    sha256_init(hash1);
    uint8_t data[2][64];
    sha256_prepare_1(input, data);
    sha256_transform(hash1, data[0]);
    sha256_transform(hash1, data[1]);

    for (int i = 0; i < 8; i++) {
        output[i] = hash1[i];
    }
}

// SHA256D prepare function
void sha256_prepare_2(const uint32_t input[8], uint8_t data[64]) {
    //append the bit '1' to the message
    uint8_t data1[64];
    for (int i = 0; i < 32; i++) {
        data1[i] = (input[i / 4] >> (24 - 8 * (i % 4))) & 0xff;
    }
    data1[32] = 0x80;

    // add 192 zero bits
    for (int i = 33; i < 63; i++) {
        data1[i] = 0x00;
    }

    //append the original length
    uint64_t length = 256;
    for (int i = 0; i < 8; i++) {
        data1[63 - i] = (length >> (i * 8)) & 0xff;
    }
    //prepare the data
    for (int i = 0; i < 64; i++) {
        data[i] = data1[i];
    }
}

void sha256_2(const uint32_t input[8], uint32_t output[8]) {
    uint32_t hash1[8];
    sha256_init(hash1);
    uint8_t data[64];
    sha256_prepare_2(input, data);
    sha256_transform(hash1, data);

    for (int i = 0; i < 8; i++) {
        output[i] = hash1[i];
    }
}

void sha256d(const uint8_t input[80], uint32_t output[8]) {
    uint32_t hash1[8];
    sha256_1(input, hash1);
    sha256_2(hash1, output);
}