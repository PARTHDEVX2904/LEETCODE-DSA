class Solution {
public:
    const int MOD = 1e9 + 7;
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        // int size = nums.size();
        // vector<int> temp(size);
        // //convert them into 0s, 1s, and 2s
        // for(int i=0;  i<size;i++){
        //     if(nums[i]>= a && nums[i]<=b){
        //         temp[i] = 1;
        //     }
        //     else if(nums[i]<a){
        //         temp[i]=0;
        //     }
        //     else{
        //         temp[i] = 2;
        //     }
        // }

        // //now use the dutch flag algorithm
        // //use two pointer here so that , if i < i-1 then swap
        // int count = 0;
        // int i=1;
        // for(int i=0;i<temp.size()-1;i++){
        //     for(int j=0;j<temp.size()-i-1;j++){
        //         if(temp[j]>temp[j+1]){
        //             swap(temp[j],temp[j+1]);
        //             count++;
        //         }
        //     }
        // }
        // return count;
        long long ans = 0;

        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for (int x : nums) {

            int type;

            if (x < a)
                type = 0;
            else if (x <= b)
                type = 1;
            else
                type = 2;

            if (type == 0) {
                ans = (ans + cnt1 + cnt2) % MOD;
                cnt0++;
            }
            else if (type == 1) {
                ans = (ans+ cnt2) % MOD;
                cnt1++;
            }
            else {
                cnt2++;
            }
        }

        return ans % MOD;
    }
};