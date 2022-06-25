void reversearr(int arr[], int low, int high)
{
    while (low < high)
    {
        int t = arr[low];
        arr[low] = arr[high];
        arr[high] = t;
        low++;
        high--;
    }
}
void rotateArr(int arr[], int d, int n)
{
    reversearr(arr, 0, n);
    reversearr(arr, 0, n - d);
    reversearr(arr, n - d, n);
}