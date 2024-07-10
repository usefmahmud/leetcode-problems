class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
        for(auto x: logs){
            if(x == "../"){
                if(!stk.empty()){
                    stk.pop();
                }
            }else if(x == "./"){
                continue;
            }else{
                stk.push(x);
            }
        }

        return stk.size();
    }
};