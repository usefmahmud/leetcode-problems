class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.length()-1;
        while(i < j){
            if(s[i] != s[j])
                break;

            char x = s[i];
            while(i <= j && s[i] == x){
                i++;
            }
            while(i <= j && s[j] == x){
                j--;
            }
        }
        return j - i + 1;
    }
};