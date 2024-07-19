class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        set<int> mn, mx;
        vector<int> r;
        for(int i = 0; i < m.size(); i++){
            mn.insert(*min_element(m[i].begin(), m[i].end()));
        }

        for(int j = 0; j < m[0].size(); j++){
            int tmp_mx = 0;
            for(int i = 0; i < m.size(); i++){
                tmp_mx = max(tmp_mx, m[i][j]);
            }
            mx.insert(tmp_mx);
        }

        for(auto x: mn){
            if(mx.find(x) != mx.end()){
                r.push_back(x);
            }
        }

        return r;
    }
};