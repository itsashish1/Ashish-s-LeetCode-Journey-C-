// Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include &lt;vector&gt;

using namespace std;

class Solution {
public:
    int singleNumber(vector&lt;int&gt;&amp; nums) {
        int result = 0;
        for(int num : nums) {
            result ^= num;
        }
        return result;
    }
};