class Solution {
public:
    int missingInteger(vector<int>& nums) {
        //MY APPROACH
        // int prefix = nums[0];
        // int i = 1;
        // int diff = 1;

        // while(i<nums.size()){
        //     int rem = nums[i]-nums[i-1];
        //     if(rem == diff){
        //         prefix += nums[i];
        //         i++;
        //     }else{
        //         break;
        //     }
        // }

        // set<int> remain;
        // for(int j=i-1;j<nums.size();j++){
        //     remain.insert(nums[j]);
        // }
        // int k = remain.size();
        // while(k--){
        //     if(remain.find(prefix) != remain.end()){
        //         prefix++;
        //     }
        //     else{
        //         break;
        //     }
        // }

        // return prefix;

        int n = nums.size();
        unordered_set<int> seen(nums.begin(),nums.end());
        int sum = nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1) sum+=nums[i];
            else break;
        }

        while(seen.count(sum)) 
            sum++;

        return sum;
    }
};