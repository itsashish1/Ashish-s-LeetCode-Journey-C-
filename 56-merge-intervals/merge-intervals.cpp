#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1: Sort intervals
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

        for (auto interval : intervals) {
            // Step 2: If no overlap
            if (result.empty() || result.back()[1] < interval[0]) {
                result.push_back(interval);
            } 
            else {
                // Step 3: Merge intervals
                result.back()[1] = max(result.back()[1], interval[1]);
            }

            
        }

        return result;
    }
};