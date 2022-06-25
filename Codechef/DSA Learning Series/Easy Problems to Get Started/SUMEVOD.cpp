#include <iostream>
using namespace std;

int main()
{
    long long int n, k = 0, odd = 0, even = 0;
    cin >> n;
    for (long long int i = 1, j = 2; k < n; k++, i += 2, j += 2)
    {
        odd += i;
        even += j;
    }
    cout << odd << " " << even;
    return 0;
}
