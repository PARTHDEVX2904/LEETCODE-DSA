class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        int n = s.length();
        for(char c:s){
            if(freq.find(c)==freq.end()){
                freq[c] = 1;
            }
            else{
                freq[c]++;
            }
        }
        int ans = -1;
        for(int i = 0;i<n;i++){
            if(freq[s[i]]==1){
                ans = i;
                break;
            }
        }
        return ans;

    }
};