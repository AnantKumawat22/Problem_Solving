
// LeetCode Solution Link:- https://leetcode.com/problems/power-of-two/solutions/1788216/c-100-beats-bit-manipulation-time-o-1-space-o-1-231-power-of-two/

// Time Complexity: O(1)
// Space Complexity: O(1)

// Logic:- 
// 1. We need to check if the number is power of 2 or not, for that the first thing came in our mind is:-
// ... 2^4 2^3 2^2 2^1 2^0 and we know using bitwise operator makes fast execution. So,
// 2. Let see the binary of power of 2, 4, 8, 16...
//    2-> 10, 4-> 100, 8-> 1000, 16-> 10000
// 3. Now we know, we can use bitwise operators to solve this problem fast.
// 4. we can see the pattern in all binary of power of 2.
// 5. we know if the number n is in power of 2 then its previous number must have all 1's in its binary representation.
// Ex. 8 -> 1 0 0 0
//     7 -> 0 1 1 1 
//        -----------  ===> AND operator
//          0 0 0 0
// 6. If n <= 0 then we have to return false else we have to check n & (n-1) == 0. if it is 0, it means the number is in power of 2 else not.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n <= 0 ? false : (n & (n-1)) == 0;
    }
};

// Alter method - built in method.

// __builtin_popcount(n) will return the number of set bits in the number.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int ans = __builtin_popcount(n);
        return ans > 1 ? false : true;
    }
};