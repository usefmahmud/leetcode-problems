class Solution {
public:
    int helper(vector<int>& b, int mid, int k){
        int c = 0, n = 0;
        for(int i = 0; i < b.size(); i++){
            if(b[i] <= mid){
                c++;
            }else{
                c = 0;
            }
            if(c == k){
                n++;
                c = 0;
            }
        }

        return n;
    }
    int minDays(vector<int>& b, int m, int k) {
        int l = 0, r = 0, mid, res = -1;
        for(auto d: b){
            r = max(r, d);
        }
        while(l <= r){
            mid = (l + r) / 2;
            if(helper(b, mid, k) >= m){
                res = mid;
                r = mid - 1;
            }else{  
                l = mid + 1;
            }
        }

        return res;
    }
};