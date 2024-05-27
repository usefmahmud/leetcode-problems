class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c(0);
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[c++] = nums[i];
            }
        }
        for(int i=c; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};