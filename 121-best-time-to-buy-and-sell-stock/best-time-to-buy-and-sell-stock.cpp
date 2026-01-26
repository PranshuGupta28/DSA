class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit=0;
        int buyPrice=prices[0];

        for(int i=0;i<prices.size();i++){     
            int currProfit=prices[i]-buyPrice;
            if(currProfit>maxProfit){
                maxProfit=currProfit;
            }
            if(prices[i]<buyPrice){
            buyPrice=prices[i];
            }
        }
        return maxProfit;     
    }
};