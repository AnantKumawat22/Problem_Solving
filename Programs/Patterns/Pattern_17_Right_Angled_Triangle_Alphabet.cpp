// Write a program to print the below pattern.

// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;

int main()
{
    int n = 4, t = 65;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) cout<<char(t++)<<" ";
        cout<<endl;
    }

    return 0;
}
