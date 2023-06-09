bool pallan(int n){
    string sub, str;
    int sum = 0, j = 0, i = 0, slen;
    
    while(n > 0){
        sub += char((n % 10) + 97);
        sum += n % 10; n /= 10;
    }
    reverse(sub.begin(), sub.end());
    slen = sub.length();
    
    for(; i < sum; i++){
        if(j == slen) j = 0;
        str += sub[j++];
    }
    for(i=0, j = str.length()-1; i<j; i++, j--)
        if(str[i] != str[j]) return false;
    return true;
}