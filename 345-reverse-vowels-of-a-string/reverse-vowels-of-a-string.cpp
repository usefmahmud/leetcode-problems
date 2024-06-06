class Solution {
private:
    bool isVowel(char c){
        return (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u');
    }
public:
    string reverseVowels(string s) {
        int l=0, r=s.length()-1, n=s.length();

        while(l < r){
            if(!isVowel(s[l])) l++;
            if(!isVowel(s[r])) r--;
            if(isVowel(s[l]) && isVowel(s[r])){
                swap(s[l], s[r]);
                l++, r--;
            }
        }
        return s;
    }
};