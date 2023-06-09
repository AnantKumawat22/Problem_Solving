// Write a program to print the below pattern.

// D
// C D
// B C D
// A B C D

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) cout<<char(65 + (n - i - 1) + j)<<" ";
        cout<<endl;
    }

    return 0;
}
