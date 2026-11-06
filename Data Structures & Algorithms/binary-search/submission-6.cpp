class Solution {
public:
    int search(vector<int>& nums, int target) {
        int midindex,mid;
        int j=nums.size()-1;
        int i=0;
        while(i<=j){
            midindex = j-i;
            mid = nums[midindex];
            if (target == mid)return midindex;
            else{
                if(target>mid){
                    i=midindex+1;
                }
                else j=midindex-1;
            }
        }
        return -1;
    }
};
