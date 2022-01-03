bool checkOnesSegment(string s)
{
    int flag = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != '1')
            flag = 1;
        if (s[i] == '1' && flag == 1)
            return false;
    }
    return true;
}