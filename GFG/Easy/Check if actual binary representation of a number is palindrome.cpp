int binaryPalin(long long int N)
{
    int r, i = 0, j;
    string str;

    while (N > 0)
    {
        r = N % 2;
        str += to_string(r);
        N /= 2;
    }
    j = str.length() - 1;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
            return 0;
    }
    return 1;
}