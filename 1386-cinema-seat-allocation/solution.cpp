class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // this will store the seats 
        map<int, set<int>> reserved;
        for (auto &seat : reservedSeats) {
            reserved[seat[0]].insert(seat[1]);
        }
        int ans = 2 * n;
        for(auto &[row,seats] : reserved){
            bool left = true;
            bool middle = true;
            bool right = true;

            for(int s=2;s<=5;s++){
                if(seats.count(s)){
                    left = false;
                    break;
                }
            }

            for(int s=4;s<=7;s++){
                if(seats.count(s)){
                    middle = false;
                    break;
                }
            }

            for(int s=6;s<=9;s++){
                if(seats.count(s)){
                    right = false;
                    break;
                }
            }

            if (left && right) {
                  //Still 2 families -> no change
                  continue;
            }
            if (left || middle || right) { 
                ans--;
            }
            else {
                ans -= 2;
            }

        }

        return ans;


    }
};