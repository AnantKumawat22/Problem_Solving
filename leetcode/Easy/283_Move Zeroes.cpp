int count = 0, temp;
for (int i = 0; i < nums.size(); i++)
{
    if (nums[i] != 0)
    {
        temp = nums[i];
        nums[i] = nums[count];
        nums[count] = temp;
        count++;
    }
}