#include <bits/stdc++.h> 
#define MOD 1000000007


// Optimal Solution -> Space:- O(1) | Time:- O(N)
int countDistinctWays(int nStairs) {
    if(nStairs <= 1) return 1; 
    
    int first = 1, second = 2;
    
    for(int i = 2; i < nStairs; i++){
        int third = (first + second) % MOD;
        first = second;
        second = third;
    }
    return second;  
}

// DP -> Top-Down Approach -> Recursive + Memoisation | Space:- O(N) | Time:- O(N)
int solve(vector<int>& dp, int n){
    if(n <= 1) return 1;
    
    if(dp[n] != -1) return dp[n];
    dp[n] = (solve(dp, n - 1) + solve(dp, n - 2)) % MOD;
    return dp[n];
}

int countDistinctWays(int nStairs) {
    vector<int> dp(nStairs + 1, -1);
    return solve(dp, nStairs);    
}

// DP -> Bottom-Up Approach -> Tabulation Approach | Space:- O(N) | Time:- O(N)
#include <bits/stdc++.h> 
#define MOD 1000000007

int solve(int n){
    vector<int> dp(n + 1);
    dp[0] = dp[1] = 1;
    
    for(int i = 2; i <= n; i++){
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD; 
    }
    return dp[n];
}

int countDistinctWays(int nStairs) {
    return solve(nStairs);    
}