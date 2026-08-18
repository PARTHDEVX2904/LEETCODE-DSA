class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](auto& a,auto& b){
                return a[0]<b[0];
        });

        int m = 0;
        for(int i=1;i<points.size();i++){
            m = max(m,points[i][0] - points[i-1][0]);
        }
        return m;
    }


};