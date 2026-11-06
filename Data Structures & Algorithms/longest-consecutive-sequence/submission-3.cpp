class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        int maxi=1;
        int temp=1;
        for(int i =1;i<nums.size();i++){
            if (nums[i] == nums[i-1]) {
                continue;
            }
            if(nums[i]-nums[i-1]==1)temp++;
            else{
                maxi = max(maxi,temp); 
                temp=1;
            }
        }
        maxi = max(maxi,temp); 
        return maxi;
    }
};
