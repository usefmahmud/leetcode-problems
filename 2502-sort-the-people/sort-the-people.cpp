class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> v(names.size());
        for(int i = 0; i < names.size(); i++){
            v[i].first = heights[i], v[i].second = names[i];
        }
        sort(v.rbegin(), v.rend());
        vector<string> r;
        for(auto x: v) r.push_back(x.second);

        return r;
    }
};