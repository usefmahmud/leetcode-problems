class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0, mx=INT_MIN, c=0;
        while(j < nums.size()){
            if(!nums[j]) c++;
            while(c > k){
                if(!nums[i]) c--;
                i++;
            }
            mx = max(mx, j-i+1);
            j++;
        }
        return mx;
    }
};