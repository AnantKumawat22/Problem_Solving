string caseSort(string str, int n)
{
    string lowerstr = "", upperstr = "";
    int j = 0, k = 0;
    for (int i = 0; str[i]; i++)
    {
        if (islower(str[i]))
            lowerstr += str[i];
        else
            upperstr += str[i];
    }
    sort(lowerstr.begin(), lowerstr.end());
    sort(upperstr.begin(), upperstr.end());
    for (int i = 0; str[i]; i++)
    {
        if (islower(str[i]))
            str[i] = lowerstr[j++];
        else
            str[i] = upperstr[k++];
    }
    return str;
}