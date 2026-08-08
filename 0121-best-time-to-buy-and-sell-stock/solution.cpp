class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuy = prices[0];
        int n = prices.size();
        int maxP = 0;
        for(int &sell : prices ){
            maxP = max(maxP, sell-minBuy);
            minBuy = min(sell,minBuy);
        }
        return maxP;
    }
};