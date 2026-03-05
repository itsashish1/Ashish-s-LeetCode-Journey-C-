// Symmetric Tree
// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
private:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 &amp;&amp; !t2) return true;
        if (!t1 || !t2) return false;
        return (t1-&gt;val == t2-&gt;val) &amp;&amp; isMirror(t1-&gt;right, t2-&gt;left) &amp;&amp; isMirror(t1-&gt;left, t2-&gt;right);
    }
};