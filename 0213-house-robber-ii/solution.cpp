class Solution {
public:
    // int f(int n,vector<int>& nums,vector<int>& dp){
    //     if(n==0) return nums[0];
    //     if(n<0) return 0;

    //     if(dp[n]!= -1) return dp[n];

    //     int pick = nums[n] + f(n-2,nums,dp) ;
    //     int notPick = 0 + f(n-1,nums,dp) ;

    //     return dp[n] = max(pick,notPick);
    // }

   int solveTab(vector<int>& nums) {
    int n = nums.size();

    if (n == 0)
        return 0;

    if (n == 1)
        return nums[0];

    vector<int> dp(n, 0);

    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        int incl = nums[i] + dp[i - 2];
        int excl = dp[i - 1];

        dp[i] = max(incl, excl);
    }

    return dp[n - 1];
}

int rob(vector<int>& nums) {
    int n = nums.size();

    if (n == 1)
        return nums[0];

    vector<int> first, last;

    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            first.push_back(nums[i]);

        if (i != 0)
            last.push_back(nums[i]);
    }

    int zeroInc = solveTab(first);
    int lastInc = solveTab(last);

    return max(zeroInc, lastInc);
}
};