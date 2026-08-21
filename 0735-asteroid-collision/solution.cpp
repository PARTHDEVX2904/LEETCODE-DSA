class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int> st;
       int n = asteroids.size();
       vector<int> ans;
       int i=0;
       while(i<n){
            if(st.empty() || asteroids[i]>0){ // ye tab hoga jab positive asteroid hai 
                st.push(asteroids[i]);
            }
            else{
                if(asteroids[i]<0){
                    if(st.top()<0) st.push(asteroids[i]);
                    else{
                        while(!st.empty() && st.top()>0 && abs(st.top()<abs(asteroids[i]))) st.pop();

                        if(st.empty() || st.top() < 0){
                            st.push(asteroids[i]);
                        }
                        else if(st.top()>0 && st.top() == abs(asteroids[i])){
                            st.pop();
                        }
                    }
                }

            }
            i++;
       }
       while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
       }

       reverse(ans.begin(),ans.end());
       return ans;

        
        
          
    }
};