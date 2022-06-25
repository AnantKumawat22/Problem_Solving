vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    unordered_map<string, int> umap;
    vector<int> vect;
    for (int i = 0; i < strings.size(); i++)
        umap[strings[i]]++;
    for (int i = 0; i < queries.size(); i++)
    {
        vect.push_back(umap[queries[i]]);
    }
    return vect;
}