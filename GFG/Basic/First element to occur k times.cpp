int firstElementKTime(int a[], int n, int k){
    unordered_map<int, int> umap;
    
    for(int i = 0; i < n; i++){
        if(umap[a[i]] == k-1) return a[i];
        else umap[a[i]]++;
    }
    return -1;
}