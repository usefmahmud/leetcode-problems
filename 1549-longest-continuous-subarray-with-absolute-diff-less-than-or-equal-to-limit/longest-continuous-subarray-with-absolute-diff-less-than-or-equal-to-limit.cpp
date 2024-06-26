class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> mst;
        int l = 0, r = 0, res = 0, n = nums.size();
        while(r < n){
            mst.insert(nums[r++]);
            while(*mst.rbegin() - *mst.begin() > limit){
                mst.erase(mst.find(nums[l++]));
            }
            res = max(res, r-l);
        }
        
        return res;
    }
};