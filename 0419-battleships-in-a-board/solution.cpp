class Solution {
public:
    void dfs(int r, int c, vector<vector<bool>>& vis, vector<vector<char>>& board)
    {
        int m=board.size();
        int n=board[0].size();
        if(r>=m || c>=n) return;
        if(board[r][c]=='.') return;
        vis[r][c]=true;
        dfs(r, c+1, vis, board);
        dfs(r+1, c, vis, board);
    }
    int countBattleships(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!vis[i][j] && board[i][j]=='X')
                {
                    dfs(i, j, vis, board);
                    count++;
                }
            }
        }
        return count;
    }
};