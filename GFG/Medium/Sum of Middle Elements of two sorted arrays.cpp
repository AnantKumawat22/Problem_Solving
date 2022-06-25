int findMidSum(int ar1[], int ar2[], int n) {
    int count = 0, f = 0, s = 0, flag = 0, sec = 0;
    
    while(f <= n && s <= n){
        if(ar1[f] < ar2[s]){ f++; count++; flag = 1; }
        else{ s++; count++; flag = 2; }
        
        if(count == n){
            if(f >= n) sec = ar2[s];
            else if(s >= n) sec = ar1[f];
            else sec = (ar1[f] < ar2[s]) ? ar1[f] : ar2[s]; 
            
            if(flag == 1) return (ar1[f - 1] + sec);
            else if(flag == 2) return (ar2[s - 1] + sec);
        }
    }
    return -1;
}