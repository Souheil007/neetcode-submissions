class Solution {
public:
    bool isValid(string s) {
        if (s.length()%2 !=0)return false;
        else {
            stack<int> st;
            for (char c: s){
                if( c== '('  || 
                c== '{'  || 
                c== '['){
                    st.push(c);
                }
                else {
                    if(st.empty()) return false;
                    char last = st.top();
                    if ((c == ')' && last != '(') ||
                    (c == '}' && last != '{') ||
                    (c == ']' && last != '[')) {
                    return false;
                    }
                    st.pop();
                }
            }
            if (st.empty()) return true;
        }

    }
};
