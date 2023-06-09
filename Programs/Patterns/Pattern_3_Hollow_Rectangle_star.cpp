// Write a program to print the below pattern.

// * * * * *
// *       *
// * * * * *

#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 5;
    // cin>>rows>>cols;

    for (int i = 0; i < rows; i++){
        if (i == 0 || i == rows - 1)
            for (int j = 0; j < cols; j++)
                cout << "* ";
        else{
            cout << "* ";
            for (int j = 0; j < cols - 2; j++)
                cout << "  ";
            cout << "* ";
        }
            
        cout << endl;
    }
    return 0;
}