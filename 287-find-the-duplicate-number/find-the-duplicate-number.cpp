class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto& x:nums){
            if(m[x]){
                return x;
            }
            m[x]++;
        }
        return 0;
    }
};