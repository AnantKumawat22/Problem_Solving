#include <iostream>
using namespace std;

int main()
{
    int arr[200];
    for (int i = 0; i < 200; i++)
        cin >> arr[i];
    for (int i = 0; i < 200; i++)
    {
        if (arr[i] == 42)
            break;
        else
            cout << arr[i] << endl;
    }

    return 0;
}
