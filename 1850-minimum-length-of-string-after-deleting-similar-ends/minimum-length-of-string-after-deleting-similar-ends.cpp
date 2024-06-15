class Solution {
public:
    int minimumLength(string s) {
        char x = s[0];
        int i = 0, j = s.length()-1;
        if(s[i] != s[j]) return s.length();
        while(i < j){
            while(i <= j && i < s.length() && s[i] == x){
                i++;
            }
            while(i <= j && j > 0 && s[j] == x){
                j--;
            }
            if(i >= j || s[i] != s[j]){
                break;
            }
            x = s[i];
        }
        return j - i + 1;
    }
};