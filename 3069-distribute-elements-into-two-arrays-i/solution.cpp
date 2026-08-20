class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int i = 2;
        while(i<nums.size()){
            int curr = nums[i++];
            int back_arr1 = arr1.back();
            int back_arr2 = arr2.back();

            if(back_arr1 > back_arr2){
                arr1.push_back(curr);
            }
            else{
                arr2.push_back(curr);
            }
        }
        for(int num : arr2){
            arr1.push_back(num);
        }
        return arr1;
    }
};