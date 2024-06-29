class Solution {
public:
    void go(int i, int j, int color, int target, vector<vector<int>>& g){
        if(i < 0 || j < 0 || i >= g.size() || j >= g[0].size()){
            return;
        }
        if(g[i][j] != target){
            return;
        }
        if(g[i][j] == color){
            return;
        }

        g[i][j] = color;

        go(i+1, j, color, target, g);
        go(i-1, j, color, target, g);
        go(i, j+1, color, target, g);
        go(i, j-1, color, target, g);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        go(sr, sc, color, image[sr][sc], image);
        return image;
    }
};