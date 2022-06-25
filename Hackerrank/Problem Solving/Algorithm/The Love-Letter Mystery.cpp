int theLoveLetterMystery(string s) {
    int count = 0, i = 0, j = s.length() - 1;
    while(i < j){
        if(s[i] != s[j])
            count += abs(s[i] - s[j]);
        i++; j--;
    }
    return count;
}