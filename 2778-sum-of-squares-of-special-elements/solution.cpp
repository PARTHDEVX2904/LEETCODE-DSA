class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       int ans = 0;
       int n = nums.size();
       for(int i=0;i<n;i++){
         int j = i+1;
         int num = nums[i];
         if(n%j == 0){
            ans += num * num;
         }
       } 
       return ans;
    }
};