int min, sum;
min = abs(arr[0] + arr[1]);

for (int i = 0; i < n; i++)
{
    if (i < n - 1)
        sum = abs(arr[i] - arr[i + 1]);
    else
        sum = abs(arr[0] - arr[i]);
    if (sum < min)
    {
        min = sum;
    }
    sum = 0;
}
return min;