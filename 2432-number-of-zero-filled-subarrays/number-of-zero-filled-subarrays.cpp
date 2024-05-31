class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long r=0,c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                c++;
            }else{
                r += c*(c+1)/2;
                c = 0;
            }
        }
        r += c*(c+1)/2;
        return r;
    }
};