int migratoryBirds(vector<int> arr) {
    map<int, int> map;
    int ans, max = -1;
    
    for(int i = 0; i < arr.size(); i++) map[arr[i]]++;
    for(auto i: map){
        if(max < i.second){ ans = i.first; max = i.second; }
    }
    return ans;
}