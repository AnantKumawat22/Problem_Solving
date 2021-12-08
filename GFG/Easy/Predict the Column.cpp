int prevcount = 0, max, count = 0;
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < N; j++)
    {
        if (arr[j][i] == 0)
            count++;
    }
    if (prevcount < count)
    {
        prevcount = count;
        max = i;
    }
    count = 0;
}
return max;