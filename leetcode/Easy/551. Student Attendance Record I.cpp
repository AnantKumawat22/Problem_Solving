bool checkRecord(string s)
{
    int Abs = 0;

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == 'A')
        {
            Abs++;
            if (Abs == 2)
                return false;
        }
        if (i > 1 && s[i] == 'L' && s[i - 1] == 'L' && s[i - 2] == 'L')
            return false;
    }
    return true;
}