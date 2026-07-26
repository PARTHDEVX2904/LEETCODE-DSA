class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int s = 0, e = n-1;
        int mid = s+(e-s)/2;
        int ans = 0;
        while(s<=e){
            if(n-mid <= citations[mid]){
                ans = max(ans, n-mid);
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }

        return ans;
    }
};