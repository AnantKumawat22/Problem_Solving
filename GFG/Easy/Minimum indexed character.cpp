string printMinIndexChar(string S, string patt)
{
    unordered_map<char, int> umap;
    string str;

    for (int i = 0; S[i]; i++)
        umap[S[i]]++;
    for (int i = 0; patt[i]; i++)
        umap[patt[i]] = -1;

    for (int i = 0; S[i]; i++)
    {
        if (umap[S[i]] == -1)
        {
            str = S[i];
            return str;
        }
    }
    return "$";
}