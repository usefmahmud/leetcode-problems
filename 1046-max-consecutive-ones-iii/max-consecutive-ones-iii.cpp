class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0, mx=INT_MIN, c=0;
        while(j < nums.size()){
            while(j < nums.size() && c <= k){
                if(nums[j] == 0) c++;
                j++;
            }
            if(c <= k){
                mx = max(mx, j-i);
            }else{
                mx = max(mx, j-i-1);
            }
            while(c > k){
                if(nums[i] == 0) c--;
                i++;
            }
        }
        return mx;
    }
};