class Solution {

private:
    void solve(vector<int> nums,vector<int> output, int index,vector<vector<int>>& ans ){
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude
        solve(nums,output,index+1,ans);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>> ans;
        // vector<int> output;
        // int index = 0;
        // solve(nums,output,index,ans);
        // return ans;
        vector<vector<int>> ans;
        set<vector<int>> st;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int mask = 0; mask < (1 << n); mask++) {
            vector<int> temp;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    temp.push_back(nums[i]);
                }
            }

            st.insert(temp);
        }

        for (auto x : st) {
            ans.push_back(x);
        }

        return ans;
    }
};