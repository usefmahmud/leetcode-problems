class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1, m;
        if(r == 0) return nums[0];
        while(l < r){
            m = (l + r) / 2;
            
            if(m%2 != 0) --m;
            
            if (nums[m] == nums[m+1]) {
                l = m + 2;
            } else {
                r = m;
            }
        }

        return nums[l];
    }
};