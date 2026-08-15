class Solution {
public:
    int countValidPrefixes(string s) {
        int oneCount = 0, zeroCount = 0;
        int n = s.length();
        vector<int> valid(n,false);
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeroCount++;
            else if(s[i]=='1') oneCount++;

            int diff = abs(zeroCount - oneCount);
            valid[i] = diff > 1 ? 0 : 1;

        }

        int val = 0;
        for(int num : valid){
            if(num == 1){
                val++;
            }
        }
        return val;
    }
};