void binSort(int A[], int N)
{
    int k = 0, t;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
        {
            t = A[k];
            A[k] = A[i];
            A[i] = t;
            k++;
        }
    }
}