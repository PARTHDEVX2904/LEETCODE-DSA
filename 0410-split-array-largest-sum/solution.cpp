class Solution {
    vector<vector<int>> dp;

public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        dp.assign(n, vector<int>(k + 1, -1));
        return dfs(nums, 0, k, n);
    }

private:
    int dfs(vector<int>& nums, int i, int m, int n) {
        if (i == n) {
            return m == 0 ? 0 : INT_MAX;
        }
        if (m == 0) {
            return INT_MAX;
        }
        if (dp[i][m] != -1) {
            return dp[i][m];
        }

        int res = INT_MAX, curSum = 0;
        for (int j = i; j <= n - m; j++) {
            curSum += nums[j];
            res = min(res, max(curSum, dfs(nums, j + 1, m - 1, n)));
        }

        return dp[i][m] = res;
    }
};