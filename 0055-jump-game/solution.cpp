class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool> dp(n,false);

        int lastTrueIdx = n-1;

        for(int i=n-1;i>=0;i--){
            if(i+nums[i] >= n-1){
                lastTrueIdx = i;
                dp[i] = true;
            }

            if(lastTrueIdx <= i+nums[i]){
                dp[i]= true;
                lastTrueIdx = i;
            }
        }
        return dp[0];
    }
};