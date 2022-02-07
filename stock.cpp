int maxProfit(vector<int>& prices) {
        int left, right;
        left = 0; // time to buy
        right = 1; // time to sell
        int max_profit = 0;
        int cur_profit = 0;
        
        while(right < prices.size()){
            if(prices[left] < prices[right]){
              // calculate profit 
                cur_profit = prices[right] - prices[left];
                if(cur_profit > max_profit){
                    max_profit = cur_profit;
                }
            }
            else{
                left = right;
            }
            right++;
        }
        
    return max_profit;
    }
