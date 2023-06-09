// O(n)

int count = 0, majele;
for (int val : nums)
{
    if (count == 0)
    {
        majele = val;
    }
    if (majele == val)
        count++;
    else
        count--;
}
return majele;




// O(nlogn)

sort(nums.begin(), nums.end());
int count = 0, t = 0;
for (int i = 0; i < nums.size(); i++)
{
    if (nums[t] != nums[i])
    {
        if (count > (nums.size() / 2))
        {
            return nums[t];
        }
        count = 0;
        t = i;
        i--;
    }
    else
        count++;
}
return nums[t];