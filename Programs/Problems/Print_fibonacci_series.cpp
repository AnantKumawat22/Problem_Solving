// Q. Fibonacci Series till 100.

#include <bits/stdc++.h>
using namespace std;

// Recursive
void recursive(int n){
    static int first = 0, second = 1, third;
    if (n > 0){
        third = first + second;
        cout << " " << third;
        first = second;
        second = third;
    }
    recursive(n - 1);
}

// Iterative
void iterative(int n){
    int first = 0, second = 1, third;

    cout << first << " " << second;
    for (int i = 2; i < n; i++){
        third = first + second;
        cout << " " << third;
        first = second;
        second = third;
    }
}

int main(){
    int n = 16;
    // iterative(n);

    cout << "0 1";
    recursive(n);
    return 0;
}