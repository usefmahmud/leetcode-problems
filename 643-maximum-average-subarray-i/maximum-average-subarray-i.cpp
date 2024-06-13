class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = accumulate(nums.begin(), nums.begin() + k, 0.0);
        double m = sum/k;

        int i=0, j=k;
        while(j < nums.size()){
            sum -= nums[i];
            sum += nums[j];
            m = max(m, sum/k);
            i++,j++;
        }
        return m;
    }
};