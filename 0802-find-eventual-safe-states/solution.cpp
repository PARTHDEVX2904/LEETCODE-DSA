class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // ok the approach is simple here , the graph will be reversed and the node with indegree 0 is to be taken
        int n = graph.size();
        vector<int> ans;
        vector<vector<int>> rGraph(n);
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(int v: graph[i]){
                rGraph[v].push_back(i);
                indegree[i]++;
            }
        }

        // do bfs traversal 
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int v : rGraph[node]){
                indegree[v]--;
                if(indegree[v]==0) q.push(v);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
        

    }
};