// row = 3
// col = 5

// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main(){
    int rows = 3, cols = 5;
    // cin>>rows>>cols;

    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}