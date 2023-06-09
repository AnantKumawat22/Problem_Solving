int findMinimumInvertingFactor(int arr[], int N) { 
    for(int i = 0; i < N; i++){
        int num = 0;
        while(arr[i] > 0){
            num = num*10 + (arr[i] % 10);
            arr[i] /= 10;
        }
        arr[i] = num;
    }
    sort(arr, arr+ N);
    int min = INT_MAX;
    for(int i = 0; i < N - 1; i++){
        if((arr[i + 1] - arr[i]) < min) min = arr[i + 1] - arr[i];
    }
    return min;
} 