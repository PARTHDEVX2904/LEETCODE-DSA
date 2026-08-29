class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(int x: nums){
            string s;
            if(x&(1<<26)){
                s += "zz";
            }
            for(int bit=25;bit>=0;bit--){
                if(x&(1 << bit)){
                    s += char('a' + bit);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
    
};