// Logic :-
// First we have to check the cells of mat matrix and reshaped matrix[i.e r*c] is equal or not. If they are not equal then we can't reshape the matrix. So, return mat.
// After that we just have to copy all the element of mat matrix in our result matrix according to r*c [size of reshape matrix].
// We have used i, j to traverse mat matrix and x, y for our reshaped matrix.

// LeetCode Solution Link :- https://leetcode.com/problems/reshape-the-matrix/solutions/3168952/c-time-o-n-m-space-o-n-m-566-reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((mat.size()*mat[0].size()) != r*c) return mat;
        vector<vector<int>> vect(r, vector<int>(c, 0));
        int x = 0, y = 0;

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(y >= c){
                    y = 0; x++;
                } 
                vect[x][y++] = mat[i][j]; 
            }
        }
        return vect;
    }
};