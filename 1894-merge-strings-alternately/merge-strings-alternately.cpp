class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string r="";
        while(i < min(word1.length(),word2.length())){
            r += word1[i];
            r += word2[i];
            i++;
        }
        for(; i<word1.length(); i++) r+=word1[i];
        for(; i<word2.length(); i++) r+=word2[i];
        return r;
    }
};