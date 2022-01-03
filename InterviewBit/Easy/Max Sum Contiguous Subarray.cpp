int Solution::maxSubArray(const vector<int> &A)
{
    int currmax = 0;
    int max = INT_MIN;

    for (int i = 0; i < A.size(); i++)
    {
        currmax += A[i];
        if (currmax > max)
            max = currmax;
        if (currmax < 0)
            currmax = 0;
    }
    return max;
}