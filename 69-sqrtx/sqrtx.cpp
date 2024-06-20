class Solution {
public:
    int mySqrt(int x) {
        long long l = 1, r = x, m;
        int res = 0;
        while(l <= r){
            m = (l + r) / 2;
            if(m * m <= x){
                res = m;
                l = m + 1;
            }else{
                r = m - 1;
            }
        }

        return res;
    }
};