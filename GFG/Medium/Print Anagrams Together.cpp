vector<vector<string>> Anagrams(vector<string> &string_list)
{
    vector<vector<string>> vect;
    string str;
    unordered_map<string, vector<string>> umap;

    for (int i = 0; i < string_list.size(); i++)
    {
        str = string_list[i];
        sort(string_list[i].begin(), string_list[i].end());
        umap[string_list[i]].push_back(str);
    }
    for (auto i : umap)
    {
        vect.push_back(i.second);
    }
    return vect;
}