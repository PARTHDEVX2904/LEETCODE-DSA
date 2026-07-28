class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<int> ans;

        //create the adjacency list
        vector<vector<int>> adj(numCourses);
        for(auto &edge : prerequisites){
            int course = edge[0];
            int prereq = edge[1];

            adj[prereq].push_back(course);
        }

        //calculate the indegree first
        vector<int> indegree(numCourses);
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }

        //do kahn's algorithm here now
        queue<int> q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);
            for(auto i: adj[front]){
                indegree[i]--;
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        }
        if(ans.size()!=numCourses){
           return {};
        }
        return ans;
    }
};