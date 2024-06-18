class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> m;
        vector<vector<string>> r;
        int c = 0;
        for(auto x: strs) sort(x.begin(), x.end()), m[x].push_back(c++);
        for(auto x: m){
            vector<string> s;
            for(auto y: x.second){
                s.push_back(strs[y]);
            }
            r.push_back(s);
        }

        return r;
    }
};