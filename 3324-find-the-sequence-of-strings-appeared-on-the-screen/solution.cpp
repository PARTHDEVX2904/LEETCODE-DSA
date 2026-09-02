class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string temp="";
        for(int i=0;i<target.length();i++){
            char ch = 'a';
            string k;
            while(ch != target[i]){
                k = temp + ch ;
                ans.push_back(k);
                if(ch == 'z') ch = 'a';
                else ch = ch + 1;
            }
            k = temp + ch;
            ans.push_back(k);
            temp += target[i];
        }

        return ans;
    }
};