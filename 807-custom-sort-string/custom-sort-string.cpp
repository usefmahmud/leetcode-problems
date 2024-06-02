class Solution {
public:
    string customSortString(string order, string s) {
        string r = ""; int l = s.length();
        for(auto& c: order){
            for(int i=0; i<l; i++){
                if(s[i] == c){
                    r += c;
                    s[i] = '*'; 
                }
            }
        }
        for(auto& x: s){
            if(x != '*') r+= x;
        }
        return r;
    }
};