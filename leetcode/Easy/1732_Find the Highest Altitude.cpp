int largestAltitude(vector<int> &gain)
{
    int sum = 0, min = 0;
    for (int i = 0; i < gain.size(); i++)
    {
        sum += gain[i];
        if (sum > min)
            min = sum;
    }
    return min;
}