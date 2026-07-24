int maxProfit(int* prices, int pricesSize) {
    int buy=0,sell=1,profit=0,i=0;

    buy=prices[0];

    for(i=0;i<pricesSize;i++){
        sell=prices[i];
        if(profit<sell-buy){
            profit=sell-buy;
        }

        if(sell<buy){
            buy=sell;

        }
    }

    return profit;
}