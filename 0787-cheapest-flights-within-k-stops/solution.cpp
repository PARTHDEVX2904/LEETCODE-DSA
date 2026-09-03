class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n,INT_MAX);
        unordered_map<int, vector<pair<int,int>>> adj;
        for(int i=0;i<flights.size();i++){// created the adjacency list 
            int src = flights[i][0];
            int dest = flights[i][1];
            int weight = flights[i][2];
            adj[src].push_back({dest, weight});
        }

        queue<pair<int,pair<int,int>>> q;
        dist[src] = 0;
        // do bfs search because we have to increase the count of the stops one by one so lets do this, this was the exact question asked to me for the OPENFX interview, i should have done this and had gone for the interview 
        // no visted needed , so as to get the shortest of all

        q.push({0,{src,0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int stops = it.first;  // Number of stops so far
            int node = it.second.first;  // Current node
            int cost = it.second.second;// Cost to reach the current node

            if(stops>k) continue;
            vector<int> temp = dist;

            for(pair<int,int> p : adj[node]){
                int nbr = p.first;
                int edW = p.second;

                if(cost + edW < dist[nbr]){
                    temp[nbr] = cost + edW;
                    q.push({stops+1,{nbr,temp[nbr]}});
                }
            }

            dist = temp;
        }

        if(dist[dst] == INT_MAX) return -1;

        return dist[dst];
        



    }
};