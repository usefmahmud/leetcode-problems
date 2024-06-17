class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int r = 0;
        sort(costs.begin(), costs.end());
        for(auto x: costs){
            coins -= x;
            if(coins < 0){
                break;
            }
            r++;
        }
        return r;
    }
};