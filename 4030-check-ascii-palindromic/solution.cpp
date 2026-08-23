class Solution {
public:
    bool isPalindromic(string s) {
        string res = "" ;
        for(char ch : s){
            int num = static_cast<int>(ch);
            bitset<8>binary(num);
            res += binary.to_string();
        }
        int st = 0;
        int en = res.size()-1;
        while(st <= en ){
            if(res[st] != res[en]){
                return false;
            }
            st++;
            en--;
        }

        return true;
    }
};