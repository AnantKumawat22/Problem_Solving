int findDigits(int n) {
    int t = n, count = 0;
    
    while(n > 0){
        if((n % 10 != 0) && (t % (n % 10)) == 0) count++;
        n /= 10;
    }
    return count;
}