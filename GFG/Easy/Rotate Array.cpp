void reversearr(int arr[], int low, int high){
    while (low < high){
        int t = arr[low];
        arr[low] = arr[high];
        arr[high] = t;
        low++;
        high--;
    }
}
void rotateArr(int arr[], int d, int n){
    d = d % n;
    if(d == 0) return;

    reversearr(arr, 0, n - 1);
    reversearr(arr, 0, n - d - 1);
    reversearr(arr, n - d, n - 1);
}