class Solution {
public:
        // we can use the two prefic sums for this both which both will count the number of both zeroes and ones 

        // int n = nums.size();
        // int ans = 0;

        // if(n == 0)
        //     return 0;
        
        // vector<int> prefixZero(n);
        // vector<int> prefixOne(n);

        // int cntZero = 0;
        // int cntOne = 0;

        // int i = 0;

        // // Build prefix counts
        // while(i < n) {

        //     if(nums[i] == 0) {
        //         cntZero++;
        //     }
        //     else {
        //         cntOne++;
        //     }
        //     prefixZero[i] = cntZero;
        //     prefixOne[i] = cntOne;

        //     i++;
        // }

        // // Check every possible subarray
        // i = 0;

        // while(i < n) {
        //     int j = i;
        //     while(j < n) {
        //         int zeroCount;
        //         int oneCount;

        //         if(i == 0) {
        //             zeroCount = prefixZero[j];
        //             oneCount = prefixOne[j];
        //         }
        //         else {
        //             zeroCount = prefixZero[j] - prefixZero[i - 1];
        //             oneCount = prefixOne[j] - prefixOne[i - 1];
        //         }
        //         if(zeroCount == oneCount) {
        //             ans = max(ans, j - i + 1);
        //         }
        //         j++;
        //     }
        //     i++;
        // }
        // return ans;
        
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        unordered_map<int,int> mp;

        int sum = 0;
        int i = 0;

        // sum = 0 exists before starting
        mp[0] = -1;

        while(i < n) {

            if(nums[i] == 0)
                sum--;
            else
                sum++;

            // Same sum was seen before
            if(mp.find(sum) != mp.end()) {

                ans = max(ans, i - mp[sum]);
            }
            else {

                // Store only first occurrence
                mp[sum] = i;
            }

            i++;
        }

        return ans;
    }
};