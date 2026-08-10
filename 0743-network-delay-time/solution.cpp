class Solution {
public: 
    void dfs(int node, int time,unordered_map<int, vector<pair<int, int>>> &adj, vector<int> &dist ){
        if(time>=dist[node]) return; // we already have the minimum time gotten here
        dist[node] = time;
        for(auto& [nbr,w] : adj[node]){
            dfs(nbr,time+w,adj,dist);
        }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int, vector<pair<int, int>>> adj;
        for (auto& time : times) {
            adj[time[0]].emplace_back(time[1], time[2]);
        }

        vector<int> dist(n + 1, INT_MAX);
        dfs(k, 0, adj, dist);

        int res = *max_element(dist.begin() + 1, dist.end());
        return res == INT_MAX ? -1 : res;
    }
};