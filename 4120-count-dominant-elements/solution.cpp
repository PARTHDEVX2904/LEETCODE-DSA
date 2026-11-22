class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        // int count = 0;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     // bool dominant = false;
        //     double avg = 0;
        //     if(i== 0 && n>1){
        //         avg = nums[i+1];
        //         if(avg < nums[0]){
        //             count++;
        //         }
        //     }
        //     else if(i == n-1 && n>1){
        //         avg = nums[i-1];
        //         if(avg < nums[n-1]){
        //             count++;
        //         }
        //     }
        //     else{
        //         avg = (nums[i-1] + nums[i+1])/2;
        //         if(avg < nums[i]){
        //             count++;
        //         }
        //     }
            
        // }
        // return count;
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            long long sum = 0;
            int count = 0;
            if (i > 0) {
                sum += nums[i - 1];
                count++;
            }
            if (i + 1 < n) {
                sum += nums[i + 1];
                count++;
            }
            if (1LL * count * nums[i] >= sum) {
                ans++;
            }
        }
        return ans;

    }
};