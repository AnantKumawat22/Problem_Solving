int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    vector<int> v1(h1), v2(h2), v3(h3);
    int n1 = 0, n2 = 0, n3 = 0;
    
    n1 = accumulate(h1.begin(), h1.end(), 0);
    n2 = accumulate(h2.begin(), h2.end(), 0);
    n3 = accumulate(h3.begin(), h3.end(), 0);

    while(n1 && n2 && n3){
        int lar = min(n1, min(n2, n3));
        while(n1 > lar){ n1 -= v1[0]; v1.erase(v1.begin()); }
        while(n2 > lar){ n2 -= v2[0]; v2.erase(v2.begin()); }
        while(n3 > lar){ n3 -= v3[0]; v3.erase(v3.begin()); }
        if(n1 == n2 && n2 == n3) return n1;
    }
    return 0;
}