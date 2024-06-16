class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long missed = 1;
        int added = 0, i = 0;
        while(missed <= n){
            if(i < nums.size() && nums[i] <= missed){
                missed += nums[i];
                i++;
            }else{
                missed += missed;
                added++;
            }
        }

        return added;
    }
};