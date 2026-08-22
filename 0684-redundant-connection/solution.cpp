class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int i,vector<int> &parent) {
        if (parent[i] != i)
            parent[i] = find(parent[i],parent); // Path compression
        return parent[i];
    }

    void join(int u, int v,vector<int> &parent,vector<int> &rank) {
        int rootU = find(u,parent), rootV = find(v,parent);
        if (rootU != rootV) {
            // Union by rank to balance trees
            if (rank[rootU] > rank[rootV]) parent[rootV] = rootU;
            else if (rank[rootU] < rank[rootV]) parent[rootU] = rootV;
            else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1);
        vector<int> rank(n+1,0);
        
        // Initialize each node as its own parent
        for (int i = 1; i <= n; i++) parent[i] = i;

        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            if (find(u,parent) == find(v,parent)) return edge; // Cycle detected!
            join(u, v,parent,rank); // Merge sets
        }
        
        return {};
    }
};