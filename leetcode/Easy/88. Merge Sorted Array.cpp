// Logic :-
// nums1 = [1, 2, 3, 0, 0, 0] 
//                |        |
//                i      last

// nums2 = [2, 5, 7]
//                |
//                j
// Compare `i and `j` elements of both array and put the greater element on `last` index. Like this go backward in both array, compare and put on `last` index.

// LeetCode Solution Link :- https://leetcode.com/problems/merge-sorted-array/solutions/2288820/c-time-o-m-n-space-o-1-88-merge-sorted-array/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1, j = n-1, last = m+n-1;

    while(j >= 0){
        if(i >= 0){
            if(nums1[i] <= nums2[j]) nums1[last--] = nums2[j--];
            else if(nums1[i] > nums2[j]) nums1[last--] = nums1[i--];
        } 
        else nums1[last--] = nums2[j--];
    }
}