int equilibriumPoint(long long a[], int n) {
    int i = 0, j = n - 1, sumi = a[0], sumj = a[n - 1];
    
    if(n == 1) return 1;
    else if(n == 2) return -1;
    
    while((i + 1) != (j - 1)){
        if(sumi < sumj) sumi += a[++i];
        else sumj += a[--j];
    }
    
    if(sumi == sumj) return (i + 2);
    return -1;
}