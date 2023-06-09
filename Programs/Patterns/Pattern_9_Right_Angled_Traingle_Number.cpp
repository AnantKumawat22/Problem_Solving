// Write a program to print the below pattern.

// 1 
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int n = 4, count = 1;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (i + 1); j++) cout<<count++<<" ";
        cout<<endl;
    }

    return 0;
}
