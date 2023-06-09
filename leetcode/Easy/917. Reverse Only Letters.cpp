string reverseOnlyLetters(string s)
{
    int i = 0, j = s.length() - 1, t, checki, checkj;

    while (i < j)
    {
        checki = s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z';
        checkj = s[j] >= 'a' && s[j] <= 'z' || s[j] >= 'A' && s[j] <= 'Z';

        if (checki && checkj)
        {
            t = s[i];
            s[i] = s[j];
            s[j] = t;
            i++;
            j--;
        }
        else if (checki)
            j--;
        else if (checkj)
            i++;
        else
        {
            i++;
            j--;
        }
    }
    return s;
}