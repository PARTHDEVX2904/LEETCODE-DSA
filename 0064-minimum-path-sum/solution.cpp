class Solution {
public:
    int f(int i, int j, vector<vector<int>> &grid,vector<vector<int>> &dp){
        //base case
        if(i==0 && j==0){
            return dp[i][j] = grid[0][0];
        }
        if(i<0 || j<0) return INT_MAX;

        if(dp[i][j] != -1) return dp[i][j];

        int up = f(i-1,j,grid,dp);
        int left = f(i,j-1,grid,dp);

        return dp[i][j] = grid[i][j] + min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        //memoisation
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,grid,dp);
    }
};