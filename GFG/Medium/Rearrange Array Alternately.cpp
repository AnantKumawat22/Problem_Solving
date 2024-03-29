void rearrange(long long *arr, int n)
{
    int k = 0, j = n - 1, max = arr[n - 1] + 1;

    for (int i = 0; i < n; i += 2)
        arr[i] += (arr[j--] % max) * max;
    for (int i = 1; i < n; i += 2)
        arr[i] += (arr[k++] % max) * max;
    for (int i = 0; i < n; i++)
        arr[i] /= max;
}