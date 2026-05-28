class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {

        unordered_map<int, TreeNode*> mp;
        unordered_set<int> childSet;

        for (auto &d : descriptions) {

            int parent = d[0];
            int child = d[1];
            int isLeft = d[2];

            // Create parent node if not exists
            if (mp.find(parent) == mp.end()) {
                mp[parent] = new TreeNode(parent);
            }

            // Create child node if not exists
            if (mp.find(child) == mp.end()) {
                mp[child] = new TreeNode(child);
            }

            // Connect child to parent
            if (isLeft == 1) {
                mp[parent]->left = mp[child];
            } else {
                mp[parent]->right = mp[child];
            }

            // Store child node
            childSet.insert(child);
        }

        // Find root node
        for (auto &d : descriptions) {

            int parent = d[0];

            if (childSet.find(parent) == childSet.end()) {
                return mp[parent];
            }
        }

        

        return nullptr;
    }
};