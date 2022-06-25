string minRemoveToMakeValid(string s)
{
    string str;
    int count = 0;

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '(')
            count++;
        else if (s[i] == ')')
            if (count == 0)
                s[i] = '0';
            else
                count--;
    }
    count = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ')')
            count++;
        else if (s[i] == '(')
            if (count == 0)
                s[i] = '0';
            else
                count--;
    }
    for (int i = 0; s[i]; i++)
        if (s[i] != '0')
            str += s[i];
    return str;
}