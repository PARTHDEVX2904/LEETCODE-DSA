class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int u1=source[0];
        int v1=source[1];

        int u2=target[0];
        int v2=target[1];

        if(u1==u2 && v1==v2){
            return 0;
        }else if(abs(u1-u2)==abs(v1-v2)){
            return 1;
        }else if(u1==u2 || v1==v2){
            return 1;
        }

        return 2;
    }
};