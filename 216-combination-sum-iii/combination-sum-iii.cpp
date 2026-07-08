class Solution {
public:
    vector<vector<int>> ans;
    vector<int> v;
    void f(int i, int k, int n) {
        if (!k && !n) {
            ans.push_back(v);
            return;
        }
        if (i > 9 || k == 0 || n < 0) return;
        v.push_back(i);
        f(i + 1, k - 1, n - i);
        v.pop_back();
        f(i + 1, k, n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        f(1, k, n);
        return ans;
    }
};