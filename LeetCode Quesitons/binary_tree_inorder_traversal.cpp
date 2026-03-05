// Binary Tree Inorder Traversal
// Given the root of a binary tree, return the inorder traversal of its nodes' values.

#include &lt;vector&gt;

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
    vector&lt;int&gt; inorderTraversal(TreeNode* root) {
        vector&lt;int&gt; res;
        inorder(root, res);
        return res;
    }
private:
    void inorder(TreeNode* node, vector&lt;int&gt;&amp; res) {
        if (!node) return;
        inorder(node-&gt;left, res);
        res.push_back(node-&gt;val);
        inorder(node-&gt;right, res);
    }
};