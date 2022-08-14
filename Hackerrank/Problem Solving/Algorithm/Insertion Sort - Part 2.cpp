void insertionSort2(int n, vector<int> arr) {
    int t, j;
    for(int i = 1; i < n; i++){
        t = arr[i];
        for(j = i - 1; (j >= 0 && arr[j] > t); j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = t;
        for(auto ele: arr) cout<<ele<<" ";
        cout<<endl;
    }
}