int maxProfit(int* prices, int pricesSize){
    int min = prices[0];
    int max = prices[0];
    int profit = max - min;

    for(int i = 0; i < pricesSize; i++) {
        if(min > prices[i]) {
            min = prices[i];
            max = prices[i];
        }
        else if(max < prices[i]) {max = prices[i];}
        if(profit < (max-min)){profit = max - min;}
    }
    
    return profit;
}
