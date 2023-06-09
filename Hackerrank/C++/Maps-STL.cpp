int main() {
    int Q, N, Y;
    string X;
    map<string, int> mp;
    
    cin>>Q;
    while(Q--){
        cin>>N;
        if(N == 1) cin>>X>>Y;
        else cin>>X;
        
        if(N == 1) mp[X] += Y;
        else if(N == 2) mp.erase(X);
        else cout<<mp[X]<<endl;
    }  
    return 0;
}