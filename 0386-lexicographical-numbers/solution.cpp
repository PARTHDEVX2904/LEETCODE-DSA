class Solution {
public:
    void func(vector<int> &ans, int curr, int n){
        if(curr>n) return;

        ans.push_back(curr);
        for(int i=0;i<=9;i++){
            int next = curr*10 + i;
            if(next>n){
                return;
            }
            func(ans,next,n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=9;i++){
            func(ans,i,n);
        }
        return ans;
    }
};