class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        int i = 0;
        while(i<nums.size() ){
            int alice = nums[i];
            int bob = nums[i+1];

            arr.push_back(bob);
            arr.push_back(alice);

            i += 2 ;
        }
        return arr;
    }
};