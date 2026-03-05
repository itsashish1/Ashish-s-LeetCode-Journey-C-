// Binary Search
// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

#include &lt;vector&gt;

using namespace std;

class Solution {
public:
    int search(vector&lt;int&gt;&amp; nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left &lt;= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] &lt; target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};