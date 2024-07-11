class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        map<pair<int,int>, int> m;
        for(auto x: d) ++m[make_pair(min(x[0], x[1]), max(x[0], x[1]))];
        int r = 0;
        for(auto x: m){
            if(x.second > 1){
                r += x.second * (x.second - 1) / 2;
            }
        }
        return r;
    }
};