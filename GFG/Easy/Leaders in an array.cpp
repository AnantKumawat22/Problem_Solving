vector<int> leaders(int a[], int n){
    vector<int> vect;
    int max = -1;
    
    for(int i = n - 1; i >= 0; i--){
        if(max <= a[i]){
            max = a[i];
            vect.push_back(a[i]);
        }
    }
    reverse(vect.begin(),vect.end());
    return vect;
}