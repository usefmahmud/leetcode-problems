class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(), nums.end());

        int i = nums.size() - 2, j = nums.size() - 1;
        while(i >= 0 && nums[i] >= nums[i + 1]) i--;
        if(i >= 0){
            while(j > 0 && nums[j] <= nums[i]){
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};