int max = (nums[0] - 1) * (nums[1] - 1);

for (int i = 0; i < nums.size(); i++)
{
    for (int j = i + 1; j < nums.size(); j++)
    {
        if ((nums[i] - 1) * (nums[j] - 1) > max)
            max = (nums[i] - 1) * (nums[j] - 1);
    }
}
return max;