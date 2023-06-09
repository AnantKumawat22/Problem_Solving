int countWords(vector<string> &words1, vector<string> &words2)
{
    unordered_map<string, int> umap;
    int count = 0;

    for (int i = 0; i < words1.size(); i++)
        umap[words1[i]]++;
    for (int i = 0; i < words2.size(); i++)
    {
        if (umap[words2[i]] == 1)
            umap[words2[i]]--;
        else
            umap[words2[i]] = -1;
    }
    for (auto i : umap)
        if (i.second == 0)
            count++;
    return count;
}