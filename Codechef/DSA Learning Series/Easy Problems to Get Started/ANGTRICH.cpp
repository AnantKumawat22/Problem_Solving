#include <iostream>
using namespace std;

int main()
{
    int a, b, c, check;
    cin >> a >> b >> c;
    check = a == 0 || b == 0 || c == 0 || (a + b + c) != 180;
    if (check)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
