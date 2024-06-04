class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(auto& c: s) ++m[c];
        int odd = 0, r = 0;
        for(auto& x: m){
            if(x.second % 2 == 0){
                r += x.second;
            }else{
                r += x.second-1;
                odd += 1;
            }
        }
        
        return r + (odd?1:0);
    }
};