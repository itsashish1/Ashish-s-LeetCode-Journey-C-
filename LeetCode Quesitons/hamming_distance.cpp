// Hamming Distance
// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
// Given two integers x and y, return the Hamming distance between them.

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_val = x ^ y;
        int count = 0;
        while(xor_val) {
            count += xor_val &amp; 1;
            xor_val &gt;&gt;= 1;
        }
        return count;
    }
};