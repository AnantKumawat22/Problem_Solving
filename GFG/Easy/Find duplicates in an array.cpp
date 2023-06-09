vector<int> duplicates(int arr[], int n) {
    vector<int> vect;
    
    for(int i = 0; i < n; i++)
        arr[arr[i] % n] += n;
        
    for(int i = 0; i < n; i++)
        if((arr[i] / n) > 1) vect.push_back(i);
        
    if(vect.empty()) return {-1};
    return vect;
}