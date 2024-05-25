class Solution {
public:
int evalRPN(vector<string>& tokens) {
    stack<int> stk;
    for(auto& x: tokens){
        if(stk.empty()) stk.push(stoi(x));
        else{
            if(x == "+" || x == "*" || x == "/" || x == "-"){
                int a = stk.top(); stk.pop();
                int b = stk.top(); stk.pop();
                if(x == "+"){
                    stk.push(a + b);
                }else if(x == "*"){
                    stk.push(a * b);
                }else if(x == "-"){
                    stk.push(b - a);
                }else if(x == "/"){
                    stk.push(b / a);
                }
            }else{
                stk.push(stoi(x));
            }
        }
    }

    return stk.top();
}
};