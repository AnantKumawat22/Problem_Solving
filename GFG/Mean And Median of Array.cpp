int median(int A[], int N)
{

    sort(A, A + N);
    return (A[(N - 1) / 2]);
}

int mean(int A[], int N)
{
    //your code here
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    return (sum / N);
}