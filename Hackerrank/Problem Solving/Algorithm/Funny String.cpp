string funnyString(string s) {
    string str = s;
    reverse(s.begin(), s.end());
    
    for(int i = 0; i < str.size() - 1; i++){
        if(abs(str[i] - str[i + 1]) != abs(s[i] - s[i + 1])) 
            return "Not Funny";
    }
    return "Funny";
}