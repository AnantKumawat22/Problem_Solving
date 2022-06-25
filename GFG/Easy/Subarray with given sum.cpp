vector<int> subarraySum(int arr[], int n, long long s)
{
    long long sum = 0, i = 0, j = 0;

    while ((i < n) || (j < n))
    {
        if (sum == s)
            return {j + 1, i};
        else if (sum > s)
            sum -= arr[j++];
        else if (i < n)
            sum += arr[i++];

        if ((i == n) && (sum < s))
            break;
    }
    return {-1};
}