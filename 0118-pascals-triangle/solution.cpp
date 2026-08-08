class Solution {
public:
     vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int n = 0; n < numRows; n++) {
            vector<int> row;
            row.push_back(1);
            int val = 1;
            for (int k = 1; k <= n; k++) {
                val = val * (n - k + 1) / k;
                row.push_back(val);
            }
            res.push_back(row);
        }
        return res;   
    }
};