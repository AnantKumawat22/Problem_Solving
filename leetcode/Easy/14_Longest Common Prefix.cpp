// we choose the first and last string in the array.They are supposed to be the most different among all the pairs of strings in the sorted array.

string longestCommonPrefix(vector<string> &strs)
{
    string restr = "";
    int i = 0, j = 0;
    sort(strs.begin(), strs.end());
    while (strs[0][i] && strs[strs.size() - 1][j])
    {
        if (strs[0][i] == strs[strs.size() - 1][j])
        {
            restr += strs[0][i];
            i++;
            j++;
        }
        else
            break;
    }
    return restr;
}