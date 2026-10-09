
#include <iostream>
using namespace std;

class BitManipulation {
public:

    static long long getBit(unsigned long long n, int k) {
        return (n >> k) & 1ULL;
    }

    static unsigned long long setBit(unsigned long long n, int k) {
        return n | (1ULL << k);
    }

    static unsigned long long clearBit(unsigned long long n, int k) {
        return n & ~(1ULL << k);
    }

    static unsigned long long toggleBit(unsigned long long n, int k) {
        return n ^ (1ULL << k);
    }

    static bool isPowerOfTwo(unsigned long long n) {
        return n > 0 && (n & (n - 1)) == 0;
    }

    static int countSetBits(unsigned long long n) {
        int count = 0;

        while (n > 0) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
};

int main() {
    unsigned long long n = 10;
    int k = 1;

    cout << BitManipulation::getBit(n, k) << '\n';       // 1
    cout << BitManipulation::setBit(n, k) << '\n';      // 10
    cout << BitManipulation::clearBit(n, k) << '\n';    // 8
    cout << BitManipulation::toggleBit(n, k) << '\n';   // 8
    cout << BitManipulation::isPowerOfTwo(16) << '\n';  // 1 (true)
    cout << BitManipulation::countSetBits(10) << '\n';  // 2

    return 0;
}
