class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int max = 0;
        for (int i = 0 ; i < prices.size() ; i++)
        {    
            int profit = prices[i] - minPrice;
            if (profit > max)
                max = profit;
            if (prices[i] < minPrice)
                minPrice = prices[i];
        }
        return max;
    }
};
