string findSum(string X, string Y)
{
    string str;
    int i = X.size() - 1, j = Y.size() - 1, carry = 0, first, second, sum;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            first = X[i--] - '0';
        else
            first = 0;

        if (j >= 0)
            second = Y[j--] - '0';
        else
            second = 0;

        sum = first + second + carry;
        str.insert(0, to_string(sum % 10));
        carry = sum / 10;
    }
    i = 0;
    while (str.size() > 1 && str[i] == '0')
    {
        str.erase(0, 1);
    }

    return str;
}