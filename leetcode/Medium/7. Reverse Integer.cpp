// LeetCode Solution Link :- https://leetcode.com/problems/reverse-integer/solutions/1780073/c-7-reverse-integer-100-beats-time-o-log10x-space-o-1/

// Logic :-
// 1. To reverse an integer we have to get its each digits. Here is the way:-
   
// Ex. x = 123
//    If we take modulo of x with 10, then we can get the last digit. 
//    (x % 10 = 3). // remainder. 

//    Now divide x by 10 to get rest of the number.
//    (x / 10 = 12) 

// 2. By this we can get each digits of the number and we can simply combine these (i.e remainder) digits to form a reverse number and store it in a variable, here it is ans.

// 3. But as per question if we do (ans * 10) then probably it will cross the integer range. so for that we will check first that it is inside the range of integer or not by:-
// (INT_MAX / 10 < ans) and (INT_MIN / 10) > ans), if it is outside range return 0 or else return ans.

class Solution {
public:
    int reverse(int x) {
        int ans = 0, temp = x; 
        
        while(temp != 0){
            if((INT_MAX/10 < ans) || (INT_MIN/10) > ans) return 0;
            
            int rem = (temp % 10) > 0 ? (temp % 10) : -(temp % 10) ;
            ans = ans * 10 + rem;
            temp /= 10;
        }
        return x > 0 ? ans : -(ans);
    }
};