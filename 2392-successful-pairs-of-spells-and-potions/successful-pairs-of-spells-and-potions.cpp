class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long suc) {
        vector<int> res;
        sort(p.begin(), p.end());
        for(auto x: s){
            int l = 0, r = p.size()-1, m;
            while(l <= r){
                m = (l + r) / 2;
                if((long long)x * p[m] >= suc){
                    r = m-1;
                }else{
                    l = m+1;
                }
            }
            res.push_back(p.size() - r - 1);
        }

        return res;
    }
};