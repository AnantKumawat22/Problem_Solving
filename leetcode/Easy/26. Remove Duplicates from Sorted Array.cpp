// Logic :-
// Simply traverse until we get different number and then place it on (back++)th place, as we are only tracking unique numbers.

// Leetcode Solution Link:- https://leetcode.com/problems/remove-duplicates-from-sorted-array/solutions/1805652/c-time-o-n-space-o-1-26-remove-duplicates-from-sorted-array/

int removeDuplicates(vector<int>& nums) {
    int back = 0;
    for(int front = 1; front < nums.size(); front++){
        if(nums[back] != nums[front]) nums[++back] = nums[front];
    }
    return (back + 1);
}