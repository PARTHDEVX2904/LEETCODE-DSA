class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int minBuy = prices[0];
        // int n = prices.size();
        // int maxP = 0;
        // for(int &sell : prices ){
        //     maxP = max(maxP, sell-minBuy);
        //     minBuy = min(sell,minBuy);
        // }
        // return maxP;
        int buy = prices[0];
        int maxP = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i] >= buy){
                maxP = max(maxP,prices[i]-buy);
            }
            else{
                buy = min(buy,prices[i]);
            }
        }
        return maxP;
    }
};