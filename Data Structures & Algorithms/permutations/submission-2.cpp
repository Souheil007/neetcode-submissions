class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sublist;
        vector<bool> used(nums.size(), false);

        backtrack(nums, res, sublist, used);

        return res;
    }

private:
    void backtrack(vector<int>& nums,
                   vector<vector<int>>& res,
                   vector<int>& sublist,
                   vector<bool>& used) {

        // We have chosen all numbers
        if (sublist.size() == nums.size()) {
            res.push_back(sublist);
            return;
        }

        // Try every number
        for (int j = 0; j < nums.size(); j++) {

            // Don't use a number twice
            if (used[j]) {
                continue;
            }

            // TAKE
            used[j] = true;
            sublist.push_back(nums[j]);

            backtrack(nums, res, sublist, used);

            // UNDO
            sublist.pop_back();
            used[j] = false;
        }
    }
};
