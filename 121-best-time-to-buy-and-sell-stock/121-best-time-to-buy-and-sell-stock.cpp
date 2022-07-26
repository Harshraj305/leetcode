class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int currMin = INT_MAX;

        for (int i=0; i<prices.size(); i++) {
            currMin = min(currMin, prices[i]);
            profit = max(profit, prices[i] - currMin);
        }
        
        return profit;
        
    }
};