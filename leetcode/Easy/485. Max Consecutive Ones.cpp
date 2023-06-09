int findMaxConsecutiveOnes(vector<int> &nums)
{
    int prevmax, max, k;
    prevmax = max = k = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[k] != nums[i])
        {
            if (prevmax < max)
                prevmax = max;
            k = i--;
            max = 0;
        }
        else if (nums[i] == 1)
            max++;
    }
    if (prevmax < max)
        return max;
    return prevmax;
}