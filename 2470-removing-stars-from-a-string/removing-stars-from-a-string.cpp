class Solution {
public:
    string removeStars(string s) {
        string r="";
        for(int i=0; i<s.length(); i++){
            if(s[i] != '*'){
                r+=s[i];
            }else{
                r.pop_back();
            }
        }

        return r;
    }
};