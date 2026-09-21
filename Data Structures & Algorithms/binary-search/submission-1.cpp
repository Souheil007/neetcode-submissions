class Solution {
public:
    int rsearch(vector<int>& nums, int l, int r, int target) {
        if (l > r) {
            return -1;
        }

        int mindex = (l + r) / 2;

        if (nums[mindex] == target) {
            return mindex;
        }

        if (nums[mindex] > target) {
            return rsearch(nums, l, mindex - 1, target);
        }

        return rsearch(nums, mindex + 1, r, target);
    }

    int search(vector<int>& nums, int target) {
        return rsearch(nums, 0, nums.size() - 1, target);
    }
};