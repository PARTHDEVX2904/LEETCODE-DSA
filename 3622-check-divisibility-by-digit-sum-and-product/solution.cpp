class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum  = 0;
        int prod = 1;
        while(temp){
            int dig = temp%10;
            sum = sum + dig;
            prod = prod * dig;
            temp  = temp/10;
        }
        int div = sum + prod;
        return n%div == 0; 
    }
};