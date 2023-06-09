vector<int> Solution::maxset(vector<int> &A) {
    long ind = 0, t = 0, sum = 0, maxsum = 0, k = 0, i, temp = 0;
    vector<int> vect;
    
    for(i = 0; i < A.size(); i++){
        if(A[i] < 0){
            if(sum > maxsum){
                maxsum = sum; ind = t; k = temp;
            }
            else if(sum == maxsum && temp > k){ k = temp; ind = t; }
            sum = 0; t = i + 1; temp = 0;
        }
        else{ sum += A[i]; temp++; }
    }
    
    if(sum > maxsum) ind = t;
    else if(sum == maxsum && temp > k){ k = temp; ind = t; }
    
    for(i = ind; (i < A.size() && A[i] >= 0); i++){
        vect.push_back(A[i]);
    }
    return vect;
}