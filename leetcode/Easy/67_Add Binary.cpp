string addBinary(string a, string b)
{
    int i, j, carry = 0, sum, first, second;
    string s = "";

    i = a.length() - 1;
    j = b.length() - 1;

    while (i != -1 || j != -1 || carry)
    {
        first = (i != -1) ? a[i--] - '0' : 0;
        second = (j != -1) ? b[j--] - '0' : 0;

        sum = first + second + carry;
        s.insert(0, to_string(sum % 2));
        carry = sum / 2;
    }
    return s;
}