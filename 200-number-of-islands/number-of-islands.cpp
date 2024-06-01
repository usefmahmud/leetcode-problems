class Solution {
public:
    void visit(vector<vector<char>>& grid, int r, int c, int m, int n){
        if (r < 0 || r >= m || c < 0 || c >= n || grid[r][c] == '0') {
            return;
        }
        grid[r][c] = '0';

        visit(grid, r-1, c, m, n);
        visit(grid, r+1, c, m, n);
        visit(grid, r, c-1, m, n);
        visit(grid, r, c+1, m, n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=0;
        int m=grid.size(), n=grid[0].size();
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    r++;
                    visit(grid, i, j, m, n);
                }
            }
        }

        return r;
    }
};