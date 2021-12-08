int low, mid, high;
low = 0;
high = nums.size() - 1;
if (nums.size() == 1 && target == nums[0])
    return 0;

while (low < high)
{
    mid = (low + high) / 2;
    if (nums[mid] == target)
        return mid;
    else if (nums[mid] < target)
        low = mid + 1;
    else
        high = mid - 1;
}
if (target <= nums[low])
    return low;
return (low + 1);