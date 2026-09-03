class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        // here the intuition is either min element must be ODD or else all elements must be EVEN
        int mini = nums1[0];
        bool odd = 0;


        for(int x : nums1){
            mini = min(mini,x);
            odd |= (x&1);
        }

        return (mini&1) == odd;
    }
};