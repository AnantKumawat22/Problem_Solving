int T;
cin >> T;
while (T--)
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i += 2)
    {
        cout << str[i];
    }
    cout << " ";
    for (int i = 1; i < str.length(); i += 2)
    {
        cout << str[i];
    }
    cout << endl;
}