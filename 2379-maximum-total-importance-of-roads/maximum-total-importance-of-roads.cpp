class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> v(n, 0);
        for(auto x: roads) ++v[x[0]], ++v[x[1]];
        long long r = 0; int i = 1;
        sort(v.begin(), v.end());
        for(auto x: v) r += (x * i++);

        return r;
    }
};