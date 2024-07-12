class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> r;
        int i = 0, j = n;
        while(i < n){
            r.push_back(nums[i++]);
            r.push_back(nums[j++]);
        }
        return r;
    }
};