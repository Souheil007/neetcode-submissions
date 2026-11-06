class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> m;
        for(auto x:strs){
            string sorted = x;
            sort(sorted.begin(),sorted.end());
            m[sorted].push_back(x);
        }

        for(auto i:m){
            res.push_back(i.second);
        }
        return res;

    }
  

};
