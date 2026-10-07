class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();

        vector<int> dp(n + 1, 0);

        dp[n] = 1;

        if (s[n - 1] != '0')
            dp[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--) {

            if (s[i] == '0')
                continue;

            // Take one digit
            dp[i] = dp[i + 1];

            // Take two digits
            int num = (s[i] - '0') * 10 + (s[i + 1] - '0');

            if (num >= 10 && num <= 26)
                dp[i] += dp[i + 2];
        }

        return dp[0];
    }
};