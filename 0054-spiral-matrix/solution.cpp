class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> ans;

        int count = 0;
        int total = row*col;
        int startingRow=0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while(count<total){
            //print starting row
            for(int i = startingCol;count<total && i<=endingCol;i++){
                    ans.push_back(matrix[startingRow][i]);
                    count++;
            }
            startingRow++;

            //print ending column
            for(int i = startingRow;count<total && i<=endingRow;i++){
                    ans.push_back(matrix[i][endingCol]);
                    count++;
            }
            endingCol--;

            //print the ending row
            for(int i = endingCol;count<total && i>=startingCol;i--){
                    ans.push_back(matrix[endingRow][i]);
                    count++;
            }
            endingRow--;

            //print starting column
            for(int i = endingRow;count<total && i>=startingRow;i--){
                    ans.push_back(matrix[i][startingCol]);
                    count++;
            }
            startingCol++;

        }
        return ans;
    }
};