bool isAnagram(string a, string b)
{
    vector<int> vect(26);

    for (int i = 0; a[i]; i++)
        vect[a[i] - 'a']++;
    for (int i = 0; b[i]; i++)
        vect[b[i] - 'a']--;

    for (int i = 0; i < 26; i++)
    {
        if (vect[i] != 0)
            return false;
    }
    return true;
}