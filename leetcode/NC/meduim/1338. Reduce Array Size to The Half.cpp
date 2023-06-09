int minSetSize(vector<int>& arr) {
    unordered_map<int, int> umap;
    priority_queue<int> pq;
    int count = 0, diff = arr.size();
    
    for(auto x: arr) umap[x]++;
    for(auto x: umap) pq.push(x.second);
        
    while(diff > (arr.size() / 2)){
        diff -= pq.top();
        pq.pop();
        count++;
    }
    return count;
}