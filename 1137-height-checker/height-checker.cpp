class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> tmp = heights;
        int r = 0;
        sort(tmp.begin(), tmp.end());
        for(int i=0; i<heights.size(); i++){
            r += tmp[i] != heights[i];
        }
        return r;
    }
};