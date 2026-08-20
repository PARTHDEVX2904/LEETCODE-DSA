class Solution {
public:
    int catMouseGame(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<vector<int>>> state(n, vector<vector<int>>(n, vector<int>(2, 0)));
        vector<vector<vector<int>>> indegree(n, vector<vector<int>>(n, vector<int>(2, 0)));
        queue<tuple<int, int, int, int>> q;

        for(int i=0;i<n;++i){
            if(i != 0){
                state[0][i][0] = state[0][i][1] = 1;
                q.emplace(0,i,0,1);
                q.emplace(0,i,1,1);

                state[i][i][0] = state[i][i][1] = 2;
                q.emplace(i,i,0,2);
                q.emplace(i,i,1,2);
            }

            for(int j=0;j<n;j++){
                indegree[i][j][0] = graph[i].size();
                indegree[i][j][1] = graph[j].size();

                if(find(graph[j].begin(),graph[j].end(),0) != graph[j].end()){
                    --indegree[i][j][1];
                }
            }
        }

        //Process the queue
        while(!q.empty()){
            auto [mouse,cat,turn, result] = q.front();
            q.pop();
            int prevTurn = 1 - turn ;

            if(prevTurn == 0){ // yaha pe hum mouse ke peeche wale sab ko search karenge 
                for(int prevMouse : graph[mouse]){
                    if(state[prevMouse][cat][prevTurn] == 0){
                        if( result == 1 ){ // Mouse wins
                            state[prevMouse][cat][prevTurn] = 1;
                            q.emplace(prevMouse,cat,prevTurn,1);
                        } else{ // yaha pe cats ke wins ko calculate karenge 
                                if(--indegree[prevMouse][cat][prevTurn] == 0){
                                    state[prevMouse][cat][prevTurn] = 2;
                                    q.emplace(prevMouse,cat,prevTurn,2);
                                }
                        }
                    }
                }
            } else{   // yaha pe hum karenge cat ke jitne ki cases ko mkbs
                    for(int prevCat : graph[cat]){
                        if(prevCat == 0) continue; // cat yaha nahi jaa sakta , kyunki ye hole hai 
                        if(state[mouse][prevCat][prevTurn] == 0){
                            if(result == 2){ // cat wins
                                state[mouse][prevCat][prevTurn] = 2;
                                q.emplace(mouse,prevCat,prevTurn,2);
                            }else{
                                if(--indegree[mouse][prevCat][prevTurn]==0){
                                    state[mouse][prevCat][prevTurn] = 1;
                                    q.emplace(mouse,prevCat,prevTurn, 1);
                                }
                            }
                        }
                    }
            }

        }

        return state[1][2][0];
    }
};