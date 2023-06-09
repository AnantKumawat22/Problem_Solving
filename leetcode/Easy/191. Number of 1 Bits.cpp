// Leetcode Solution Link:- https://leetcode.com/problems/number-of-1-bits/solutions/3547448/c-191-number-of-1-bits/


// Approach 1 [Fast]:
// Logic: (n & (n-1)) will remove the Lowest Set Bit from number n.

int hammingWeight(uint32_t n) {
    int count = 0;

    while(n > 0){
        n = n & (n - 1); 
        count++;
    }
    return count;
}

// Approach 2:

// Logic:- 
// 1. Check the LSB (Least Significant Bit) is one or not by doing & with 1 of that number. If it is 1 then increment the count.
// 2. After that, shift all bits towards right by 1.

int hammingWeight(uint32_t n) {
    int count = 0;

    while(n > 0){
        if(n & 1 > 0) count++;
        n = n >> 1;
    }
    return count;
}

// Approach 3:
// Logic: Divide and check 1's. using logic like decimal to binary conversion.

int hammingWeight(uint32_t n) {
    int count = 0;

    while(n > 0){
        if(n % 2 == 1) count++;
        n /= 2; 
    }
    return count;
}