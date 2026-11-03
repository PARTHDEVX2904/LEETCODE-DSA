class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long ans = 0;
        auto num = *max_element(nums.begin(),nums.end());
        for(int x : nums){
            ans += num - x;
        }

        return ans;
    }
};