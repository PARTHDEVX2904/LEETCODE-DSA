class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),
            [](const vector<int>& a, const vector<int>& b) {
                if (a[0] == b[0])
                    return a[1] < b[1];

                return a[0] > b[0];
            });

        for(auto it : people){
            cout << it[0] << "->" << it[1] << " ";
        }
        vector<vector<int>> ans;

        for (auto &person : people) {
            ans.insert(ans.begin() + person[1], person);
        }

        return ans;
    }
};