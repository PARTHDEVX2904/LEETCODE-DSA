class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        // Case 1: k == n
        if (k == n) {
            return *max_element(nums.begin(), nums.end());
        }

        // Case 2: k == 1
        if (k == 1) {
            int ans = -1;

            for (auto &[num, count] : freq) {
                if (count == 1) {
                    ans = max(ans, num);
                }
            }

            return ans;
        }

        int ans = -1;
        if (freq[nums[0]] == 1) {
            ans = max(ans, nums[0]);
        }
        if (freq[nums[n - 1]] == 1) {
            ans = max(ans, nums[n - 1]);
        }

        return ans;
    }
};