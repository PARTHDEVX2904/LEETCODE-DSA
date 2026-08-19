class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // we will use the priority queue here to get heaviest two 
        priority_queue<int> pq;
        for(int x:stones){
            pq.push(x);
        }
        int y =0,x=0;
        while(pq.size()>1){
            y = pq.top();
            pq.pop();
            x = pq.top();
            pq.pop();

            // make the operations
            if(x==y){
                continue;
            }
            else{
                pq.push(y-x);
            }
        }

        int ans = 0;
        if(pq.empty()){
            return ans;
        }
        return ans = pq.top();

    }
};