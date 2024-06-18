class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> r;
        for(auto x: strs){
            string y = x;
            sort(x.begin(), x.end());
            m[x].push_back(y);
        }
        for(auto x: m){
            r.push_back(x.second);
        }

        return r;
    }
};