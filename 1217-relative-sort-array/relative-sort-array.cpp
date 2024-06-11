class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        vector<int> r;
        for(auto& x: arr1) ++m[x];
        for(auto& x: arr2){
            for(int i=0; i<m[x]; i++) r.push_back(x);
            m.erase(x);
        }
        for(auto& x: m) for(int i=0; i<x.second; i++) r.push_back(x.first);
        return r;
    }
};