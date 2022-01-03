int findFloor(vector<long long> v, long long n, long long x)
{
    long int low, high, mid;
    low = 0;
    high = n - 1;

    while (low < high)
    {
        mid = (low + high) / 2;

        if (v[mid] == x)
            return mid;
        else if (v[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (low == 0)
        return -1;
    return low;
}