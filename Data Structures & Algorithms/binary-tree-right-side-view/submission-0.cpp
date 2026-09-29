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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        map<int,vector<int>> m;
        int res;
        dfs(root,0,m);
        for (auto e:m){
            v.push_back(e.second.back());
        }
        return v;
    }
public : 
    void dfs(TreeNode* root,int res ,map<int,vector<int>>& m){
        if (!root)
            return;

        m[res].push_back(root->val);

        dfs(root->left,res+1,m);
        dfs(root->right,res+1,m);
    }
};
