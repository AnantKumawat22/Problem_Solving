vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> vect;
    int rst = 0, rend = A.size() - 1, cst = 0, cend = A[0].size() - 1, i;
    
    while(rst <= rend && cst <= cend){
        for(i = cst; i <= cend; i++) vect.push_back(A[rst][i]);
        rst++;
        if(rst > rend || cst > cend) break;
        for(i = rst; i <= rend; i++) vect.push_back(A[i][cend]);
        cend--;
        
        if(rst > rend || cst > cend) break;
        for(i = cend; i >= cst; i--) vect.push_back(A[rend][i]);
        rend--;
        if(rst > rend || cst > cend) break;
        for(i = rend; i >= rst; i--) vect.push_back(A[i][cst]);
        cst++;
    }
    return vect;
}