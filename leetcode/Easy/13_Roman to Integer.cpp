int findind(char arr[], char ch)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == ch)
            return i;
    }
    return -1;
}
int romanToInt(string s)
{
    char arr[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int arrval[] = {1, 5, 10, 50, 100, 500, 1000};
    int ind, res = 0, i;
    int A[s.length()];

    for (i = 0; i < s.length(); i++)
    {
        ind = findind(arr, s[i]);
        A[i] = arrval[ind];
    }

    for (i = 0; i < s.length() - 1; i++)
    {
        if (A[i] >= A[i + 1])
        {
            res += A[i];
        }
        else if (A[i] < A[i + 1])
        {
            res = res + (A[i + 1] - A[i]);
            i++;
        }
    }
    if (i == s.length() - 1)
    {
        res += A[i];
    }
    return res;
}