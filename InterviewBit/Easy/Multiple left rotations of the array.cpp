void reversearray(vector<int>&vect, int start, int end){
    while(start < end){
        int temp = vect[start];
        vect[start++] = vect[end];
        vect[end--] = temp;
    }
}

vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    int n = A.size();
    vector<int> vect;
    vector<vector<int>> ans;
    
    for(int i = 0; i < B.size(); i++){
        vect = A;
        reversearray(vect, 0, n-1);
        reversearray(vect, 0, n - (B[i] % n) - 1);
        reversearray(vect, n - (B[i] % n), n-1);
        
        ans.push_back(vect);
        vect.clear();
    }
    return ans;
}
