class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>> minheap;

    for(int i=0;i<k;i++){
        minheap.push(nums[i]);
    }
    int ans = 0;
    for(int i= k;i<nums.size();i++){
        if(nums[i]>minheap.top()){
            minheap.pop();
            minheap.push(nums[i]);
        }
    }

    ans = minheap.top();
    return ans;
    }
};