int n = 0, flag = 0, i = 0;
        
if(str[0] == '-'){
    flag = 1;
    i = 1;
}
for(; i < str.length(); i++){
    if(str[i] >= '0' && str[i] <= '9'){
        n = n*10 + str[i] - '0';
    }
    else{
        return -1;
    }
}
if(flag)
    return (-n);
else
    return n;