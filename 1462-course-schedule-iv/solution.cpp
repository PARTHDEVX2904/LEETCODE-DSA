class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<unordered_set<int>> adj(numCourses) , isPrereq(numCourses);
        vector<int> indegree(numCourses,0);

        for (auto& pre : prerequisites) {
            adj[pre[0]].insert(pre[1]);
            indegree[pre[1]]++;
        }

        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }

        while (!q.empty()) {
            int node = q.front(); q.pop();
            for (int neighbor : adj[node]) {
                isPrereq[neighbor].insert(node);
                isPrereq[neighbor].insert(isPrereq[node].begin(), isPrereq[node].end());
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) q.push(neighbor);
            }
        }

        vector<bool> res;
        for (auto& query : queries) {
            res.push_back(isPrereq[query[1]].count(query[0]));
        }
        return res;
    }
};