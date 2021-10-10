void merge(int arr[], int l, int m, int r)
{
    int i = l, j = m + 1, k = l, x;
    long long brr[200000];

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            brr[k] = arr[i];
            i++;
        }
        else if (arr[i] > arr[j])
        {
            brr[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= m)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }

    for (x = l; x <= r; x++)
    {
        arr[x] = brr[x];
    }
}

void mergeSort(int arr[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
    else
        return;
}