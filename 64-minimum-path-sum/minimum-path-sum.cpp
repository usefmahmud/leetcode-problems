class Solution {
public:
    int getMin(vector<vector<int>>& g, int i, int j, vector<vector<int>>& dp, int r, int c){
        if(i > r-1 || j > c-1){
            return INT_MAX;
        }
        if(i == r-1 && j == c-1){
            return g[i][j];
        }
        if(dp[i][j] > -1){
           return dp[i][j];
        }
        dp[i][j] = g[i][j] + min(getMin(g,i+1,j,dp,r,c), getMin(g,i,j+1,dp,r,c));
        
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& g) {
        int r = g.size(), c = g[0].size();
        vector<vector<int>> memo(r,vector<int>(c, -1));
        return getMin(g, 0, 0, memo, g.size(), g[0].size());
    }
};