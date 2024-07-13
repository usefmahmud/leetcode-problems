class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto x: nums) ++m[x];
        vector<vector<int>> r;
        int n = 0;
        for(auto x: m) n = max(n, x.second);
        for(int i = 0; i < n; i++){
            vector<int> tmp;
            for(auto& x: m){
                if(x.second > 0){
                    tmp.push_back(x.first);
                    --x.second;
                }
            }
            r.push_back(tmp);
        }
        return r;
    }
};