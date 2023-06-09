// Logic :-
// The Simple Logic is to create a temporary vector of (i+1) size[where i tracks the row number of pascal's traingle.] and initialize all the elements to 1.
// So, at starting our pascal's traingle look like:- 
//       1
//      1 1
//     1 1 1
// Then we will change the values according to the values of pascal's traingle. 
// For that, Except first and last element we will change its all middle elements according to sum of the two numbers directly above it. By using j and i.
// We know that we can access upper elements by (i-1) and we can use j for the sum of directly above two numbers.

// LeetCode Solution Link :- https://leetcode.com/problems/pascals-triangle/solutions/1800130/c-time-o-n-2-space-o-1-118-pascal-s-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect(numRows);
        
        for(int i = 0; i < numRows; i++){
            vector<int> tempVect(i+1, 1);
            vect[i] = tempVect;

            for(int j = 0; j < (i - 1); j++){
                vect[i][j+1] = vect[i-1][j] + vect[i-1][j+1];
            }
        }
        return vect;
    }
};