class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        int count = 0;
        for (auto [num, cnt] : freq) {
            if (cnt == 1) {
                return -1;
            }
            count += (cnt + 2) / 3;
        }

        return count;
    }
};