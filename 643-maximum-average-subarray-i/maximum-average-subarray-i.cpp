class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i=0; i<k; i++) sum += nums[i];
        double m = sum;

        int i=0, j=k;
        while(j < nums.size()){
            sum -= nums[i], sum += nums[j];
            m = max(m, sum);
            i++,j++;
        }
        return m/k;
    }
};