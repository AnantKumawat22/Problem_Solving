string addStrings(string num1, string num2)
{
    int i, j, r, carry = 0, sum = 0, first, second;
    string s = "";

    i = num1.length() - 1;
    j = num2.length() - 1;

    while (i != -1 || j != -1 || carry)
    {
        if (i != -1)
            first = int(num1[i--] - 48);
        else
            first = 0;

        if (j != -1)
            second = int(num2[j--] - 48);
        else
            second = 0;

        sum = first + second + carry;
        r = sum % 10;
        s.insert(0, to_string(r));
        carry = sum / 10;
    }
    return s;
}