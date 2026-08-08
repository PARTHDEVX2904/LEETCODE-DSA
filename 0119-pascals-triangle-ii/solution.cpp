class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // dp top - down
       if (rowIndex == 0) return {1};

        vector<int> curRow = {1};
        vector<int> prevRow = getRow(rowIndex - 1);

        for (int i = 1; i < rowIndex; i++) {
            curRow.push_back(prevRow[i - 1] + prevRow[i]);
        }

        curRow.push_back(1);
        return curRow;
    }
};