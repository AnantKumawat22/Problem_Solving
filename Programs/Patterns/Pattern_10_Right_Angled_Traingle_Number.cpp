// Write a program to print the below pattern.

// 1 
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin>>n;

    for(int i = 0; i < n; i++){
        int temp = i + 1;
        for(int j = 0; j < (i + 1); j++) cout<<temp++<<" ";
        cout<<endl;
    }

    return 0;
}
