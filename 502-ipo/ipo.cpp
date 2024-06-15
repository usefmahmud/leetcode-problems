class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> vp;
        for(int i=0; i<n; i++){
            vp.push_back({profits[i], capital[i]});
        }
        sort(vp.begin(), vp.end(), [&](pair<int,int>a,pair<int,int>b){return a.second<b.second;});
        int i = 0;
        priority_queue<int> mxProfit;
        while(k){
            while(i < n && vp[i].second <= w){
                mxProfit.push(vp[i].first);
                i++;
            }

            if(!mxProfit.empty()){
                w += mxProfit.top();
                mxProfit.pop();
            }

            --k;
        }

        return w;
    }
};