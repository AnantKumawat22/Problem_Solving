// Logic :- 
// Simply traverse until we get different number from val and than place it on (first)th place, then increase first++. As we are only tracking numbers other than val.

// Leetcode Solution Link:- https://leetcode.com/problems/remove-element/solutions/1935068/c-time-o-n-space-o-1-27-remove-element/

int removeElement(vector<int>& nums, int val) {
    int first = 0;
    for(int second = 0; second < nums.size(); second++){
        if(nums[second] != val) nums[first++] = nums[second];
    }
    return first;
}