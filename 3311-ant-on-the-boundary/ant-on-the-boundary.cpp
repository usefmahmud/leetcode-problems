class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int r=0, pos=0;
        for(int i=0; i<nums.size(); i++){
            pos += nums[i];
            r += pos == 0;
        }
        return r;
    }
};