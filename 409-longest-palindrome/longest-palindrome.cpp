class Solution {
public:
    int longestPalindrome(string s) {
        int freq1[26]={0};
        int freq2[26]={0};
        for(auto& c: s){
            if(c >= 'a') ++freq1[c-'a'];
            else ++freq2[c-'A'];
        }
        int odd = 0, r = 0;
        for(int i=0; i<26; i++){
            r += freq1[i]-(freq1[i]%2);
            if(freq1[i]%2) odd=1;
            
            r += freq2[i]-(freq2[i]%2);
            if(freq2[i]%2) odd=1;
        }
        
        return r + odd;
    }
};