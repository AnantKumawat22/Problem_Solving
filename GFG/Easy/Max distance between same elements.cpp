int maxDistance(int arr[], int n)
{
    unordered_map<int, int> umap;
    int max = 0, diff;
    for (int i = 0; i < n; i++)
    {
        if (umap[arr[i]] > 0)
        {
            diff = abs(umap[arr[i]] - 1 - i);
            if (diff > max)
                max = diff;
        }
        else
            umap[arr[i]] = i + 1;
    }
    return max;
}