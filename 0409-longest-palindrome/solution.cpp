class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        int res = 0;

        for (char c : s) {
            count[c]++;
            if (count[c] % 2 == 0) {
                res += 2;
            }
        }

        return res + (res < s.size());
    }
};