int X, r;
cin >> X;
while (X > 0)
{
    r = X % 10;
    cout << r;
    X = X / 10;
}