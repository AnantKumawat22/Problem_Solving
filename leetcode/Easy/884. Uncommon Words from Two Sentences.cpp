vector<string> uncommonFromSentences(string s1, string s2)
{
    unordered_map<string, int> umap;
    vector<string> vect;
    string str = "";
    int i = 0, j = 0;

    while (1)
    {
        if (s1[i] == ' ')
        {
            umap[str]++;
            str = "";
        }
        else
            str += s1[i];

        i++;
        if (i == s1.length())
        {
            umap[str]++;
            str = "";
            break;
        }
    }
    while (1)
    {
        if (s2[j] == ' ')
        {
            if (umap[str] >= 1)
                umap[str] = -1;
            else if (umap[str] != -1)
                umap[str]++;
            str = "";
        }
        else
            str += s2[j];

        j++;
        if (j == s2.length())
        {
            if (umap[str] >= 1)
                umap[str] = -1;
            else if (umap[str] != -1)
                umap[str]++;
            break;
        }
    }
    for (auto i : umap)
        if (i.second == 1)
            vect.push_back(i.first);
    return vect;
}