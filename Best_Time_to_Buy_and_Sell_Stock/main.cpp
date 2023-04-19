class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int priceMin = prices[0];
        int profit{};
        for (size_t i = 1; i < prices.size(); ++i) {
            profit = max(profit, prices[i] - priceMin);
            priceMin = min(priceMin, prices[i]);
        }
        return  profit;
    }
};