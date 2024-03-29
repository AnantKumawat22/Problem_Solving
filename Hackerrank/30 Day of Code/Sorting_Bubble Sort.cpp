void countSwaps(vector<int> a) {
    int swap = 0;
    
    for(int i = 0; i < a.size(); i++){
        int flag = 0;
        for(int j = 1; j < a.size() - i; j++){
            if(a[j] < a[j - 1]){
                swap++;
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
                flag = 1;
            }   
        }
        if(!flag) break;
    }
    cout<<"Array is sorted in "<<swap<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[a.size() - 1]<<endl;
}