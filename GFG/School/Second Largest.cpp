int print2largest(int arr[], int n) {
    int sec = -1, lar = arr[0];
    
    for(int i = 1; i < n; i++){
        if(arr[i] > lar){
            sec = lar;
            lar = arr[i];
        }
        else if(sec < arr[i] && lar > arr[i]){
            sec = arr[i];
        }
    }
    return sec;
}