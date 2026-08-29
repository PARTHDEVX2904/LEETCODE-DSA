class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int n = 8;//because the square chess board is of 8x8 squares 
        int r1 = source[0];
        int c1 = source[1];
        int r2 = target[0];
        int c2 = target[1];

        if(r1==r2 && c1==c2) return 0; // src and dest are same 

        if((r1+c1)%2 != (r2+c2)%2){
            return -1;
        }


        if(abs(r1-r2) == abs(c1-c2)){
            return 1;
        }
        
        
        return 2;
    }
};