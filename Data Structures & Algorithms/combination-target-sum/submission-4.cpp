class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> sublist;
        sort(nums.begin(),nums.end());
        dfs(nums,target,0,0,sublist,res);
        return res;                 
    }



public : 
    void dfs(vector<int>& nums, int target, int i , int sum , vector<int>& sublist , vector<vector<int>>& res){
        if(sum==target){
            res.push_back(sublist);
            return ;
        }

        if ( i >= nums.size() || sum>target) return ;

        sublist.push_back(nums[i]);
        dfs(nums,target,i,sum + nums[i],sublist,res);
        sublist.pop_back();
        dfs(nums,target,i+1,sum,sublist,res);

    }
};
