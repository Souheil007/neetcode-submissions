class Solution {
public:
    int findMin(vector<int> &nums) {
        return rfind(nums,0,nums.size()-1);
    }
    int rfind(vector<int> &nums,int l , int r){
        if(l>=r) return nums[l];
        int midindex = l + (r-l)/2;
        if(nums[midindex]<nums[r]) return rfind(nums,l,midindex);
        else return rfind(nums,midindex+1,r);
    }
};
