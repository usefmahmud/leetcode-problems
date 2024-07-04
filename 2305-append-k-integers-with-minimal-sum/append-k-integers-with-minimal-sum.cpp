class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        set<int> st(nums.begin(), nums.end());
        long long r = (long long)k * (k + 1) / 2;
        for(auto x: st){
            if(x <= k){
                r += (++k) - x;
            }
        }
        return r;
    }
};