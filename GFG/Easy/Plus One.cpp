vector<int> increment(vector<int> arr ,int N) {
    int carry = 1;
    
    for(int i = N - 1; i >= 0; i--){
        int X = arr[i];
        arr[i] = (arr[i] + carry) % 10;
        carry = (X + carry) / 10;
    }
    if(carry != 0) arr.insert(arr.begin(), carry);
    return arr;
}