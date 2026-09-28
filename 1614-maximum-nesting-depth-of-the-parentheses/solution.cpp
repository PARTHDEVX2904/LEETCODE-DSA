class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        // we will calculate the maximum length of brackets 
        int maxLen  = 0;
        int len = 0;
        for(char c : s){
            if(c == '('){
                st.push(c);
            }
            else if(c == ')'){
                len = st.size();
                maxLen = max(len,maxLen);
                st.pop();
            }
        }

        return maxLen;
    }
};