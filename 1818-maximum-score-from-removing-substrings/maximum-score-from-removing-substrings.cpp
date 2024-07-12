class Solution {
public:
    int maximumGain(string s, int x, int y) {
        string xc = "ab", yc = "ba";
        int r;
        if(x > y){
            r = remove(s, xc) * x;
            r += remove(s, yc) * y;
        }else{
            r = remove(s, yc) * y;
            r += remove(s, xc) * x;
        }

        return r;
    }

    int remove(string& s, string& x){
        stack<char> stk;
        int r = 0;
        for(auto c: s){
            if(stk.empty()){    
                stk.push(c);
            }else{
                if(c == x[1] && stk.top() == x[0]){
                    stk.pop();
                    r++;
                }else{
                    stk.push(c);
                }
            }
        }

        s = "";
        while(!stk.empty()){
            s += stk.top();
            stk.pop();
        }
        reverse(s.begin(), s.end());
        return r;
    }
};