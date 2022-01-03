int closing(string s, int pos)
{
    int top = 0;
    for (int i = pos + 1; s[i]; i++)
    {
        if (s[i] == '[')
            top++;
        else if (s[i] == ']')
        {
            if (top == 0)
            {
                return i;
            }
            top--;
        }
    }
}