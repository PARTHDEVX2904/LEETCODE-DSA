class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        map[0] = -1;
        int curSum = 0;
        for(int i=0;i<n;i++){
            curSum += nums[i];
            int rem = curSum % k;
            if(map.find(rem) != map.end()){
                if(i-map[rem]>1){
                    return true;
                }
            }
            else{
                map[rem] = i;
            }
        }

        return false;
    }
};