class Solution {
public:
    int replace(int n){
        if(n==1) return 0;
        if(n==2147483647) return 32;

        if(n%2 == 0){
            return 1 + replace(n/2);
        }
        else{
            return 1 + min(replace(n-1),replace(n+1));
        }
    }
    int integerReplacement(int n) {
        return replace(n);
    }
};