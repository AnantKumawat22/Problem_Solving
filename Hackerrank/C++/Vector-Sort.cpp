int main() {
    int N;
    cin>>N;
    vector<int> vect(N);
    
    for(int i = 0; i < N; i++)cin>>vect[i];
    sort(vect.begin(), vect.end());
    for(int i = 0; i < N; i++)cout<<vect[i]<<" ";
    return 0;
}