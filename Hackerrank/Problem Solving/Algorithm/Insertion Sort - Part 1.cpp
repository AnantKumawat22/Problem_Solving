void insertionSort1(int n, vector<int> arr) {
    int j = 0, t;
    
    for(int i = 0; i < n; i++){
        t = arr[i];
        for(j = i - 1; (j >= 0 && arr[j] > t); j--){
            arr[j + 1] = arr[j];
            for(int x: arr) cout<<x<<" ";
            cout<<endl;
        }
        arr[j + 1] = t;
    }
    for(int x: arr) cout<<x<<" ";
}