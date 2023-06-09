#include <iostream>
using namespace std;

class Apple{
    private:
        int n, m;
    public:
        void showData(){
            cout<<"n = "<<n<<" m = "<<m<<endl;
        }
        void setN(int e){ n = e; }
        void setM(int e){ m = e; }
};

class Ball{
    private:
        int x, y;
    public:
        void setData(int a, int b){
            x = a; y = b;
        }
        void showData(){
            cout<<"x = "<<x<<" y = "<<y<<endl;
        }
        operator Apple(){
            Apple a2;
            a2.setN(x);
            a2.setM(y);
            return a2;
        }
};

int main(){
    Apple a1;
    Ball b1;
    b1.setData(5, 6);
    b1.showData();
    a1 = b1;
    a1.showData();
    return 0;
}