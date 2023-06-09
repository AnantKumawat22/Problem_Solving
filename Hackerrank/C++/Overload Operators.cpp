Complex operator +(Complex &c1, Complex &c2){
    Complex c;
    c.a = c1.a + c2.a;
    c.b = c1.b + c2.b;
    return c;
}

ostream &operator <<(ostream &out, Complex &c1){
    out<<c1.a<<"+i"<<c1.b;
    return out;
}