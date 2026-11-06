class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        map<int, vector<int>> reversed;

        for (const auto& pair : m) {
            reversed[pair.second].push_back(pair.first);
        }

        vector<int> v;

        for (auto it = reversed.rbegin(); it != reversed.rend(); ++it) {
            for (int num : it->second) {
                v.push_back(num);
                k--;
                if (k == 0) break;
            }
            if (k == 0) break;
        }

        return v;
    }
};