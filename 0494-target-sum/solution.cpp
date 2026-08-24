class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int num : nums) {
            sum += num;
        }
        if(sum < abs(target)) return 0;
        if((sum + target) % 2 != 0) return 0;
        int tar = (sum + target) / 2;
        vector<int> dp(tar + 1, 0);

        dp[0] = 1;
        for(int num : nums) {
            for(int s = tar; s >= num; s--) {
                dp[s] += dp[s - num];
            }
        }
        return dp[tar];
    }
};