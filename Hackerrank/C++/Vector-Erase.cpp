int main() {
    int N, x, a, b;
    cin>>N;
    vector<int> vect(N);
    
    for(int i = 0; i < N; i++)cin>>vect[i];
    cin>>x;
    cin>>a>>b;
    vect.erase(vect.begin() + (x-1));
    vect.erase(vect.begin()+(a-1), vect.begin()+(b-1));
    cout<<vect.size()<<endl;
    for(int i = 0; i < vect.size(); i++)cout<<vect[i]<<" ";
    return 0;
}