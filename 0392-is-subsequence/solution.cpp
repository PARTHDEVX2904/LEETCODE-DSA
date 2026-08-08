class Solution {
public:
    // bool isSubsequence(string s, string t) {
    //     vector<int> dp()
    //     return rec(s,t,0,0);
    // }
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>> memo(n, vector<int>(m, -1));
        return rec(s, t, 0, 0, memo);
    }

private:
    bool rec(string& s, string& t, int i, int j, vector<vector<int>>& memo) {
        if (i == s.size()) return true;
        if (j == t.size()) return false;
        if (memo[i][j] != -1) return memo[i][j] == 1;
        if (s[i] == t[j]) {
            memo[i][j] = rec(s, t, i + 1, j + 1, memo) ? 1 : 0;
        } else {
            memo[i][j] = rec(s, t, i, j + 1, memo) ? 1 : 0;
        }
        return memo[i][j] == 1;
    }
};