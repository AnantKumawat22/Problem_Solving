vector<vector<int> > Solution::solve(vector<int> &A, int B, int C) {
    vector<vector<int>> vect(B, vector<int>(C, 0));
    int rst = 0, rend = B - 1, cst = 0, cend = C - 1, i, k = 0;
    
    while(rst <= rend && cst <= cend){
        for(i = cst; i <= cend; i++) vect[rst][i] = A[k++];
        rst++;
        if(rst > rend || cst > cend) break;
        for(i = rst; i <= rend; i++) vect[i][cend] = A[k++];
        cend--;
        
        if(rst > rend || cst > cend) break;
        for(i = cend; i >= cst; i--) vect[rend][i] = A[k++];
        rend--;
        if(rst > rend || cst > cend) break;
        for(i = rend; i >= rst; i--) vect[i][cst] = A[k++];
        cst++;
    }
    return vect;
}