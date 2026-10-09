
class BitManipulation:

    @staticmethod
    def getBit(n, k):
        return (n >> k) & 1

    @staticmethod
    def setBit(n, k):
        return n | (1 << k)

    @staticmethod
    def clearBit(n, k):
        return n & ~(1 << k)

    @staticmethod
    def toggleBit(n, k):
        return n ^ (1 << k)

    @staticmethod
    def isPowerOfTwo(n):
        return n > 0 and (n & (n - 1)) == 0

    @staticmethod
    def countSetBits(n):
        count = 0

        while n > 0:
            n = n & (n - 1)
            count += 1

        return count


# Example usage
n = 10
k = 1

print(BitManipulation.getBit(n, k))       # 1
print(BitManipulation.setBit(n, k))       # 10
print(BitManipulation.clearBit(n, k))     # 8
print(BitManipulation.toggleBit(n, k))    # 8
print(BitManipulation.isPowerOfTwo(16))   # True
print(BitManipulation.countSetBits(10))   # 2
