void swap(int *A, int *B)
{
    int t;
    t = *A;
    *A = *B;
    *B = t;
}

void threeWayPartition(int arr[], int n, int a, int b)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < a)
        {
            swap(&arr[k++], &arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= a && arr[i] <= b)
        {
            swap(&arr[k++], &arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
        {
            swap(&arr[k++], &arr[i]);
        }
    }
}