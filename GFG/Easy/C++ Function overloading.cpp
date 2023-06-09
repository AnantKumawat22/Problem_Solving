#define PIE 3.14159
void volume(int s){
    cout<<(s * s * s)<<endl;
}

void volume(int r, int h){
    cout<<(PIE * r * r * h)<<endl;
}

void volume(int l, int b, int h){
    cout<<(l * b * h)<<endl;
}