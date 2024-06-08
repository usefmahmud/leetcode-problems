class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() == 1) return false;
        unordered_map<int,int> m{{0,-1}};
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            int rem = sum%k;
            
            if(m.find(rem) != m.end()){
                if(i - m[rem] > 1) return true;
            }else{
                m[rem] = i;
            }
        }
        return false;
    }
};