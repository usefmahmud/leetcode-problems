class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> stk;
        string r = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                stk.push(r);
                r = "";
            }else if(s[i] == ')'){
                string x = stk.top();
                stk.pop();
                reverse(r.begin(), r.end());
                r = x + r;
            }else{
                r += s[i];
            }
        }
        return r;
    }
};