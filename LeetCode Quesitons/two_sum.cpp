// Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include &lt;vector&gt;
#include &lt;unordered_map&gt;

using namespace std;

class Solution {
public:
    vector&lt;int&gt; twoSum(vector&lt;int&gt;&amp; nums, int target) {
        unordered_map&lt;int, int&gt; map;
        for(int i = 0; i &lt; nums.size(); i++) {
            int complement = target - nums[i];
            if(map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};