class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        map<pair<int,int>, int> m;
        for(auto x: d){
            if(x[1] > x[0]) swap(x[0], x[1]);
            ++m[{x[0], x[1]}];
        }
        int r = 0;
        for(auto x: m){
            if(x.second > 1){
                r += x.second * (x.second - 1) / 2;
            }
        }
        return r;
    }
};