class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int r = 0, d = 0;
        map<int,int> m;
        for(auto c: nums) ++m[c];
        for(auto x: m){
            if(x.second > 1){
                m[x.first+1] += x.second-1;
                r+=x.second-1;
            }
        }
        return r;
    }
};