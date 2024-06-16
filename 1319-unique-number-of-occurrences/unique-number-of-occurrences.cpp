class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> st;
        for(auto x: arr) ++m[x];
        for(auto x: m) st.insert(x.second);
        
        return m.size() == st.size();
    }
};