class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> r;
        string curr = "";
        for(int i = 0; i < s.length(); i++){
            curr += s[i];
            if((i + 1) % k == 0){
                r.push_back(curr);
                curr = "";
            }
        }
        if(!curr.empty()){
            k -= curr.length();
            while(k--){
                curr += fill;
            }
            r.push_back(curr);
        }
        return r;
    }
};