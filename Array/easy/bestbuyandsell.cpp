class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPrice = 0;
        int maxProfit = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (prices[i] > maxPrice) {
                maxPrice = prices[i];
            } else {
                maxProfit = max(maxProfit, maxPrice - prices[i]);
            }
        }

        return maxProfit;
    }
};