string hackerrankInString(string s) {
    string str = "hackerrank";
    int i = 0, j = 0;
    
    if(s.size() < str.size()) return "NO";
    for(; s[i]; i++){
        if(s[i] == str[j]) j++;
    }
    if(!str[j]) return "YES";
    else return "NO";
}