class Solution {
public:
    int helper(vector<int>& c, int m, long long k){
        for(auto x: c){
            k -= (x/m);
            if(k <= 0){
                return 1;
            }
        }
        return 0;
    }
    int maximumCandies(vector<int>& c, long long k) {
        // if(c.size() == 1) return c[0] >= k;
        int ans = 0;
        int l = 1, r = *max_element(c.begin(), c.end()), m;
        while(l <= r){
            m = (l + r) / 2;
            if(helper(c, m, k)){
                ans = m;
                l = m + 1;
            }else{
                r = m - 1;
            }
        }

        return ans;
    }
};