class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros=0, ones=0, twos=0;
        for(auto x: nums){
            zeros += x==0;
            ones += x==1;
            twos += x==2;
        }
        int i = 0;
        while(zeros--) nums[i]=0, i++;
        while(ones--) nums[i]=1, i++;
        while(twos--) nums[i]=2, i++;
    }
};