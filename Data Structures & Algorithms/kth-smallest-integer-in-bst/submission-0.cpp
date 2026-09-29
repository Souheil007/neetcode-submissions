/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int res;
        dfs(root,k,res);
        return res;
    }

public:
    void dfs(TreeNode* root, int& k, int& res) {
        if (!root) return;

        // 1. Visit left subtree
        dfs(root->left, k, res);

        // 2. Visit current node
        k--;

        if (k == 0) {
            res = root->val;
            return;
        }

        // 3. Visit right subtree
        dfs(root->right, k, res);
    }
};
