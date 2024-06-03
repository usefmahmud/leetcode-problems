class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0, c=0, j=0, mx=INT_MIN;
        while(j < nums.size()){
            while(j< nums.size() && c <= 1){
                if(nums[j] == 0) c++;
                j++;
            }
            if(c <= 1){
                mx = max(mx, j-i-1);
            }else{
                mx = max(mx, j-i-c);
            }
            while(c > 1){
                if(nums[i] == 0) c--;
                i++;
            }
        }
        return mx;

    }
};