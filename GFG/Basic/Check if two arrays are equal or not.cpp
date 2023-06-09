bool check(vector<ll> A, vector<ll> B, int N) {
    unordered_map<int, int> umap;
    for(auto x: A) umap[x]++;
    for(auto x: B) umap[x]--;
    for(auto x: umap) if(x.second > 0) return false;
    return true;
}