class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max =1;
        if (nums.size()==0)return 0 ;
        if (nums.size()==1)return 1 ;
        int prev = nums[0];
        int temp=1;
        int x;
        for (int i=1;i<nums.size();i++){
            x=nums[i];
            if (x-prev == 1) temp++;
            else {
                if (x-prev == 0) continue;
                else {temp=1;}
            }
            if (temp>max ) max=temp;
            prev = x;
        }
        return max;
    }
};
