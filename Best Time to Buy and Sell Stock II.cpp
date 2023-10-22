Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = 0;
        for (int i = 0; i<prices.size()-1;i++){
          if(prices[i]<prices[i+1]) s+=(prices[i+1]-prices[i]);
        }
    return s;
    }
};
