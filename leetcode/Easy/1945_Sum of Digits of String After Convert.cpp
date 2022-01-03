int getLucky(string s, int k)
{
    string numstr = "";
    int sum = 0, i;

    for (i = 0; s[i]; i++)
    {
        numstr += to_string(s[i] - 96);
    }
    while (k--)
    {
        sum = 0;
        i = 0;
        while (numstr[i])
        {
            sum += int(numstr[i] - 48);
            i++;
        }
        numstr = to_string(sum);
    }
    return sum;
}