class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> vectorSet;
        sort(nums.begin(), nums.end());
        int x,y;
        for (int j=0; j<nums.size()-2;j++){
            if(j>=1 && nums[j]==nums[j-1])continue;
            unordered_map<int, int> m;
            x=nums[j];
            for (int i=j+1; i<nums.size();i++){
                y=nums[i];
                if (m.find(-(x+y)) != m.end()){
                    vectorSet.insert({x,-(x + y),y});
                } 
                m.insert({y, i});
            }
        }
        for (auto vec : vectorSet) { 
            v.push_back(vec);
        }
        return v;
    }
};
