#include <iostream>
using namespace std;

int main() {
	int T, A, B, X, Y;
	float alice, bob;
	cin>>T;
	while(T--){
	    cin>>A>>B>>X>>Y;
	    alice = (float)A/X;
	    bob = (float)B/Y;
	    if(alice > bob) cout<<"ALICE"<<endl;
	    else if(alice < bob) cout<<"BOB"<<endl;
	    else cout<<"EQUAL"<<endl;
	}
	
	return 0;
}
