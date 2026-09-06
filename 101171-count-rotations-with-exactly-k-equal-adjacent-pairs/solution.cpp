class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        int cnt = 0;

        for(int r=0;r<n;r++){
            string rotated = s.substr(r) + s.substr(0,r);
            int current_score = 0;
            for(int i=0;i<n-1;i++){
                if(rotated[i]==rotated[i+1]){
                    current_score++;
                }
            }

            if(current_score == k){
                cnt++;
            }
        }

        return cnt;
    }
};