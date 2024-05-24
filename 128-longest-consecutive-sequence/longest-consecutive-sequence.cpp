class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();

        sort(nums.begin(),nums.end());
        int m=0,curr=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]-nums[i] == 1) ++curr;
            else if(nums[i+1]-nums[i] > 1) m=max(m,curr), curr=1;
        }
        return max(curr,m);
    }
};