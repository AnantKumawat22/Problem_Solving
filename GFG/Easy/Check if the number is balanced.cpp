bool balancedNumber(string N)
{
    int sumleft = 0, sumright = 0, mid = N.length() / 2;

    for (int i = 0; i < mid; i++)
    {
        sumleft += int(N[i] - '0');
    }
    for (int i = mid + 1; N[i]; i++)
    {
        sumright += int(N[i] - '0');
    }
    if (sumleft == sumright)
        return true;
    return false;
}