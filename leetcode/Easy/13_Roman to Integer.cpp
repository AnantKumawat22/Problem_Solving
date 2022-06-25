int romanToInt(string s)
{
    int res = 0, i;
    unordered_map<char, int> umap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    for (i = 0; i < s.length() - 1; i++)
    {
        if (umap[s[i]] >= umap[s[i + 1]])
            res += umap[s[i]];
        else if (umap[s[i]] < umap[s[i + 1]])
        {
            res = res + (umap[s[i + 1]] - umap[s[i]]);
            i++;
        }
    }
    if (i == s.length() - 1)
        res += umap[s[i]];
    return res;
}