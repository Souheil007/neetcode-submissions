class Solution {
public:
    int search(vector<int>& nums, int target) {
        return rsearch(nums,0,nums.size() - 1,target);
    }
    int rsearch(vector<int>& nums, int l , int r, int target){
        if (l>r) return -1;
        int mid = (l + r) / 2;
        if (nums[mid] == target)return mid;
        if (target < nums[mid]) return rsearch(nums,l,mid-1,target);
        else return rsearch(nums,mid+1,r,target);
    }
};
