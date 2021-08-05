//O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_price = INT_MAX;
        int n = prices.size();

        for(int i =0; i< n; i++){
            min_price = min(prices[i], min_price);
            profit = max(profit, prices[i] - min_price);
            
        }
        return profit;
    }
};
