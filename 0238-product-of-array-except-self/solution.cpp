class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n + 1, 1);
        vector<int> suffix(n + 1, 1);
        vector<int> ans(n);

        // prefix products
        for(int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        // suffix products
        for(int i = n; i > 0; i--) {
            suffix[i - 1] = suffix[i] * nums[i - 1];
        }

        // product except self
        for(int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i + 1];
        }

        return ans;
    }
};