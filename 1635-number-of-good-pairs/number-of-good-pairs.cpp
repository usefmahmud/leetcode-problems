class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x: nums) ++m[x];
        int r = 0;
        for(auto x: m){
            if(x.second > 1){
                r += x.second * (x.second - 1) / 2;
            }
        }

        return r;
    }
};