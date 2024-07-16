class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int r = 0;
        set<char> st;
        int i = 0, j = 1;
        int newI = 0;
        while(j < s.length()){
            if(s[j] == s[j - 1]){
                if(newI > 0){
                    i = newI;
                }
                newI = j;
            }
            j++;
            r = max(r, j - i);
        }

        return r ? r : 1;
    }
};