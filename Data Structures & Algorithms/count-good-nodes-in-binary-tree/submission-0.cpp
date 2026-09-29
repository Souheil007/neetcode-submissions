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
    int goodNodes(TreeNode* root) {
        int x = dfs(root,root->val);
        return x;
    }


public : 
    int dfs(TreeNode* root, int maxi){
        if (!root) return 0;
        int res = 0;
        if (root->val >= maxi){
            maxi = root->val ;
            res =1;
        }
        
        return res + dfs(root->left,maxi) + dfs(root->right,maxi);
        

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
