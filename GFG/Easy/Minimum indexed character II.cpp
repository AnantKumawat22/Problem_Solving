int minIndexChar(string str, string patt)
{
    unordered_map<char, int> umap;
    for (int i = 0; patt[i]; i++)
        umap[patt[i]]++;
    for (int i = 0; str[i]; i++)
        if (umap[str[i]] > 0)
            return i;
    return -1;
}