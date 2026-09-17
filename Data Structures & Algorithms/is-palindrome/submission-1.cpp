class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(not(isalnum(s[i]))){
                i++;
                continue;
            }
            if(not(isalnum(s[j]))){
                j--;
                continue;
            }
            if(tolower(s[i])==tolower(s[j])){
                i++;
                j--;
            }
            else{return false;}
        }
        return true;
    }
};
