class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int x = grid[0].size(), y = grid.size();
        int top_i = y-1, top_j = x-1;
        int bottom_i = 0, bottom_j = 0;
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                if(grid[i][j]){
                    if(i < top_i){
                        top_i = i;
                    }
                    if(i > bottom_i){
                        bottom_i = i;
                    }
                    
                    if(j < top_j){
                        top_j = j;
                    }
                    if(j > bottom_j){
                        bottom_j = j;
                    }
                }
            }
        }

        
        return (bottom_i - top_i + 1) * (bottom_j - top_j + 1);
        
    }
};