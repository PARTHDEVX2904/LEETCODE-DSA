class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int size = piles.size();
        priority_queue<int> maxHeap;
        for(int x : piles){
            maxHeap.push(x);
        }

        int sum = 0;

        for(int i=0;i<size-size/3;i++){
            if(i%2==1){
                sum += maxHeap.top();
            }
            maxHeap.pop();
        }
        return sum;
    }
};