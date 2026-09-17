class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        
        set<vector<int>> vectorSet;
        int x,y;
        for (int j=0; j<nums.size()-2;j++){
            unordered_map<int, int> m;
            x=nums[j];
            for (int i=j+1; i<nums.size();i++){
                y=nums[i];
                if (m.find(-(x+y)) != m.end()){
                    vector<int> tempv;
                    tempv.push_back(x);
                    tempv.push_back(y);
                    tempv.push_back(-(x+y));
                    sort(tempv.begin(), tempv.end()); 
                    vectorSet.insert(tempv);
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
