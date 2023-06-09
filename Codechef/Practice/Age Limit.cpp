int main() {
	int T, A, X, Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y>>A;
	    if(A >= X && A < Y) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}