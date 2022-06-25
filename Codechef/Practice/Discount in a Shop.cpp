#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    string str, s;
    cin >> T;

    while (T--)
    {
        int x = 0, y = 1, min = INT_MAX;
        cin >> N;
        str = to_string(N);

        while (x != str.length())
        {
            s = str.substr(0, x) + str.substr(y, str.length());
            if (stoi(s) < min)
            {
                min = stoi(s);
            }
            x++;
            y++;
        }
        cout << min << endl;
    }
    return 0;
}