int maxPower(string s)
{
    int prevmax, max, k;
    prevmax = max = k = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[k] != s[i])
        {
            if (prevmax < max)
                prevmax = max;
            k = i--;
            max = 0;
        }
        else
            max++;
    }
    if (prevmax < max)
        return max;
    return prevmax;
}