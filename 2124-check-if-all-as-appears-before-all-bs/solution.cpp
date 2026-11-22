class Solution {
public:
    bool checkString(string s) {
        int i = INT_MIN;
        int j = INT_MAX;
        bool b_app = false;
        for(int k=0;k<s.length();k++){
            if(s[k] == 'a'){
                i = k;
                if(b_app){
                    break;
                }
            }
            else{
                j=k;
                b_app = true;
            }
        }

        if(i<=j){
            return true;
        }
        return false;
    }
};