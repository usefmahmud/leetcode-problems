class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        int r = 0;
        for(char c: text) ++m[c];

        return min({m['b'], m['a'], m['n'], m['o']/2, m['l']/2});
    }
};