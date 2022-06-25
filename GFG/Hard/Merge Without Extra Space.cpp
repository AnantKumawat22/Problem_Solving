void merge(int arr1[], int arr2[], int n, int m)
{
    int l1 = n - 1, s2 = 0, t;

    while (l1 >= 0 && s2 < m)
    {
        if (arr1[l1] > arr2[s2])
        {
            t = arr1[l1];
            arr1[l1] = arr2[s2];
            arr2[s2] = t;
            s2++;
            l1--;
        }
        else
            s2++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}