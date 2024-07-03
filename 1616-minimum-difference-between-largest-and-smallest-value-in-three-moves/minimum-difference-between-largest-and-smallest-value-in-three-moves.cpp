class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int n = nums.size(), i = 0, j = n - 4, r = nums[n - 1] - nums[0];
        while(j < n){
            r = min(r, nums[j++] - nums[i++]);
        }
        return r;
    }
};

// 0, 1, 5, 10, 14
// 0, 1, 1, 4, 6, 6 ,6