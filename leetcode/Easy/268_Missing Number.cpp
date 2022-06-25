int missingNumber(vector<int> &nums)
{
    int n = nums.size(), sumele = 0, total;
    total = n * (n + 1) / 2;

    for (int i = 0; i < n; i++)
        sumele += nums[i];
    return total - sumele;
}