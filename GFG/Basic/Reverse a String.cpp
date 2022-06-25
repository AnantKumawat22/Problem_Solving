string reverseWord(string str)
{
    int i = 0, j = str.length() - 1, t;

    while (i < j)
    {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
    return str;
}