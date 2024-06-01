class Solution {
public:
    void visit(vector<vector<char>>& grid, int row, int col){
        grid[row][col] = '0';
        
        // condition to break if there is no '1'
        if(row > 0 && grid[row-1][col] != '0'){
            visit(grid, row-1, col);
        }
        if(col > 0 && grid[row][col-1] != '0'){
            visit(grid, row, col-1);
        }
        if(row < grid.size()-1 && grid[row+1][col] != '0'){
            visit(grid, row+1, col);
        }
        if(col < grid[0].size()-1 && grid[row][col+1] != '0'){
            visit(grid, row, col+1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    r++;
                    visit(grid, i, j);
                }
            }
        }

        return r;
    }
};