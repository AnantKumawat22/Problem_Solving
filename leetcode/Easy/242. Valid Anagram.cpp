bool isAnagram(string s, string t)
{
    unordered_map<char, int> umap1;
    unordered_map<char, int> umap2;
    for (int i = 0; s[i]; i++)
    {
        umap1[s[i]]++;
    }
    for (int i = 0; t[i]; i++)
    {
        umap2[t[i]]++;
    }
    if (umap1 == umap2)
        return true;
    return false;
}