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
bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (st.empty())
                return false;
            else
            {
                if (check(st.top(), s[i]))
                {
                    st.pop();
                }
                else
                    return false;
            }
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}