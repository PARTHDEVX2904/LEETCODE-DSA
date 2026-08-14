class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // int mini = INT_MAX;
        // int maxi = INT_MIN;
        // // i will use the fact of sorted array thing in this 
        // for(int i=0;i<arrays.size();i++){
        //     mini = min(mini,arrays[i][0]);
        //     maxi = max(maxi,arrays[i].back());
        // }

        // return abs(maxi-mini);

        // single scan approach
        int n = arrays[0].size();
        int res = 0;
        int min_val = arrays[0][0];
        int max_val = arrays[0][n-1];
        for( int i=1;i<arrays.size();i++){
            n = arrays[i].size();
            res = max(res, max(abs(arrays[i][n - 1] - min_val),abs(max_val - arrays[i][0])));
            min_val = min(min_val,arrays[i][0]);
            max_val = max(max_val,arrays[i][n-1]);
        }
        return res;
    }

};