class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int validMin = 0;
        int max = 1;

        int maximumProfit = 0;

        while(max < prices.size()){
            if(prices[validMin] < prices[max]){
                maximumProfit = std::max(prices[max] - prices[validMin], maximumProfit);
            } else {
                validMin = max;
            }
            max++;
        }

        return maximumProfit;
    }
};
