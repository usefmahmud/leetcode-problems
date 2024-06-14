class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a(-1),b(-1);
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                b = i;
                if(a == -1){
                    a = i;
                }
            }
        }
        return {a,b};
    }
};