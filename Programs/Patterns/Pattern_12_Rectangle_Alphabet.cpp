// Write a program to print the below pattern.

// A A A
// B B B
// C C C

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    // cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout<<char(65 + i)<<" ";
        cout<<endl;
    }

    return 0;
}
