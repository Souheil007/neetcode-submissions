class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subsets;
        dfs(nums,subsets,res,0);
        return res;                   
    }

private : 
    void dfs(vector<int>& nums, vector<int> subsets,vector<vector<int>>& res,int i){
        if (i >= nums.size()){
            res.push_back(subsets);
            return;
        }

        subsets.push_back(nums[i]);
        dfs(nums,subsets,res,i+1);
        subsets.pop_back();
        dfs(nums,subsets,res,i+1);

    }
};
