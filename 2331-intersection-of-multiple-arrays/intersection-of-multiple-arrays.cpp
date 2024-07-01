class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int freq[1001]{0};
        for(auto x: nums){
            for(auto y: x){
                ++freq[y];
            }
        }
        vector<int> r;
        for(int i = 1; i <= 1000; i++){
            if(freq[i] == nums.size()){
                r.push_back(i);
            }
        }
        sort(r.begin(), r.end());
        return r;
    }
};