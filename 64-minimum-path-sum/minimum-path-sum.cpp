class Solution {
public:
    int getMin(vector<vector<int>>& g, int i, int j, vector<vector<int>>& dp){
        if(i == 0 && j == 0){
            return g[i][j];
        }
        if(dp[i][j] > -1){
           return dp[i][j];
        }
        dp[i][j] = INT_MAX;
        if(i > 0){
            dp[i][j] = min(dp[i][j], g[i][j] + getMin(g,i-1,j,dp));
        }
        if(j > 0){
            dp[i][j] = min(dp[i][j], g[i][j] + getMin(g,i,j-1,dp));
        }
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& g) {
        int r = g.size(), c = g[0].size();
        vector<vector<int>> memo(r,vector<int>(c, -1));
        return getMin(g, r-1, c-1, memo);
    }
};