class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lo = 0;
        int hi = 1;

        int maxProfit = 0;

        while(hi < prices.size()){
            if(prices[lo] < prices[hi]){
                int profit = prices[hi] - prices[lo];
                maxProfit = max(maxProfit, profit);
            } else {
                lo = hi;
            }
            hi++;
        }

        return maxProfit;
    }
};
