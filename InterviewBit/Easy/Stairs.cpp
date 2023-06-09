
// Optimal Solution -> Space:- O(1) | Time:- O(N)
int Solution::climbStairs(int A) {
    int first = 1, second = 2;
    if(A == 1) return 1;

    for(int i = 2; i < A; i++){
        int third = first + second;
        first = second;
        second = third;
    }
    return second;
}

// DP -> Top-Down Approach -> Recursive + Memoisation | Space:- O(N) | Time:- O(N)
int solve(vector<int>& dp, int n){
    if(n <= 1) return 1;
    
    if(dp[n] != -1) return dp[n];
    dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
    return dp[n];
}

int Solution::climbStairs(int A) {
    vector<int> dp(A + 1, -1);
    return solve(dp, A);  
}

// DP -> Bottom-Up Approach -> Tabulation Approach | Space:- O(N) | Time:- O(N)
int Solution::climbStairs(int A) {
    vector<int> dp(A + 1);
    dp[0] = dp[1] = 1;
    
    for(int i = 2; i <= A; i++){
        dp[i] = dp[i - 1] + dp[i - 2]; 
    }
    return dp[A];  
}
