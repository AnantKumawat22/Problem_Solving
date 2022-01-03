int check(char A, char B)
{
    if (A == '(' && B == ')')
        return 1;
    else if (A == '[' && B == ']')
        return 1;
    else if (A == '{' && B == '}')
        return 1;
    return 0;
}

string isBalanced(string s)
{
    char arr[s.length()];
    int top = -1;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            arr[++top] = s[i];
        }
        else
        {
            if (check(arr[top], s[i]))
                top--;
            else
                return "NO";
        }
    }
    if (top == -1)
        return "YES";
    return "NO";
}