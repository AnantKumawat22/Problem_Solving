int temp;
    for(int i = 1; i < n; i+=2){
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
}