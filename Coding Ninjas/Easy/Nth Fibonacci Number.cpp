#include<bits/stdc++.h>
using namespace std;

// Recursion
int fib(int n){
    if(n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    cin>>n;
    
    cout<<fib(n);
    return 0; 
}

// -----------------x-------------------x----------------------

// Dp -> Top-Down Approach (Recursion + memoisation)
int fib(int n, vector<int> &dp){
    if(n <= 1) return n;
    
    if(dp[n] != -1) return dp[n];
    dp[n] =  fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main(){
    int n;
    vector<int> dp(n + 1, -1);
    cin>>n;
    
    cout<<fib(n, dp);
    return 0; 
}

// -----------------x-------------------x----------------------

// Dp -> Bottom-Up Approach (Tabulation)
void fib(int n){
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[n];
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0; 
}

// -----------------x-------------------x----------------------

// Optimal Solution -> Space Complexity = O(1)
void fib(int n){
    int first = 0, second = 1;
    
    for(int i = 2; i <= n; i++){
        int third = first + second;
        first = second;
        second = third;
    }
    cout<<second;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0; 
}