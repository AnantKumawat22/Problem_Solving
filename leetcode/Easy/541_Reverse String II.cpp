void swap(char &A, char &B)
{
    char t;
    t = B;
    B = A;
    A = t;
}
string reverseStr(string s, int k)
{
    int first = 0, i, j, len = s.length();

    if (k > len)
    {
        reverse(s.begin(), s.end());
        return s;
    }
    i = 0;
    j = k - 1;
    while (1)
    {
        if (i >= len || j >= len)
            break;
        swap(s[i++], s[j--]);

        if (i > j)
        {
            first = first + 2 * k;
            i = first;
            j = first + k - 1;
        }
    }
    reverse(s.begin() + i, s.end());
    return s;
}