class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        for(int i=2; i<nums.size(); i++){
            if(nums[i-1] > nums[i] && nums[i-1] > nums[i-2]){
                return i-1;
            }
        }

        return 0;
    }
};