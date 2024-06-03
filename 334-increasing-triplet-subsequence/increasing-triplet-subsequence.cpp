class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int b = INT_MAX, c = INT_MAX;
        for(auto& a: nums){
            if(a <= b){
                b = a;
            }else if(a <= c){
                c = a;
            }else{
                return true;
            }
        }
        return false;
    }
};