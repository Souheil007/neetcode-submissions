class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> m;

        int left = 0;
        int maxlen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (m.find(c) != m.end()) {
                left = max(left, m[c] + 1);
            }

            m[c] = right;

            int templen = right - left + 1;
            maxlen = max(maxlen, templen);
        }

        return maxlen;
    }
};