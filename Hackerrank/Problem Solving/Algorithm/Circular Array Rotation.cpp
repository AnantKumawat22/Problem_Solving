vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> vect;
    
    while(k--){
        a.insert(a.begin(), a[a.size() - 1]);
        a.pop_back();
    }
    for (auto x: queries)
        vect.push_back(a[x]);
    return vect;
}