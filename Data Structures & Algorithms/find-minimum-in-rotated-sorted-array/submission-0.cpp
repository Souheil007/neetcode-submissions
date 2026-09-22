class Solution {
public:
    int find(vector<int> &nums,int l,int r){
        if (l == r)
            return nums[l];
        int index = (r-l)/2 + l;
        int mid = nums[index];
        if (mid > nums[r]){
            return find (nums,index+1,r);
        }
        else {
            return find (nums , l , index);
        }


    }
    int findMin(vector<int> &nums) {
        return find(nums, 0,nums.size()-1);
    }
};
