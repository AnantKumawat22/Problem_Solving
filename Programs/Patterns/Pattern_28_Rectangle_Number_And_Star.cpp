// Write a program to print the below pattern.

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++) cout<<(j + 1)<<" ";
        for(int j = 0; j < i; j++) cout<<"* * ";
        for(int j = 0; j < n - i; j++) cout<<(n - j)<<" ";
        cout<<endl;
    }

    return 0;
}
