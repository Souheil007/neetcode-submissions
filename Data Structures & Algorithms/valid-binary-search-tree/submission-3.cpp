class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return dfs(root, LONG_MIN, LONG_MAX);
    }

    bool dfs(TreeNode* root, long minVal, long maxVal) {
        if (!root) return true;

        if (root->val <= minVal || root->val >= maxVal)
            return false;

        return dfs(root->left, minVal, root->val) &&
               dfs(root->right, root->val, maxVal);
    }
};