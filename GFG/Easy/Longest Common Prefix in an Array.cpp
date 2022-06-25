string longestCommonPrefix (string arr[], int N){
    string str = arr[0];
    int i, j, strptr = 0;
    
    for(i = 1; i < N; i++){
        strptr = 0;
        for(j = 0; str[strptr] && (j < arr[i].length()); j++){
            if(str[strptr] != arr[i][j]){
                str = str.substr(0, j);
                break;
            }
            else strptr++;
        }
        if(j >= arr[i].length()) str = str.substr(0, j);
    }
    if(str == "") return "-1";
    else return str;
}