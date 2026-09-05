class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor)
            return 1;
        if(dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if(divisor == 1)
            return dividend;

        // Find the sign of the answer
        int sign = 1;
        if((dividend < 0) ^ (divisor < 0))
            sign = -1;

        // Convert both to positive
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        int ans = 0;

        while(n >= d) {
            int p = 0;
            // Keep doubling divisor
            while(n >= (d << p)) {
                p++;
            }
            p--;
            // Subtract the biggest possible multiple
            n = n - (d << p);
            ans = ans + (1 << p);
        }
        return (sign==1) ? ans : -ans;
    }
};