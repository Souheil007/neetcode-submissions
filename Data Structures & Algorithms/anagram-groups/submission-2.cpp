class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (int i=0; i<strs.size();i++){
            array<int, 26> zeros = {};
            for (int j=0; j<strs[i].length();j++){
                zeros[int(strs[i][j])-97]++;
            }
            string str_zeros ;
            for (int count : zeros) {
                str_zeros += to_string(count) + "#";
            }
            m[str_zeros].push_back(strs[i]);
        }
        vector<vector<string>> final;
        for (auto &it:m){
            final.push_back(it.second);
        }
        return final;
       
    
    }
};
