#include <iostream>
using namespace std;

int main() {
	int T, first, second;
	cin>>T;
	while(T--){
	    cin>>first>>second;
	    if(first > second) cout<<"SECOND"<<endl;
	    else if(first < second) cout<<"FIRST"<<endl;
	    else cout<<"ANY"<<endl;
	}
	return 0;
}