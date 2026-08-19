class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<bool>> &vis){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0'|| vis[i][j] ){
            return;
        }
        vis[i][j] = true;

        dfs(i+1,j,grid,vis);
        dfs(i,j+1,grid,vis);
        dfs(i-1,j,grid,vis);
        dfs(i,j-1,grid,vis);

    }
    int numIslands(vector<vector<char>>& grid) {
        // approach is take or start with 1 and do dfs and increase the count ans visited mark
        // if again new 1 is visited then convert that also by increasing the count
        int m = grid.size();
        int n  = grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int count = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    count++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return count;
    }
};