class Solution {
public:
    void go(int i, int j, int& c, vector<vector<int>>& g){
        if(i < 0 || j < 0 || i > g.size()-1 || j > g[0].size()-1 || g[i][j] == 0 ) return;
        g[i][j] = 0;
        c++;
        go(i+1, j, c, g);
        go(i-1, j, c, g);
        go(i, j+1, c, g);
        go(i, j-1, c, g);
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int maxArea = 0;
        for(int i = 0; i < g.size(); i++){
            for(int j = 0; j < g[0].size(); j++){
                if(g[i][j]){
                    int x = 0;
                    go(i, j, x, g);
                    maxArea = max(maxArea, x);
                }
            }
        }

        return maxArea;
    }
};