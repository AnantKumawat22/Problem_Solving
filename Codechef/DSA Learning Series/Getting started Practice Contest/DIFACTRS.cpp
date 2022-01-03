#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int arr[n], k = 0;

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            arr[k++] = i;
            count++;
        }

    cout << count << endl;
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    return 0;
}
