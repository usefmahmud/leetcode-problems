class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double r = 0;
        int last = 1;
        for(auto& x: c){
            if(last > x[0]){
                r += abs(x[0] - last);
                x[0] = last;
            }
            r += x[1];
            last = x[0] + x[1];
        }

        return r / c.size();
    }
};