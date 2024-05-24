class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros=0,prod=1;
        for(auto& x: nums){
            if(x == 0 && zeros<1){
                zeros++;
            }else{
                prod*=x;
            }
        }

        for(auto& x: nums){
            if(x == 0 && zeros <= 1){
                x = prod;
            }else{
                if(zeros >= 1){
                    x = 0;
                }else{
                    x = prod/(x==0?1:x);
                }
            }
        }

        return nums;
    }
};