class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        //here the approach is to get the value of the path from one node in 8 directions and get the minimum path to follow
        vector<vector<int>> vis(n,vector<int>(n,0));

        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
        if (grid[0][0] == 0 && grid.size() == 1 && grid[0].size() == 1)
            return 1;
        
        vector<vector<int>> dis(n, vector<int>(m, 1e9));
        dis[0][0] = 0;

        queue<pair<int,int>> q;
        int targetX = n-1;
        int targetY = m-1;

        int dx[] = {1, -1, 0, 1, 0, -1, -1, 1};
        int dy[] = {1, -1, 1, 0, -1, 0, 1, -1};

        q.push({0,0});

        while(!q.empty()){
            int N = q.size();
            for(int i=0;i<N;i++){
                int x = q.front().first;
                int y = q.front().second;
                int pD = dis[x][y];

                q.pop();

                for(int d=0;d<8;d++){
                    int newX = x+dx[d];
                    int newY = y+dy[d];

                    if(newX>=0 && newY>=0 && newX<n && newY<m && grid[newX][newY]==0 && pD+1<dis[newX][newY]){
                        if (newX == targetX && newY == targetY)
                            return pD + 2;
                            
                        q.push({newX, newY});
                        dis[newX][newY] = pD + 1;
                    }
                }
            }
        }
        

        return -1;

    }
};