// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_6194560?leftPanelTabValue=PROBLEM



int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int mini = prices[0];
    int maxprofit  = 0;
    for(int i=0; i<prices.size(); i++){
        int cost = prices[i] - mini;
        maxprofit = max(maxprofit,cost);
        mini = min(mini,prices[i]);
    }
    return maxprofit;
}


// tc-o(n)
// sc-o(1)