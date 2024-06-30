class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for(auto x: s) ++m[x];
        int r = s.length();
        for(auto x: m){
            if(x.second == 1){
                r = min(r, (int)s.find(x.first));
                // cout<<s.find(x.first)<<endl;
            }
        }

        return r == s.length() ? -1 : r;
    }
};