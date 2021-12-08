int i = 0;
sort(nums.begin(), nums.end());
for (i = 0; i < nums.size() - 1; i += 2)
{
    if (nums[i] != nums[i + 1])
    {
        return nums[i];
    }
}
if (i == nums.size() - 1)
    return nums[i];
return nums[0];