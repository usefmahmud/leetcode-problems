class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int o = 0, p = 0, r = 0, n = nums.size();
        int i = 0, j = 0;
        while(j < n){
            o += nums[j]%2;

            if(o > k){
                i++, o--;
                p = 0;
            }

            if(o == k){
                while(nums[i]%2 == 0){
                    p++, i++;
                }

                r += p + 1;
            }
            j++;
        }
        
        return r;
    }
};