// Logic :-
// Simply search element by binary search if it get then return mid or else return low.
// Q. Why low? why not high?
// If Element is not present in array then eventually low and high will equal at some point. Then if target value is greater than nums[low] then the low will increased as (mid+1) and that will be the correct position of target element(i.e low). 
// And if the target value is smaller than nums[low] then the value will insert at the low itself because array is sorted.

// Leetcode Solution Link :- https://leetcode.com/problems/search-insert-position/solutions/1805643/c-time-o-logn-space-o-1-35-search-insert-position/

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while(low <= high){
        int mid = high - ((high - low) / 2);
        if(nums[mid] == target) return mid;
        else if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

// Using lower_bound function

int searchInsert(vector<int>& nums, int target) {
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}