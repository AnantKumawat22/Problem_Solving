#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("sitin.txt", "r", stdin);
    freopen("sitout.txt", "w", stdout);
    unsigned int r, s, total_tickets;
    cin >> r >> s;
    cin >> total_tickets;
    if(total_tickets <= (r * s))
        cout << total_tickets << " 0" << endl;
    else
        cout << (r * s) << " " << (total_tickets - (r * s)) << endl;
    return 0;
}