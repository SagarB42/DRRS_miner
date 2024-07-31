#include "blake2.h"

uint32_t rotr(uint32_t x, uint32_t n) {
    return (x >> n) | (x << (32 - n));
}

void G(uint32_t v[16], int a, int b, int c, int d, uint32_t x, uint32_t y) {
    v[a] = v[a] + v[b] + x;
    v[d] = rotr(v[d] ^ v[a], 16);
    v[c] = v[c] + v[d];
    v[b] = rotr(v[b] ^ v[c], 12);
    v[a] = v[a] + v[b] + y;
    v[d] = rotr(v[d] ^ v[a], 8);
    v[c] = v[c] + v[d];
    v[b] = rotr(v[b] ^ v[c], 7);
}

void compress(uint32_t h[8], uint32_t m[16], uint64_t t, bool f) {
    uint32_t v[16];
    for (int i = 0; i < 8; i++) {
        v[i] = h[i];
        v[i + 8] = IV[i];
    }
    v[12] ^= t;
    v[13] ^= (t >> 32);
    v[14] ^= f ? 0xFFFFFFFF : 0x0;

    for (int i = 0; i < 10; i++) {
        G(v, 0, 4, 8, 12, m[SIGMA[i][0]], m[SIGMA[i][1]]);
        G(v, 1, 5, 9, 13, m[SIGMA[i][2]], m[SIGMA[i][3]]);
        G(v, 2, 6, 10, 14, m[SIGMA[i][4]], m[SIGMA[i][5]]);
        G(v, 3, 7, 11, 15, m[SIGMA[i][6]], m[SIGMA[i][7]]);
        G(v, 0, 5, 10, 15, m[SIGMA[i][8]], m[SIGMA[i][9]]);
        G(v, 1, 6, 11, 12, m[SIGMA[i][10]], m[SIGMA[i][11]]);
        G(v, 2, 7, 8, 13, m[SIGMA[i][12]], m[SIGMA[i][13]]);
        G(v, 3, 4, 9, 14, m[SIGMA[i][14]], m[SIGMA[i][15]]);
    }

    for (int i = 0; i < 8; i++) {
        h[i] ^= v[i] ^ v[i + 8];
    }
}

void blake2s(const uint512_t &data, uint32_t hash[8]) {
    uint32_t h[8];
    for (int i = 0; i < 8; i++) {
        h[i] = IV[i];
    }
    h[0] ^= 0x01010020;

    uint32_t m[16];
    for (int i = 0; i < 16; i++) {
        m[i] = data.range((i + 1) * 32 - 1, i * 32).to_uint();
    }

    compress(h, m, 64, false);

    for (int i = 0; i < 8; i++) {
        hash[i] = h[i];
    }
}