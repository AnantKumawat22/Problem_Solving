int firstElement(int n){
    int first = 1, second = 1, t;
    
    for(int i = 2; i < n; i++){
        t = second;
        second = (first + second) % 1000000007;
        first = t;
    }
    return second;
}