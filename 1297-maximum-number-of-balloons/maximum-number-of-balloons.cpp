class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        string word = "balloon";
        int r = 0;
        for(char c: text) ++m[c];
        while(m['b'] && m['a'] && m['l']>1 && m['o']>1 && m['n']){
            r++;
            for(char c: word) --m[c];
        }

        return r;
    }
};