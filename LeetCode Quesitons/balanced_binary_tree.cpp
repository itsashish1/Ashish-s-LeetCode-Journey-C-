// Balanced Binary Tree
// Given a binary tree, determine if it is height-balanced.
// For this problem, a height-balanced binary tree is defined as:
// a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

#include &lt;algorithm&gt;

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
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
private:
    int checkHeight(TreeNode* node) {
        if(!node) return 0;
        int left = checkHeight(node-&gt;left);
        if(left == -1) return -1;
        int right = checkHeight(node-&gt;right);
        if(right == -1) return -1;
        if(abs(left - right) &gt; 1) return -1;
        return 1 + max(left, right);
    }
};