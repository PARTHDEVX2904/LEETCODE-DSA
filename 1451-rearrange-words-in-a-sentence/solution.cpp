class Solution {
public:
    string arrangeWords(string text) {
        map<int,vector<string>> freq;
        int n = text.size();
        int left = 0;
        int right = 0;

        // lets first convert it into lowercase before hand 
        for(char &c : text){
                c = tolower(c);
            }
        for (int right = 0; right <= n; right++) {
            // store it when we hit the space or the  end
            if (right == n || text[right] == ' ') {
                int size = right - left;
                if (size > 0) { //khaali walon ko store mat karna 
                    string temp = text.substr(left, size);
                    freq[size].push_back(temp);
                }
                left = right + 1; // left ko space se aage badha +1 baar
            }
        }

        string ans="";
        for(auto &it : freq){
            for(auto &word : it.second){
                ans += word + " ";
            }
        }
        if (!ans.empty()) {
            ans.pop_back();
        }
        if (!ans.empty()) {
            ans[0] = toupper(ans[0]);
        }
        return ans;
    }
};