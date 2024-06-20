class Solution {
public:
    int helper(vector<int>& q, int n, int m){
        for(auto x: q){
            n -= ceil((float)x/m);
            if(n < 0){
                return 0;
            }
        }

        return 1;
    }
    int minimizedMaximum(int n, vector<int>& q) {
        sort(q.begin(), q.end());
        int res = 0;
        int l = 1, r = q.back(), m;
        while(l <= r){
            m = (l + r) / 2;
            if(helper(q, n, m)){
                res = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        
        return res;
    }
};