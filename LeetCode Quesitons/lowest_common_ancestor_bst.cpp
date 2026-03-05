// Lowest Common Ancestor of a Binary Search Tree
// Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.
// According to the definition of LCA on Wikipedia: "The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself)."

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root-&gt;val &gt; p-&gt;val &amp;&amp; root-&gt;val &gt; q-&gt;val) return lowestCommonAncestor(root-&gt;left, p, q);
        if(root-&gt;val &lt; p-&gt;val &amp;&amp; root-&gt;val &lt; q-&gt;val) return lowestCommonAncestor(root-&gt;right, p, q);
        return root;
    }
};