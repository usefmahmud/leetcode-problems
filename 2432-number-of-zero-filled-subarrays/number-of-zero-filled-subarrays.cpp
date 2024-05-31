class Solution {
public:
    long long otherSoln(vector<int>& nums){
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
    long long zeroFilledSubarray(vector<int>& nums) {
        long long r=0, i=0;
        while(i < nums.size()){
            if(nums[i] == 0){
                int j=i;
                long long c=0;
                while(j < nums.size() && nums[j] == 0){
                    c++;
                    j++;
                }
                r += c*(c+1)/2;

                i=j;
            }
            i++;
        }
        return r;
    }
};