int match(char a, char b)
{
    if ((a == '(') && (b == ')'))
        return 1;
    if ((a == '[') && (b == ']'))
        return 1;
    if ((a == '{') && (b == '}'))
        return 1;
    return 0;
}
bool ispar(string x)
{
    int arr[x.length()];
    int top = -1;

    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == '(' || x[i] == '[' || x[i] == '{')
        {
            top++;
            arr[top] = x[i];
        }
        else if (x[i] == ')' || x[i] == ']' || x[i] == '}')
        {
            if (top == -1)
                return false;
            if (match(arr[top], x[i]))
                top--;
            else
                return false;
        }
    }
    if (top == -1)
        return true;
    return false;
}