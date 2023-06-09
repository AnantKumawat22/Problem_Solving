vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> vect;
    int m = matrix.size(), n = matrix[0].size(), c_start = 0, c_end = n-1, 
        r_start = 0, r_end = m-1, i; 
    
    while(r_start <= r_end && c_start <= c_end){
        
        for(i = c_start; i <= c_end; i++) vect.push_back(matrix[r_start][i]);
        r_start++;
        if(r_start > r_end || c_start > c_end) break;
        for(i = r_start; i <= r_end; i++) vect.push_back(matrix[i][c_end]);
        c_end--;
        
        if(r_start > r_end || c_start > c_end) break;
        for(i = c_end; i >= c_start; i--) vect.push_back(matrix[r_end][i]);
        r_end--;
        if(r_start > r_end || c_start > c_end) break;
        for(i = r_end; i >= r_start; i--) vect.push_back(matrix[i][c_start]);
        c_start++;
    }
    return vect;
}