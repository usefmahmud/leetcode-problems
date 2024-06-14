class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = 0;
        for(auto& x: nums){
            if(x > 0){
                if(x-s > 1){
                    return s+1;
                }
                s = x;
            }
        }

        return nums.back() < 1 ? 1 : nums.back()+1;
    }
};