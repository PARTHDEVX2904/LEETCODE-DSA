class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),
            [](const vector<int>& a, const vector<int>& b){
                if(a[1]==b[1]){
                    return a[0]<b[0];
                }
                return a[1]<b[1];
        });

        priority_queue<pair<int,int>> pq;
        int sum = 0;
        for(int i=0;i<courses.size();i++){
            sum += courses[i][0];
            pq.push({courses[i][0],courses[i][1]});
            if(sum > courses[i][1]){
                sum -= pq.top().first;
                pq.pop();
            }
        }
        return pq.size();
    }
};