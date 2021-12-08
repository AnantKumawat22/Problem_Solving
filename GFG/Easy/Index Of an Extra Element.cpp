int low, mid, high;
low = 0;
high = n - 1;
while (low < high)
{
    mid = (low + high) / 2;
    if (a[mid] == b[mid])
        low = mid + 1;
    else
        high = mid;
}
return high;