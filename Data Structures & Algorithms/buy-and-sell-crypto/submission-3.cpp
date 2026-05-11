class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i = 0; i < prices.size(); i++){
            for(int j = i; j < prices.size(); j++){
                profit = std::max(prices[j] - prices[i], profit);
            }
        }

        return profit;
    }
};
