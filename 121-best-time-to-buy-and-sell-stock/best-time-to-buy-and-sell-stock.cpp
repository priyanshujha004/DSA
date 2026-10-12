class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost = INT_MAX; int maxProfit = 0;
        for(int idx=0; idx<prices.size(); idx++){
            minCost = min(minCost, prices[idx]);
            maxProfit = max(maxProfit, prices[idx]-minCost);
        }
        if(maxProfit) return maxProfit;
        else return 0;
    }
};