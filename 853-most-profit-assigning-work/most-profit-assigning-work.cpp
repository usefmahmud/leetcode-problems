class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int r = 0, n = profit.size();
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({difficulty[i], profit[i]});
        }
        sort(v.begin(), v.end());
        sort(worker.begin(), worker.end());

        int i = 0, mx = 0;
        for(auto x: worker){
            while(i < n && x >= v[i].first){
                mx = max(mx, v[i++].second);
            }
            r += mx;
        }


        return r;
    }
};