// Happy Number
// Write an algorithm to determine if a number n is happy.
// A happy number is a number defined by the following process:
// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

#include &lt;unordered_set&gt;

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set&lt;int&gt; seen;
        while(n != 1 &amp;&amp; seen.find(n) == seen.end()) {
            seen.insert(n);
            n = getSum(n);
        }
        return n == 1;
    }
private:
    int getSum(int n) {
        int sum = 0;
        while(n) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};