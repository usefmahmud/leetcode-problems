class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0, m=0;
        for(int x: gain){
            s += x;
            m = max(s, m);
        }
        
        return m;
    }
};