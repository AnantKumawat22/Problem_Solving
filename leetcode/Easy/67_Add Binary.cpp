string addBinary(string a, string b)
{
    int i, j, r, carry = 0, sum = 0, first, second;
    string s = "";

    i = a.length() - 1;
    j = b.length() - 1;

    while (i != -1 || j != -1 || carry)
    {
        if (i != -1)
            first = int(a[i--] - 48);
        else
            first = 0;

        if (j != -1)
            second = int(b[j--] - 48);
        else
            second = 0;

        sum = first + second + carry;

        r = sum % 2;
        s.insert(0, to_string(r));
        carry = sum / 2;
    }
    return s;
}