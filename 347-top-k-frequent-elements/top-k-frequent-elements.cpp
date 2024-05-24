class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++) ++m[nums[i]];
        vector<pair<int,int>> v;
        for(auto x: m) v.push_back({x.second, x.first});
        sort(v.rbegin(),v.rend());
        vector<int> r(k);
        for(int i=0; i<k; i++) r[i]=v[i].second;
        return r;
    }
};