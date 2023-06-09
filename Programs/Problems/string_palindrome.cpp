// Q. String Palindrome.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "nitin";
    int i = 0, j = str.length() - 1;

    while(i < j){
        if(str[i] != str[j]){ cout<<"Not Palindrome."; return 0; }
        i++; j--;
    }
    cout<<"Palindrome.";
    return 0;
}