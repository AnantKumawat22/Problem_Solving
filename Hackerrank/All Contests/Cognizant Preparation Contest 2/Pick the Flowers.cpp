int main()
{
    string str;
    int arr[26] = {0}, max = 0, ind;

    cin >> str;
    for (int i = 0; str[i]; i++)
        arr[str[i] - 'a']++;
    for (int i = 25; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            ind = i;
        }
    }
    cout << char(ind + 'a');
    return 0;
}