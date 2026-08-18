class Solution {
public:
    void dfs(int city, vector<vector<int>>& isConnected, unordered_set<int>& visited){
        visited.insert(city);

        for(int i=0;i<isConnected[city].size();i++){
            int connected = isConnected[city][i];
            if(connected == 1 && visited.find(i) == visited.end()){
                dfs(i,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_set<int> visited;
        int province = 0;

        for(int i=0;i<isConnected.size();i++){
            if(visited.find(i) == visited.end()){
                dfs(i,isConnected,visited);
                province++;
            }
        }
        return province;
    }

};