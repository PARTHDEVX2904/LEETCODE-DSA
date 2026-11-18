class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int minVal = INT_MAX;
            int temp = -1;
            for(int j=i;j<n;j++){
                minVal = min(minVal,nums[j]);
                temp = temp&nums[j];
                if(minVal == temp) ans++;
            }
        }

        return ans;
    }
};