void reverseString(vector<char> &s)
{
    int i, j;
    char temp;
    i = 0;
    j = s.size() - 1;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}