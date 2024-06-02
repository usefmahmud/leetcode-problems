class Solution {
public:
    int go(int m, int n, int i, int j, vector<vector<int>>& mem){
        if(i == m-1 && j == n-1){
            return 1;
        }
        if(i == m || j == n){
            return 0;
        }
        if(!mem[i][j]){
            mem[i][j] = go(m, n, i+1, j, mem) + go(m, n, i, j+1, mem);
        }
        return mem[i][j];
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> mem(m, vector<int>(n,0));
        return go(m, n, 0, 0, mem);
    }
};