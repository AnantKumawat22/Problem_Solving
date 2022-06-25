vector<vector<int> > stockBuySell(vector<int> A, int n){
    vector<vector<int>> vect;
    int bind = 0, sind = 0, buy = A[0], sell = 0;
    
    for(int i = 1; i < n; i++){
        if(A[i - 1] >= A[i]){
            if(sell > 0){ 
                vect.push_back({bind, sind});
                sell = 0;
            }
            buy = A[i];
            bind = i;
        }
        else if(sell < (A[i] - buy)){
            sell = A[i] - buy;
            sind = i;
        }
    }
    if(bind != n - 1)
        vect.push_back({bind, sind});
    return vect;
}