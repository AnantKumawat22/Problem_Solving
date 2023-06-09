// To get the max profit we to buy it in the lowest cost and sell it into the highest price.

// So first assume that first stock is minimum and we have buy it and in first <if> inside while loop, we will check if we will get any less stock then we will change buy with it. else we will put current stock in sell variable and find out its varprofit.

// Now if varprofit > profit than we get our max profit. So we will do, profit = varprofit.

int maxProfit(vector<int> &prices)
{
    int buy = prices[0], sell, profit = 0, varprofit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        if (buy > prices[i])
            buy = prices[i];
        else
        {
            sell = prices[i];
            varprofit = sell - buy;
        }
        if (varprofit > profit)
            profit = varprofit;
    }
    return profit;
}

// Alter

int maxProfit(vector<int>& A) {
    if(A.size() == 0) return 0;
    int buy = A[0], profit = 0, maxprofit = 0;

    for(int i = 1; i < A.size(); i++){
        if(A[i] < buy){
            buy = A[i];
            profit = 0;
        }
        else if(profit < (A[i] - buy)){
            profit = A[i] - buy;
            if(profit > maxprofit) maxprofit = profit;
        }
    } 
    return maxprofit; 
}