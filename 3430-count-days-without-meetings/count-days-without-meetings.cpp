class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        vector<pair<int,int>> a;
        for(auto& x: meetings){
            a.emplace_back(x[0],1);
            a.emplace_back(x[1]+1,-1);
        }
        sort(a.begin(), a.end());
        int started = 0, off = 0, i = 1;
        for(auto& x: a){
            if(i <= x.first - 1){
                if(!started) off += x.first - i;
                i = x.first;
            }
            
            started += x.second;
        }
        if(i <= days){
            if(!started){
                off += days - i + 1;
            }
        }
        return off;
    }
};