int MissingNumber(vector<int> &array, int n)
{
    int sum = 0, tsum = (n * (n + 1)) / 2;
    for (int i = 0; i < array.size(); i++)
    {
        sum += array[i];
    }
    return tsum - sum;
}