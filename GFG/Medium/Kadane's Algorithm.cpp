long long maxSubarraySum(int arr[], int n)
{
    int max, currmax;
    max = INT_MIN;
    currmax = 0;

    for (int i = 0; i < n; i++)
    {
        currmax += arr[i];
        if (currmax > max)
            max = currmax;
        if (currmax < 0)
            currmax = 0;
    }
    return max;
}