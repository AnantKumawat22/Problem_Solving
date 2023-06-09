int main() {
	int T, A, B;
	cin>>T;
	while(T--){
	    cin>>A>>B;
	    cout<<(A > B ? B : A)<<endl;
	}
	return 0;
}