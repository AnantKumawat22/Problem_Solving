vector<int> rotateLeft(int d, vector<int> arr)
{
    vector<int> vect;
    for (int i = d; i < arr.size(); i++)
        vect.push_back(arr[i]);
    for (int i = 0; i < d; i++)
        vect.push_back(arr[i]);
    return vect;
}