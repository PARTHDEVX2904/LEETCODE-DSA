class Solution {
public:
    int solve(vector<int>& coins, int amount,vector<int> &dp){
        if(amount == 0) return 0;

        if(amount < 0) return -1;

        if(dp[amount] != -2) return dp[amount];

        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans = solve(coins, amount-coins[i],dp);
            if(ans >=0 && ans < mini  )
                mini = 1+ans;
            
        }

        dp[amount] = (mini == INT_MAX) ? -1 : mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-2);
        int ans = solve(coins, amount , dp);
        if(ans == INT_MAX){
            return -1;
        }
        else{
            return ans;
        }

    }
};