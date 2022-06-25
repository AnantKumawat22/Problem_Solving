int beautifulDays(int i, int j, int k){
    int bd = 0, rev;
    string str;

    while (i <= j){
        str = to_string(i);
        reverse(str.begin(), str.end());
        rev = stoi(str);
        if (abs(i - rev) % k == 0) bd++;
        i++;
    }
    return bd;
}