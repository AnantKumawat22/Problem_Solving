int marsExploration(string s)
{
    string str = "SOS";
    int alt = 0, j = 0;

    for (int i = 0; s[i]; i++)
    {
        if (s[i] != str[j])
            alt++;
        j++;
        if (!str[j])
            j = 0;
    }
    return alt;
}