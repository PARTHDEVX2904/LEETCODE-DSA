class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod = 1;
        int i = 0;
        int first = INT_MIN, second = INT_MIN;
        while(i<nums.size()){
            if(nums[i]>first){
                second = first;
                first = nums[i];
            }
            else if(nums[i]>second && nums[i]<=first){
                second = nums[i];
            }
            i++;
        }
        prod= (first-1) * (second-1);
        return prod;
    }
};