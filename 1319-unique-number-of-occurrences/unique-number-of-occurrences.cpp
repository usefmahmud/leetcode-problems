class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v;
        unordered_map<int,int> m;
        for(auto x: arr) ++m[x];
        for(auto x: m){
            v.push_back(x.second);
        }
        sort(v.begin(), v.end());
        for(int i=1; i<v.size(); i++){
            if(v[i-1] == v[i]){
                return false;
            }
        }
        return true;
    }
};