// LeetCode Solution Link:- https://leetcode.com/problems/complement-of-base-10-integer/solutions/3564754/c-100-beats-full-explanation-1009-complement-of-base-10-integer/

// Time:- O(ceil(log(n)))
// Time Logic:- 
// we are running the while loop for the number of bit of n. 
// n = 2^x ==> (x = number of bits).
// Ex. n = 10, binary -> 1 0 1 0 (4 bits)
// 10 = 2^x
// log2(10) = x
// ceil(log2(10)) = x ===> (log2(10) == 3.322, but we represent 10 in 4 bits so take ceil value.)

// Space:- O(1)

// Logic:-
// 1. We know that we need to complement. For that we need to change 0 to 1 and 1 to 0.
// 2. We need to think, what can we use here from our bitwise operators (i.e &, |, ^, ~).
// 3. Suppose we have,
// Ex. n = 10, binary-> 1010
//     1 0 1 0
//     x x x x
//   -----------
//     0 1 0 1
// 4. Think if we xor the n with 1111 (mask), we will get our desired answer. Like, 
//     1 0 1 0
//     1 1 1 1   ==> mask
//   ----------- ==> XOR
//     0 1 0 1
// 5. Now we just need to make mask, for that we can take 1 and do (left shit + add one) to make it 1111. Like, 
// mask -> 0 0 0 1 
//         0 0 1 0 ==> left shift (mask << 1)
//         0 0 1 1 ==> add 1 (mask + 1)
// we know that if we do & of n with 1111 then we will get that n itself.
// so we will do the 5th step until ((mask & n) != n).
// At last we can able to make 1111 (mask) and now return (mask ^ n), see 4th step. 

class Solution {
public:
    int bitwiseComplement(int n) {
        int mask = 1;
        
        while((mask & n) != n){
            mask = mask << 1;
            mask += 1;
        }
        return mask ^ n;
    }
};