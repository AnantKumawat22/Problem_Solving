int evaluatePostfix(string S)
{
    int arr[S.length()], top = -1, opr;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '+' || S[i] == '-' || S[i] == '*' || S[i] == '/')
        {
            switch (S[i])
            {
            case '+':
                opr = arr[top - 1] + arr[top];
                break;
            case '-':
                opr = arr[top - 1] - arr[top];
                break;
            case '*':
                opr = arr[top - 1] * arr[top];
                break;
            case '/':
                opr = arr[top - 1] / arr[top];
                break;
            }
            arr[--top] = opr;
        }
        else
            arr[++top] = S[i] - '0';
    }
    return arr[top];
}