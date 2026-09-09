class Solution {
public:
    long long countCommas(long long n) {
        // we will do the implementation here as if we were doing ,
        // n-999, n-999,999  , n-999,999,999 and so on...
        long long count = 0;
        for(long long p=1000;p<=n;p*=1000){
            count += n-p+1;
        }
        return count;
    }
};