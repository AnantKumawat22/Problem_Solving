int countWords(string list[], int n)
{

    unordered_map<string, int> umap;
    int count = 0;

    for (int i = 0; i < n; i++)
        umap[list[i]]++;
    for (auto i : umap)
        if (i.second == 2)
            count++;
    return count;
}