class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int candidate = 0;
        int balance = 0;
 
        // Cancel different values while preserving the strict majority.
        for (int value : nums) {
            // A zero balance starts a new candidate group.
            if (balance == 0) {
                candidate = value;
            }
 
            // Matching values add support; different values cancel support.
            if (value == candidate) {
                balance++;
            } else {
                balance--;
            }
        }
 
        return candidate; 
    }
};