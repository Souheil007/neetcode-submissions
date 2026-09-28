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
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        if (abs(right - left) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        return 1+ max(maxDepth(root->right),maxDepth(root->left));
        
    }
}; 
