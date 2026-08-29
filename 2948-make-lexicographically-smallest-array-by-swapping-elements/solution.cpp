class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
      int n = nums.size();

        
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        // group number -> all values belonging to that group
        map<int, multiset<int>> groups;

        // value -> group number
        map<int, int> belong;

        int groupId = 0;
        groups[groupId].insert(arr[0]);
        belong[arr[0]] = groupId;

        // Create the groups
        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i - 1] > limit) {
                groupId++;
            }
            groups[groupId].insert(arr[i]);
            belong[arr[i]] = groupId;
        }

        
        vector<int> ans;

        for(int num : nums) {
            int id = belong[num];
            // smallest unused element of this group
            auto it = groups[id].begin();
            ans.push_back(*it);
            groups[id].erase(it);
        }

        return ans;  
    }
};