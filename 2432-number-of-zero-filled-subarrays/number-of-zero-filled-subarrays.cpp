class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long r=0, i=0;
        while(i < nums.size()){
            if(nums[i] == 0){
                int j=i;
                int c=0;
                while(j < nums.size() && nums[j] == 0){
                    c++;
                    j++;
                }
                for(int k=1; k<=c; k++){
                    r += c - k + 1;
                }

                i=j;
            }
            i++;
        }
        return r;
    }
};