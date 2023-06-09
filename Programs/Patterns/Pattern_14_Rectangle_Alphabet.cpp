// Write a program to print the below pattern.

// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main()
{
    int n = 3, t = 65;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout<<char(t++)<<" ";
        cout<<endl;
    }

    return 0;
}
