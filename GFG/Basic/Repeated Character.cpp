char firstRep (string s){
    vector<int> vect(26);
    
    for(auto &ch: s) vect[ch - 'a']++;
    for(auto &ch: s) if(vect[ch - 'a'] > 1) return ch;
    return '#';
}