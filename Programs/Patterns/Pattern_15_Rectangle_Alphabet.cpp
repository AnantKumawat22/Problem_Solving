// Write a program to print the below pattern.

// A B C
// B C D
// C D E

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout<<char(65 + i + j)<<" ";
        cout<<endl;
    }

    return 0;
}
