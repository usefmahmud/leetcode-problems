class Solution {
public:
    int scoreOfString(string s) {
        int r = 0;
        for(int i=1; i<s.length(); i++){
            r += abs(s[i-1] - s[i]);
        }
        return r;
    }
};