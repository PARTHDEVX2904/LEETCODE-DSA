class Solution {
public:
    void solve(vector<int> nums,int index,vector<int> output, set<vector<int>> &st,vector<vector<int>> &ans){
        if(index>=nums.size()){
            st.insert(output);
            return;
        }

        //exlcude
        solve(nums, index+1, output,st,ans);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,index+1,output,st,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<int> output;
        sort(nums.begin(), nums.end());
        int index = 0;
        solve(nums,index,output,st,ans);
        
        for(auto v:st){
            ans.push_back(v);
        }

        return ans;
    }
};