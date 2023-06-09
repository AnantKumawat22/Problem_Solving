// LeetCode Solution Link :- https://leetcode.com/problems/string-compression/solutions/3558894/c-100-beats-time-o-n-space-o-1-443-string-compression/

// Time Complexity:- O(N)
// Space Complexity:- O(1)

// Approach :-
// 1. Point ind and i variable at 0th index.
// 2. First we will traverse the vector until we get different element as of thier previous element using j. like: [a, a, b] (stop j at b).
// 3. Place the ith element at ind index. so that our next required element replace the recurrence of previous element. Ex.
//    a 2 a a b b b c           a 2 b a b b b c
//      |     |     |     -->       |   |     |
//     ind    i     j              ind  i     j

// So it need to be, chars[ind++] = chars[i] to place b at correct place.
// 4. Count the number of occurrences of element by (j-i).
// 5. If the count is less than 1 then no need to wirte 1 after that character.
// 6. If the count > 1, it can be (2, 10, 100...). So we need to convert it into string and insert its each digits in the chars vector.

class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 1, n = chars.size(), ind = 0, i = 0, count = 0;

        while(1){
            while(j < n && chars[j - 1] == chars[j]) j++;
            chars[ind++] = chars[i];

            count = j-i;
            if(count > 1){
                string strCount = to_string(count);
                for(auto ch: strCount){
                    chars[ind++] = ch;
                }
            }
            if(j >= n) break;
            i = j++;
        }
        return ind;
    }
};