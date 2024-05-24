class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r=0;
        int i=0,j=1;
        while(i<prices.size()-1 && j<prices.size()){
            if(prices[j] < prices[i]){
                j++;
                while(i<j-1) i++;
            }else{
                r = max(r, prices[j] - prices[i]);
                j++;
            }
        }
        return r;
    }
};