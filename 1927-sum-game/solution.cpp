class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int half = n / 2;
        int s1 = 0, s2 = 0;
        int q1 = 0, q2 = 0;

        for (int i = 0; i < n; ++i) {
            if (num[i] == '?') {
                (i < half) ? q1++ : q2++;
            } else {
                (i < half) ? s1 += (num[i] - '0') : s2 += (num[i] - '0');
            }
        }

        // Alice gets the last move if question mark count is odd
        if ((q1 + q2) % 2 != 0) return true;

        // Condition for Bob to win: (2 * s1 + 9 * q1) == (2 * s2 + 9 * q2)
        return (2 * s1 + 9 * q1) != (2 * s2 + 9 * q2);
    }
};