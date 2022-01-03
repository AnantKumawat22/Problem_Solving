int toyCount(int N, int K, vector<int> arr)
{
    int maxtoys = 0, sum = 0;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum > K)
            break;
        maxtoys++;
    }
    return maxtoys;
}