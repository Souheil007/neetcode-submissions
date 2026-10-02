class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        deque<char> d;

        backtrack(n, 0, 0, d, res);

        return res;
    }

private:
    void backtrack(int n,
                   int open,
                   int close,
                   deque<char>& d,
                   vector<string>& res) {

        // We have built a complete string
        if (d.size() == 2 * n) {
            string str(d.begin(), d.end());
            res.push_back(str);
            return;
        }

        // TAKE '('
        if (open < n) {
            d.push_back('(');

            backtrack(n, open + 1, close, d, res);

            d.pop_back();
        }

        // TAKE ')'
        if (close < open) {
            d.push_back(')');

            backtrack(n, open, close + 1, d, res);

            d.pop_back();
        }
    }
};