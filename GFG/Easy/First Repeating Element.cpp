unordered_map<int, int> umap;
for (int i = 0; i < n; i++)
{
    umap[arr[i]]++;
}
for (int i = 0; i < n; i++)
{
    if (umap[arr[i]] >= 2)
        return i + 1;
}
return -1;