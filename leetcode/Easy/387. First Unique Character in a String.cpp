int firstUniqChar(string s)
{
    unordered_map<char, int> umap;
    for (int i = 0; s[i]; i++)
        umap[s[i]]++;
    for (int i = 0; s[i]; i++)
        if (umap[s[i]] == 1)
            return i;
    return -1;
}