class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        double ans = 0;

        int n = prices.size();
        int m = discounts.size();

        int i=0,j=0;
        while(i<n && j<m){
            double temp = (double)(prices[i] * (100.0-discounts[j])/100.0);
            ans += temp;
            i++;
            j++;
        }
        while(i<n){
            ans += (double)prices[i++];
        }
        while(j<m){
            break;
        }

        return ans;
    }
};