class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), i = n-2, x = n-1;
        if(n == 1) return true;
        while(i >= 0){
            if(nums[i] >= x - i){
                x = i;
            }
            
            i--;
        }
        return x == 0;
    }
};