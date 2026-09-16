class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (auto i : nums){
            m[i]++;
        }
        vector<pair<int, int>> freq;
        for (const auto& [key, value] : m) {
            freq.push_back({value, key});
        }
        sort(freq.rbegin(), freq.rend());
        vector<int> v;
        int i=0;
        for (const auto& [count, key] : freq) {
            if (i>=k){break;}
            i++;
            v.push_back(key);
        }
        return v;
    }
};