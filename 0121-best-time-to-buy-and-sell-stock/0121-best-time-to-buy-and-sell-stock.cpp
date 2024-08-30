class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minsofar=prices[0];
        for(int i=0;i<prices.size();i++){
            minsofar=min(prices[i],minsofar);
            int profit=prices[i]-minsofar;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
        
    }
};