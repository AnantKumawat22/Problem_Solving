#include <iostream>
using namespace std;

int main()
{
    long long int n, sum = 0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
        sum += i;
    cout << sum;
    return 0;
}
