#include <iostream>
using namespace std;

int main() {
	int T, X, Y;
	cin>>T;
	while(T--){
	    cin>>X>>Y;
	    cout<<(abs(X-Y))<<endl;
	}
	return 0;
}