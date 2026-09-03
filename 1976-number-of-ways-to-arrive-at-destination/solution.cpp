class Solution {
public:
    const int MOD = 1e9 + 7; 
    int countPaths(int n, vector<vector<int>>& roads) {
        
        //build and adjacency list
        vector<vector<pair<int,int>>> adj(n);

        for(int i =0;i<roads.size();i++){
            int u = roads[i][0];
            int v = roads[i][1];
            int time = roads[i][2]; 

            adj[u].push_back({v,time});
            adj[v].push_back({u,time});
        }

        vector<int> ways_to_reach(n);
        vector<long long> time_taken(n,LONG_MAX);

        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        pq.push({0,0});

        ways_to_reach[0] = 1;
        while(!pq.empty()){
            auto [cur_time,node] = pq.top();
            pq.pop();

            if(cur_time > time_taken[node]){
                continue;
            }

            for(auto [nbr,ed_time] : adj[node]){
                //if we have got the next shorter path
                if(cur_time + ed_time < time_taken[nbr]){
                    time_taken[nbr] = cur_time + ed_time;
                    ways_to_reach[nbr] = ways_to_reach[node];
                    pq.push({time_taken[nbr],nbr});
                }

                else if(cur_time + ed_time == time_taken[nbr]){
                    ways_to_reach[nbr] = (ways_to_reach[nbr] + ways_to_reach[node]) % MOD;
                }
                
            }
        }
        return ways_to_reach[n-1];
    }
};