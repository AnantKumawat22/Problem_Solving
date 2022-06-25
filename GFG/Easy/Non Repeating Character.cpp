char nonrepeatingCharacter(string S)
{
    unordered_map<char, int> umap;
    for (int i = 0; S[i]; i++)
        umap[S[i]]++;
    for (int i = 0; S[i]; i++)
        if (umap[S[i]] == 1)
            return S[i];
    return '$';
}