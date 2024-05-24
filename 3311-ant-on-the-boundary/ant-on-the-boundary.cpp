class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int r=0, pos=0;
        for(auto& a:nums){
            pos += a;
            r += pos == 0;
        }
        return r;
    }
};