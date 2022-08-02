long long int minSum(int arr[], int n){
    sort(arr, arr + n);
    long long int sum1 = arr[0], sum2 = arr[1], i = 2, j = 3;
    if(n == 1) return arr[0];
    
    while(1){
        if((i >= n) && (j >= n)) break;
        if(i < n){ sum1 = (sum1 * 10) + arr[i]; i+= 2;}
        if(j < n){ sum2 = (sum2 * 10) + arr[j]; j+= 2; }
    }
    return (sum1 + sum2);
}