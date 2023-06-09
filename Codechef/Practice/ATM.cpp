#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int X;
    float Y;
    cin>>X>>Y;
    if((X % 5 == 0) && (X <= Y - 0.5)){
        cout<<fixed<<setprecision(2)<<(Y - (X + 0.50))<<endl;
    }
    else cout<<fixed<<setprecision(2)<<Y<<endl;
	return 0;
}