string reverseWords(string s)
{
    int i, k = 0, j, t;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == ' ')
        {
            j = i - 1;
            // we Can use reverse function also in place of while loop.
            while (k < j)
            {
                t = s[k];
                s[k] = s[j];
                s[j] = t;
                k++;
                j--;
            }
            k = i + 1;
        }
    }
    j = i - 1;
    while (k < j)
    {
        t = s[k];
        s[k] = s[j];
        s[j] = t;
        k++;
        j--;
    }
    return s;
}