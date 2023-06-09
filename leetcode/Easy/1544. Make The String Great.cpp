string makeGood(string s)
{
    char arr[s.length()];
    string str;
    int top = -1;

    for (int i = 0; s[i]; i++)
    {
        if (top == -1)
            arr[++top] = s[i];
        else if ((islower(arr[top]) && islower(s[i])) ||
                 (isupper(arr[top]) && isupper(s[i])))
            arr[++top] = s[i];
        else if (toupper(arr[top]) == toupper(s[i]))
            top--;
        else
            arr[++top] = s[i];
    }
    for (int i = 0; i <= top; i++)
    {
        str += arr[i];
    }
    return str;
}