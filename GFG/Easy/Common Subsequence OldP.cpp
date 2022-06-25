int commonSubseq(string S1, string S2)
{
    vector<int> vect(26);
    for (int i = 0; S1[i]; i++)
        vect[S1[i] - 'A']++;
    for (int i = 0; S2[i]; i++)
        if (vect[S2[i] - 'A'] > 0)
            vect[S2[i] - 'A'] = -1;
    for (int i = 0; i < 26; i++)
        if (vect[i] == -1)
            return 1;
    return 0;
}