void stockBuySell(int price[], int n) {
    int bind = 0, sind = 0, buy = price[0], sell = 0, flagToCheckNoProfit = 1;
    
    for(int i = 1; i < n; i++){
        if(price[i - 1] >= price[i]){
            if(sell > 0){ 
                cout<<"("<<bind<<" "<<sind<<") ";
                flagToCheckNoProfit = 0;
                sell = 0;
            }
            buy = price[i];
            bind = i;
        }
        else if(sell < (price[i] - buy)){
            sell = price[i] - buy;
            sind = i;
        }
    }
    if(bind != n - 1) cout<<"("<<bind<<" "<<sind<<") ";
    else if(flagToCheckNoProfit) cout<<"No Profit";
    cout<<endl; // Add this line to get rid of error, it is happened due to poor designing of question.
}