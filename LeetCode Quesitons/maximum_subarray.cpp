// Maximum Subarray
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// A subarray is a contiguous part of an array.

#include &lt;vector&gt;
#include &lt;algorithm&gt;

using namespace std;

class Solution {
public:
    int maxSubArray(vector&lt;int&gt;&amp; nums) {
        int max_current = nums[0];
        int max_global = nums[0];
        for(int i = 1; i &lt; nums.size(); i++) {
            max_current = max(nums[i], max_current + nums[i]);
            if(max_current &gt; max_global) {
                max_global = max_current;
            }
        }
        return max_global;
    }
};