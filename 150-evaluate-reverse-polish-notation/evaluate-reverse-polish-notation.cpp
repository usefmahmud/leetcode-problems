class Solution {
public:
    void evaluate(stack<int>& s, string& oper){
        int x = s.top();
        s.pop();
        int y = s.top();
        s.pop();
        if(oper == "+"){
            s.push(x + y);
        }else if(oper == "*"){
            s.push(x * y);
        }else if(oper == "-"){
            s.push(y - x);
        }else if(oper == "/"){
            s.push(y / x);
        }
    }
int evalRPN(vector<string>& tokens) {
    stack<int> stk;
    for(auto& x: tokens){
        if(stk.empty()) stk.push(stoi(x));
        else{
            if(x == "+" || x == "*" || x == "/" || x == "-"){
                evaluate(stk,x);
            }else{
                stk.push(stoi(x));
            }
        }
    }

    return stk.top();
}
};