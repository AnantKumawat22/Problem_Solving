string removeDups(string S)
{
    vector<int> vect(26);
    string str;
    for (int i = 0; S[i]; i++)
        vect[S[i] - 97]++;
    for (int i = 0; S[i]; i++)
    {
        if (vect[S[i] - 97] != 0)
        {
            str += S[i];
            vect[S[i] - 97] = 0;
        }
    }
    return str;
}