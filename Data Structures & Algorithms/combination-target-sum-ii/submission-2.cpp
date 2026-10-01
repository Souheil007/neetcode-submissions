class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> sublist;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,0,sublist,res);
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
        dfs(nums,target,i+1,sum + nums[i],sublist,res);
        sublist.pop_back();
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }
        dfs(nums,target,i+1,sum,sublist,res);

    }
};
