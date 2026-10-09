
class BitManipulation {

    static getBit(n, k) {
        return (n >> BigInt(k)) & 1n;
    }

    static setBit(n, k) {
        return n | (1n << BigInt(k));
    }

    static clearBit(n, k) {
        return n & ~(1n << BigInt(k));
    }

    static toggleBit(n, k) {
        return n ^ (1n << BigInt(k));
    }

    static isPowerOfTwo(n) {
        return n > 0n && (n & (n - 1n)) === 0n;
    }

    static countSetBits(n) {
        let count = 0;

        while (n > 0n) {
            n = n & (n - 1n);
            count++;
        }

        return count;
    }
}


// Example usage
let n = 10n;
let k = 1;

console.log(BitManipulation.getBit(n, k));       // 1n
console.log(BitManipulation.setBit(n, k));       // 10n
console.log(BitManipulation.clearBit(n, k));     // 8n
console.log(BitManipulation.toggleBit(n, k));    // 8n
console.log(BitManipulation.isPowerOfTwo(16n));  // true
console.log(BitManipulation.countSetBits(10n));  // 2
