class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int count = prices.size();
        if (count == 0) return 0;
        int min_value = prices[0];
        int max_profit = 0;
        for (int i = 1; i < count; i++) {
            int profit =  prices[i] - min_value;
            max_profit = (profit >= max_profit) ? profit : max_profit;
            min_value = (prices[i] <= min_value) ? prices[i] : min_value;
        }
        return max_profit;
    }
};