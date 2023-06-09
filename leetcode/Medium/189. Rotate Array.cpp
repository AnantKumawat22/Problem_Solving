// Logic :-
// Simply rerverse the whole array first and then reverse both [first k elements and last (n-k) elements].

// Ex. [ 1, 2, 3, 4, 5, 6, 7 ]
// --> [ 7, 6, 5, 4, 3, 2, 1 ] --> reverse Whole array.
// --> [ 5, 6, 7, 4, 3, 2, 1 ] --> reverse first k array elements.   
// --> [ 5, 6, 7, 1, 2, 3, 4 ] --> reverse first (n-k) array elements.   

// LeetCode Solution Link :- https://leetcode.com/problems/rotate-array/solutions/3214986/c-2-solutions-optimized-solution-189-rotate-array/

// Optimised Solution :-
class Solution {
private:
    void reversenums(vector<int>& nums, int start, int end){
        while(start < end){
            int temp = nums[start];
            nums[start++] = nums[end];
            nums[end--] = temp;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        k = k % n;
        reversenums(nums, 0, n-1);
        reversenums(nums, 0, k-1);
        reversenums(nums, k, n-1);
    }
};

// Logic :- 
// Use extra space and first copy the last (k%n) elements, then copy first (n-k) elements and then copy them in original array.

// Solution Using Space :-
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        k = k % n;
        
        for(int i = (n-k); i < n; i++) ans.push_back(nums[i]);
        for(int i = 0; i < (n-k); i++) ans.push_back(nums[i]);
        for(int i = 0; i < ans.size(); i++) nums[i] = ans[i];
    }
};