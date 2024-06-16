class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m{{0, 1}};
        int sum = 0;
        int r = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;
            if(rem < 0) rem += k;
            if (m.find(rem) != m.end()){
                r += m[rem];
                m[rem]++;
            } else {
                m[rem] = 1;
            }
        }
        return r;
    }
};