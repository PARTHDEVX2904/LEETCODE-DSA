class Solution {
public:
    bool dfs(int row, int col, int index , vector<vector<bool>>&visited,vector<vector<char>>&board, string &word){
       if(index >=word.size())return true;
        if(row>=board.size()||row<0||col>=board[0].size()||col<0||visited[row][col]==true||board[row][col]!=word[index])return false;
        visited[row][col] =true;
        bool left = dfs(row,col-1,index+1,visited,board,word);
        bool right = dfs(row,col+1,index+1,visited,board,word);
        bool up = dfs(row-1,col,index+1,visited,board,word);
        bool down = dfs(row+1,col,index+1,visited,board,word);
        visited[row][col] =false; //backtrack
        return(left||right||up||down); 
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m));
        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(dfs(i,j,0,visited,board,word)){
                        return true;
                    }
                }
            }
        }

        return false;
    }
};