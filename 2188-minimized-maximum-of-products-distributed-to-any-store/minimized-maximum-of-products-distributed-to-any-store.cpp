class Solution {
public:
    int helper(vector<int>& q, int n, int m){
        // long long x = accumulate(q.begin(), q.end(), 0);
        // n -= ceil((double)x/m);
        for(auto x: q){
            n -= ceil((double)x/m);
        }

        return n >= 0;
    }
    int minimizedMaximum(int n, vector<int>& q) {
        sort(q.begin(), q.end());
        int res = q.back();
        int l = 1, r = q.back(), m;
        while(l <= r){
            m = (l + r) / 2;
            int x = helper(q, n, m);
            if(x == 1){
                res = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        
        return res;
    }
};