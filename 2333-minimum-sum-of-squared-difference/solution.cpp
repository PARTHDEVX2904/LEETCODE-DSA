class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;

        vector<int> diff(n);
        int maxi = 0;
        long long total = 0;

        for(int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            maxi = max(maxi, diff[i]);
            total += diff[i];
        }

        if(k >= total)
            return 0;

        int low = 0;
        int high = maxi;

        while(low < high) {
            int mid = low + (high - low) / 2;
            long long needed = 0;

            for(int i = 0; i < n; i++) {
                if(diff[i] > mid) {
                    needed += diff[i] - mid;
                }
            }

            if(needed <= k)
                high = mid;
            else
                low = mid + 1;
        }

        int x = low;
        long long needed = 0;
        long long ans = 0;

        for(int i = 0; i < n; i++) {
            needed += max(0, diff[i] - x);

            int val = min(diff[i], x);
            ans += 1LL * val * val;
        }

        long long leftover = k - needed;
        ans -= leftover * (2LL * x - 1);

        return ans;
    }
};