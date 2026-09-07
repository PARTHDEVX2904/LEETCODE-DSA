class Solution {
public:
    // void f(int i,string &s,string x,set<string> &st){
    //     if(i==s.size()){
    //         if(!x.empty())st.insert(x);
    //         return;
    //     }
    //     f(i+1,s,x+s[i],st);
    //     f(i+1,s,x,st);
    // }
    int distinctSubseqII(string s) {
        // int count = 0;
        // set<string> st;
        // f(0,s,"",st);
        // return st.size();

        int n = s.size();
        int MOD = 1e9 + 7;

        vector<int> dp(n, 1);
        int result = 0;

        for(int i = 0; i < n; i++){
            // Try extending subsequences ending before i
            for(int j = 0; j < i; j++){
                if(s[i] != s[j]) {
                    dp[i] = (dp[i] + dp[j]) % MOD;
                }
            }
            result = (result + dp[i]) % MOD;
        }
        return result;
    }
};