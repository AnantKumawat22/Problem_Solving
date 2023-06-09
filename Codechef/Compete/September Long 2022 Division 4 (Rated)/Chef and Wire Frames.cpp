#include <iostream>
using namespace std;

int main() {
	int T, N, M, X;
	cin>>T;
	while(T--){
	    cin>>N>>M>>X;
	    cout<<((2*(N+M))*X)<<endl;
	}
	return 0;
}
