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
        // vector<vector<int>> ans;
        // for(int num : nums){
        //     int n = num;
        //     int power = 0;
        //     vector<int> temp;
        //     while(n>0){
        //         if(n&1){
                    
        //             if(power == 26){
        //                 temp.push_back(25);
        //                 temp.push_back(25);
        //             }
        //             else
        //                 temp.push_back(power);
        //         }
        //         n >>= 1 ;
        //         power++;
        //     }
        //     reverse(temp.begin(),temp.end());
        //     ans.push_back(temp);
        // }

        // for(int i=0;i<ans.size();i++){
        //     for(int j=0;j<ans[i].size();j++){
        //         cout << ans[i][j] << endl;
        //     }
        // }

        // vector<string> fin;
        // for(int i=0;i<ans.size();i++){
        //     string s="";
        //     for(int j=0;j<ans[i].size();j++){
        //         char ch = 'a' + ans[i][j];
        //         s += ch;
        //     }
        //     fin.push_back(s);
        // }
        // return fin;

    }
    
};