class Solution {
public:
    void dfs(int i, int j, vector<vector<int>> &grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || !grid[i][j]) return;
        grid[i][j] = 0;

        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);

        return;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        // for this we will do dfs traversal from edges and mark visited
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;i++){// traverses the first col
            if(grid[i][0] == 1){
                dfs(i,0,grid);
            }
        }

        for(int i=0;i<n;i++){// traverses the first row
            if(grid[0][i] == 1){
                dfs(0,i,grid);
            }
        }

        for(int i=0;i<m;i++){//traverses the last column
            if(grid[i][n-1] == 1){
                dfs(i,n-1,grid);
            }
        }

        for(int i=0;i<n;i++){// traverses the last row
            if(grid[m-1][i] == 1){
                dfs(m-1,i,grid);
            }
        }

        int ans = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1) ans++;
            }
        }
        return ans;
    }
};