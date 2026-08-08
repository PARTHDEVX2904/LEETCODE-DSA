class Solution {
public:
    int longestValidParentheses(string s) {
        
        //Graph method it was 
        // stack<int> st;
        // st.push(-1);
        // //if no matches then we have to return 0 , so initialise zero only
        // int maxLen = 0;

        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(') st.push(i);
        //     else{
        //         st.pop();
        //         if(st.empty()){
        //             st.push(i);
        //         } else{
        //             maxLen = max(maxLen,i-st.top());
        //         }

        //     }
        // }
        // return maxLen;
        //DP method
        int n = s.size();

        vector<int> dp(n, 0);
        int ans = 0;

        for (int i = 1; i < n; i++) {

            if (s[i] == ')') {

                // Case 1: "()"
                if (s[i - 1] == '(') {
                    dp[i] = 2;

                    if (i >= 2)
                        dp[i] += dp[i - 2];
                }

                // Case 2: "(...))"
                else {
                    int openIndex = i - dp[i - 1] - 1;

                    if (openIndex >= 0 && s[openIndex] == '(') {
                        dp[i] = dp[i - 1] + 2;

                        if (openIndex >= 1)
                            dp[i] += dp[openIndex - 1];
                    }
                }

                ans = max(ans, dp[i]);
            }
        }

        return ans;
    }
};