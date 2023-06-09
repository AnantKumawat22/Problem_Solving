// Q. Check For prime Number.

// Logic :- 
// Because, the smallest multiple that will not make it a prime is 2. If you have checked all the numbers from 0 to n/2, what multiple is left that could possibly work? If multiple by 2 is bigger than n, then a multiple of 3 or 4 etc will also be bigger than n.

// So the largest factor for any number N must be <= N/2

// So yes take N/2, and check all integers smaller or equal to N/2. So for 11 you would check all integers smaller than 5.5, i.e. 1, 2, 3, 4 and 5.


#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n){
    if(n == 0 || n == 1) return 0;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n = 17;

    if(checkPrime(n)){
        cout<<"Prime Number";
    }
    else cout<<"Not a Prime Number.";
    return 0;
}