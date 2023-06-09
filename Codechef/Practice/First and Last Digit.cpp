int main() {
	long long T, N, r, temp;
	cin>>T;
	while(T--){
	    cin>>N;
	    temp = N;
	    while(N > 0){
	        r = N % 10;
	        N /= 10;
	    }
	    cout<<(r + (temp%10))<<endl;
	}
	return 0;
}