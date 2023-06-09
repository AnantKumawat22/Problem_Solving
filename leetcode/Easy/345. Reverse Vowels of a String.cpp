string reverseVowels(string s)
{
    int i, j, checki, checkj;
    char temp;
    i = 0;
    j = s.size() - 1;
    while (i < j)
    {
        checki = s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                 s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U';

        checkj = s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ||
                 s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U';

        if (checki && checkj)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        else if (checki)
            j--;
        else
            i++;
    }
    return s;
}