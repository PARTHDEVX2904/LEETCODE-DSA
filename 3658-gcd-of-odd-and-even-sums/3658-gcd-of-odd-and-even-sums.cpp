class Solution {
private:
    int gcd(int a , int b){
        if(b==0) return a;
        return gcd(b, a % b);
    }
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        //for odd
        int num = 1;
        for(int i=0;i<n;i++){
            
            if(i==0){
                sumOdd = 1;
            }
            else{
                num +=2;
                sumOdd += num;
            }
        }

        //sumEven
        num = 2;
        for(int i=0;i<n;i++){
            if(i==0){
                sumEven = 2;
            }
            else{
                num += 2;
                sumEven += num;
            }
        }
        int ans = gcd(sumOdd,sumEven);
        return ans;
    }
};