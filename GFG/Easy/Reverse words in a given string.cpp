string reverseWords(string S)
{
    int j = 0, k = 0;
    string str = "", conv;

    reverse(S.begin(), S.end());
    for (int i = 0; S[i]; i++)
    {
        if (S[i] == '.')
        {
            conv = S[i];
            str.insert(k, conv);
            j = ++k;
            continue;
        }
        conv = S[i];
        str.insert(j, conv);
        k++;
    }
    return str;
}