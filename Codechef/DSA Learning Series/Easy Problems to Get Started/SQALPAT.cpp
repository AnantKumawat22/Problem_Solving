#include <iostream>
using namespace std;

int main()
{
    int n, k = 1, t;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            for (int i = 0; i < 5; i++)
            {
                cout << k++ << " ";
                t = k;
            }
        else
            for (int i = 0; i < 5; i++)
            {
                cout << (t + 4 - i) << " ";
                k++;
            }
        cout << endl;
    }
    return 0;
}
