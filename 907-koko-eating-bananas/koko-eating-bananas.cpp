class Solution {
public:
    long long getSum(vector<int>& p, int h){
        long long sum = 0;
        for(auto c: p){
            sum += ceil((double)c/h);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& p, int h) {
        sort(p.begin(), p.end());
        int l = 1, r = p.back();
        long long m;
        while(l < r){
            m = (l+r)/2;
            if(getSum(p, m) <= h){
                r = m;
            }
            else{
                l = m + 1;
            }  
        }
        return l;
    }
};