class Solution {
public:
    int largestInteger(int n, int s) {
        
        if (s == 0) return 0;
        if (s > 9 * n) return -1;

        string num;
        for (int i = 0; i < n; i++) {
            int d = min(9, s);
            num.push_back(char('0' + d));
            s -= d;
        }

        return stoi(num);
        
    }
};