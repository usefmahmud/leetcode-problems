class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v(gain.size()+1,0);
        for(int i=0; i<gain.size(); i++){
            v[i+1]=gain[i]+v[i];
        }
        int m=v[0];
        for(auto x: v) m=max(m,x);
        
        return m;
    }
};