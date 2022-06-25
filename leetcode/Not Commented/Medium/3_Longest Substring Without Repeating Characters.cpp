int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> umap;
    int j = 0, len = 0, maxlen = 0, sl = 0;

    while (s[j])
    {
        umap[s[j]]++;
        len++;

        if (umap[s[j]] > 1)
        {
            len = 0;
            j = ++sl;
            umap.clear();
        }
        else
            j++;
        if (len > maxlen)
            maxlen = len;
    }
    return maxlen;
}