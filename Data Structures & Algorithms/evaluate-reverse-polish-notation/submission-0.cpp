class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a,b,result;
        stack<int> stck;
        for (string i:tokens){
            if(i=="+" || i== "-" || i== "*" || i=="/"){
                    a = stck.top();
                    stck.pop();
                    b = stck.top();
                    stck.pop();
                    if (i == "+") {
                    result = b + a;
                    }
                    else if (i == "-") {
                        result = b - a;
                    }
                    else if (i == "*") {
                        result = b * a;
                    }
                    else if (i == "/") {
                        result = b / a;
                    }
                    stck.push(result);
                    
            }
            else {
                stck.push(stoi(i));
            }
        }
        return stck.top();
    }
};
