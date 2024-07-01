class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> m;
        for(auto x: nums){
            for(auto y: x){
                ++m[y];
            }
        }
        vector<int> r;
        for(auto x: m){
            if(x.second == nums.size()){
                r.push_back(x.first);
            }
        }
        sort(r.begin(), r.end());
        return r;
    }
};