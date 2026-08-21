class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        //unordered_map<char,int> freq;
        int n = s.length();
        if(n<k) return s;
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top().first == s[i]){
                if(st.top().second == k-1){
                    st.pop();
                }
                else{
                    st.top().second = st.top().second + 1;
                }
            }
            else{
                st.push({s[i],1});
            }
        }

        string res = "";
        while(!st.empty()){
            char ch = st.top().first;
            int cnt = st.top().second;
            while(cnt--){
                res+=ch;
            }
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;
    }
};