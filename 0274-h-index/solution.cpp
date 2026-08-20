class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(),citations.end());
        //vector<int> suffixCnt(n);

        // for(int i=0;i<n;i++){
        //     suffixCnt[i] = n-i;
        // }

        int h_index = 0;
        for(int i=0;i<n;i++){
            int paper = n-i;
            if(citations[i] >= paper){
                h_index = max(h_index,paper);
            }
        }
        return h_index;
    }
};