vector<int> rotateLeft(int d, vector<int> arr)
{
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + arr.size() - d);
    reverse(arr.begin() + arr.size() - d, arr.end());
    return arr;
}


