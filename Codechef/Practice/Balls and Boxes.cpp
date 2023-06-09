int main() {
	int T, balls, box;
	cin>>T;
	while(T--){
	    cin>>balls>>box;
	    if(balls >= (box * (box + 1)) / 2) cout<<"YES\n";
	    else cout<<"NO"<<endl;
	}
	return 0;
}