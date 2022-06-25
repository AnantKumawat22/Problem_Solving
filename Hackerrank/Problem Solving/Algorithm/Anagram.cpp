int anagram(string s) {
    if(s.length() % 2 != 0) return -1;
    string first = s.substr(0, s.length() / 2);
    string second = s.substr(s.length() / 2, s.length());
    unordered_map<char, int> umap;
    int ans = 0;
    
    for(int i = 0; first[i]; i++) umap[first[i]]++;
    for(int i = 0; second[i]; i++){
        if(umap[second[i]] > 0) umap[second[i]]--;
    }
    
    for(auto i : umap) ans += i.second;
    return ans;
}