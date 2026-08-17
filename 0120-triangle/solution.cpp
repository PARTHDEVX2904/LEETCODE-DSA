class Solution {
public:
    int f(int i, int j, vector<vector<int>> &triangle , int m,int n,vector<vector<int>> &dp){
        //base case
        if(i == n-1){
            return  triangle[i][j];
        }
        //because the next row is +1 the prev row
        // if(j >= m){
        //     return INT_MAX;
        // }

        if(dp[i][j] != -1) return dp[i][j];

        int left = f(i+1,j,triangle ,triangle[i+1].size(),n,dp);
        int right = f(i+1,j+1,triangle ,triangle[i+1].size(),n,dp);

        return dp[i][j] = triangle[i][j] + min(left,right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        //memoisation method 
        // vector<vector<int>> dp(n,vector<int>(n,-1));
        // return f(0,0,triangle,1,n,dp);
        vector<int> dp = triangle[n-1] ;

        for(int i = n-2;i>=0;i--){
            for(int j = 0;j<=i;j++){

                dp[j] = triangle[i][j] + min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
    }
};