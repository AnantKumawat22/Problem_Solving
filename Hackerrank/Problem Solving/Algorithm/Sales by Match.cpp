int sockMerchant(int n, vector<int> ar)
{
    int paired_socks = 0;
    unordered_map<int, int> umap;

    for (int i = 0; i < ar.size(); i++)
        umap[ar[i]]++;
    for (auto x : umap)
        paired_socks += (x.second / 2);
    return paired_socks;
}