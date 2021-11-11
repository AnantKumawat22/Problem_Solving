void quickSort(int arr[], int low, int high)
{
    // code here
    int ind;
    if (low < high)
    {
        ind = partition(arr, low, high);
        quickSort(arr, low, ind - 1);
        quickSort(arr, ind + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    // Your code here
    int temp, t;
    int i = low + 1;
    int j = high;
    temp = arr[low];
    do
    {
        while (temp >= arr[i])
            i++;
        while (temp < arr[j])
            j--;

        if (i < j)
        {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    } while (i < j);
    t = arr[j];
    arr[j] = arr[low];
    arr[low] = t;
    return j;
}