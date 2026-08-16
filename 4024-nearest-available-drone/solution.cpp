class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minIdx = -1;
        int minDist = INT_MAX;
        int tx = target[0];
        int ty = target[1];

        for(int i=0;i<drones.size();i++){
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2] ;
            int dist = abs(tx - x) + abs(ty - y);

            if(dist <= range){
                if(dist < minDist){
                    minDist = dist;
                    minIdx = i;
                }
                else if(dist == minDist){
                    minIdx = min(minIdx , i);
                }
            }
        }
        return minIdx;
    }   
};