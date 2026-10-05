class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i = 0;
        int mini = INT_MAX;
        int profit = 0 ;
        while(i<prices.size()){
            // if(prices[i]<mini){
            //     mini = prices[i];
            //     idx= i;
                 mini = min(mini, prices[i]);
                 profit = max(profit, prices[i] - mini);
            i++;
        }
        // for(int i = idx;i <prices.size();i++){
        //      if(prices[i]>maxi){
        //         maxi = prices[i];
        //     }
        // }
         return profit;
    }
};