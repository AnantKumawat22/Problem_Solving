void reverseInGroups(vector<long long>& arr, int n, int k){
    vector<long long> vect;
    int x = 0;
    
    for(; ; x += k){
        int i = x + k - 1;
        if(i >= n) i = n - 1;
        for(; i >= x; i--)
            vect.push_back(arr[i]);
        if(i == n - 1){ arr = vect; return; }
    }
}