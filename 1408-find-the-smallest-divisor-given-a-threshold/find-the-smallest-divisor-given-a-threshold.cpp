class Solution {
public:
    int helper(vector<int>& n, int& d){
        int sum = 0;
        for(auto x: n){
            sum += ceil((float)x/d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int ans = 0;
        int l = 1, r = *max_element(nums.begin(), nums.end()), m;

        while(l <= r){
            m = (l + r) / 2;
            int x = helper(nums, m);
            if(x <= t){
                ans = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }

        return ans;
    }
};