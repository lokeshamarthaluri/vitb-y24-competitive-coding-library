
#include <stdio.h>
#include <stdbool.h>

typedef unsigned long long ull;

int getBit(ull n, int k) {
    return (n >> k) & 1ULL;
}

ull setBit(ull n, int k) {
    return n | (1ULL << k);
}

ull clearBit(ull n, int k) {
    return n & ~(1ULL << k);
}

ull toggleBit(ull n, int k) {
    return n ^ (1ULL << k);
}

bool isPowerOfTwo(ull n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int countSetBits(ull n) {
    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main() {
    ull n = 10;
    int k = 1;

    printf("%d\n", getBit(n, k));       // 1
    printf("%llu\n", setBit(n, k));     // 10
    printf("%llu\n", clearBit(n, k));   // 8
    printf("%llu\n", toggleBit(n, k));  // 8
    printf("%d\n", isPowerOfTwo(16));   // 1 (true)
    printf("%d\n", countSetBits(10));   // 2

    return 0;
}
