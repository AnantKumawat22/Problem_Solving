long long int nthFibonacci(long long int n)
{
    long long int res, first = 0, second = 1;

    if (n == 0 || n == 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        res = (first + second) % 1000000007;
        first = second;
        second = res;
    }
    return res;
}