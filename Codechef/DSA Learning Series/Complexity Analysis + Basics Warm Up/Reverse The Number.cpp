#include <iostream>
using namespace std;

int main()
{
    int t, n, reverse = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n > 0)
        {
            reverse = reverse * 10 + (n % 10);
            n /= 10;
        }
        cout << reverse << endl;
        reverse = 0;
    }
    return 0;
}
