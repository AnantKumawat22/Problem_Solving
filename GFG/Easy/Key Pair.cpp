bool hasArrayTwoCandidates(int arr[], int n, int x) {
    unordered_map<int, int> umap;
    
    for(int i = 0; i < n; i++){
        if(umap[x - arr[i]] > 0) return true;
        else umap[arr[i]]++;
    }
    return false;
}