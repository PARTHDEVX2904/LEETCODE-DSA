class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(),citations.end());
        vector<int> suffixCnt(n);

        for(int i=0;i<n;i++){
            suffixCnt[i] = n-i;
        }

        int h_index = 0;
        for(int i=0;i<n;i++){
            int curr = citations[i];
            if(curr >= suffixCnt[i]){
                h_index = max(h_index,suffixCnt[i]);
            }
        }
        return h_index;
    }
};