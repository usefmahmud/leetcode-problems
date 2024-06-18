class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1, m;
        if(r == 0) return nums[0];
        while(l < r){
            m = (l + r) / 2;
            if(m > 0 && m < nums.size()-1 && nums[m] != nums[m+1] && nums[m] != nums[m-1]){
                return nums[m];
            }else if(m == 0 && nums[m] != nums[m+1]){
                return nums[m];
            }else if(m == nums.size()-1 && nums[m] != nums[m-1]){
                return nums[m];
            }else if(m > 0 && nums[m] == nums[m-1]){
                if(m%2 != 0){
                    l = m + 1;
                }else{
                    r = m - 1;
                }
            }else if(m < nums.size()-1 && nums[m] == nums[m+1]){
                if(m%2 == 0){
                    l = m + 1;
                }else{
                    r = m - 1;
                }
            }
        }

        return nums[l];
    }
};