class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        float m = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n/2; i++){
            if((float)(nums[i]+nums[n-i-1]) / 2.0 < m){
                m = (float)(nums[i]+nums[n-i-1]) / 2.0;
            }
        }
        return m;
    }
};