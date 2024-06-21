class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int sum = 0, n = c.size(), res = 0;
        for(int i = 0; i < n; i++){
            if(g[i] != 1) sum += c[i];
        }
        int l = 0, r = 0;
        while(r < m){
            if(g[r] == 1) sum += c[r];
            r++;
        }
        res = max(res, sum);
        while(r < n){
            cout<<sum<<' '<<res<<endl;
            if(g[r] == 1) sum += c[r];

            if(g[l] == 1) sum -= c[l];
            res = max(res, sum);
            r++,l++; 
        }

        return res;
    }
};