class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.length();

        for(int i=0;i<size;i++){
            char ch = s[i];

            //if opening then push in stack 
            //if closing then check top and then pop
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char top = st.top();
                    if((ch==']' && top=='[') || (ch==')' && top=='(') || (ch=='}' && top=='{')){
                        st.pop();
                    }
                    else{
                    return false;
                    }
                }
                else{
                    return false;
                }
                
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};