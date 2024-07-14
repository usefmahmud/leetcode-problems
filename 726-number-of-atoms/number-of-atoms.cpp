class Solution {
public:
    string countOfAtoms(string f) {
        stack<map<string,int>> stk;
        map<string, int> curr;
        int i = 0, n = f.length();
        while(i < n){
            if(f[i] == '('){
                stk.push(curr),  curr = map<string,int>();
                i++;
            }else if(f[i] == ')'){
                int j = i + 1, mult = 0;
                while(j < n && isdigit(f[j])){
                    mult = mult * 10 + (f[j] - '0');
                    j++;
                }
                mult = max(mult, 1);

                for(auto x: curr){
                    stk.top()[x.first] += x.second * mult;
                }
                curr = stk.top(), stk.pop();
                
                i = j;
            }else{
                int j = i + 1, mult = 0;;
                string sub = "";
                sub += f[i];
                while(j < n && islower(f[j])){
                    sub += f[j];
                    j++;
                }

                while(j < f.size() && isdigit(f[j])){
                    mult = mult * 10 + (f[j] - '0');
                    j++;
                }
                mult = max(mult, 1), curr[sub] += mult;

                i = j;
            }
        }
        string r = "";
        for (auto x: curr) {
            r += x.first;
            if(x.second > 1){
                r += to_string(x.second);
            }
        }
        
        return r;
    }
};