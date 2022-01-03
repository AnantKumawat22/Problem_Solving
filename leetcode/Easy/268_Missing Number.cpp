int missingNumber(vector<int> &nums)
{
    int sumofi = 0, sumofele = 0;

    for (int i = 1; i <= nums.size(); i++)
    {
        sumofi += i;
        sumofele += nums[i - 1];
    }
    return sumofi - sumofele;
}