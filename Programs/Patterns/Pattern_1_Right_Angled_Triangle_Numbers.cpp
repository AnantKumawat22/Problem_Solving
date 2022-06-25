// Write a program to print the below pattern.

//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main()
{
    int i, j, n = 5, k = 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (2 * n) - k; j++)
        {
            cout << " ";
        }
        k += 2;
        for (j = 1; j < i + 2; j++)
        {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}