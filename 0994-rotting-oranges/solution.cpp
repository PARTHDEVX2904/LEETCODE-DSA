class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int tt = 0;
        int fc = 0;

        queue<pair<int,int>> q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) fc++;
            }
        }

        if(fc==0) return 0;

        while(!q.empty()){
            int size = q.size();
            while(size--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                if(col+1<n && grid[row][col+1] == 1){
                    grid[row][col+1]=2;
                    q.push({row,col+1});
                    fc--;
                }
                if(col-1>=0 && grid[row][col-1]==1){
                    grid[row][col-1]=2;
                    q.push({row,col-1});
                    fc--;
                }
                if(row+1<m && grid[row+1][col]==1){
                    grid[row+1][col] = 2;
                    q.push({row+1,col});
                    fc--;
                }
                if(row-1>=0 && grid[row-1][col]==1){
                    grid[row-1][col] = 2;
                    q.push({row-1,col});
                    fc--;
                }
            }
            tt++;
            if(fc==0) return tt;
        }
        return -1;
    }
};