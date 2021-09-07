int alice = 0;
    int bob = 0;
    vector<int> vect;
    
    for(int i = 0; i < 3; i++){
        if(a[i] > b[i]){ alice++;}
        else if(a[i] < b[i]){ bob++; }
    }
vect.push_back(alice);
vect.push_back(bob);
return vect;