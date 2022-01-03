bool checkPangram(string &str)
{
    vector<int> vect(26);
    for (int i = 0; str[i]; i++)
        vect[tolower(str[i]) - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (vect[i] == 0)
            return false;
    }
    return true;
}