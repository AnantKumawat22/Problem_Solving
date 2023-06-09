// Write a program to print the below pattern.

// A
// B C
// C D E
// D E F G

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++) cout<<char(65 + i + j)<<" ";
        cout<<endl;
    }

    return 0;
}
