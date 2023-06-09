// Leetcode Solution Link:- 


// Optimise solution.


// Brute force solution.
class Solution {
public:
    bool solve(int n, long int num){
        // Base condition
        if(num > n) return false;
        if(num == n) return true;
        
        return solve(n, num*3);
    }

    bool isPowerOfThree(int n) {
        if(n == 1) return true;
        return solve(n, 3);
    }
};