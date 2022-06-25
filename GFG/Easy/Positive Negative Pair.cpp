vector<int> findPairs(int arr[], int n)
{
    unordered_map<int, int> umap;
    vector<int> vect;
    for (int i = 0; i < n; i++)
    {
        umap[abs(arr[i])] = umap[abs(arr[i])] + arr[i];
        if (umap[abs(arr[i])] == 0 && arr[i] != 0)
        {
            vect.push_back(-abs(arr[i]));
            vect.push_back(abs(arr[i]));
        }
    }
    return vect;
}