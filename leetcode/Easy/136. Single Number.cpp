
// Leetcode Solution Link:- 
// https://leetcode.com/problems/single-number/solutions/2817413/c-bit-manipulation-xor-time-o-n-space-o-1-136-single-number/

int singleNumber(vector<int>& nums) {
    int ans = 0; // 0 bcz, any number xor with 0 result that number itself.
    for(auto x: nums){
        // --> A^A = 0
        // --> A^B^A = B
        // XOR of a number with itself results Zero, so 2 repeating numbers will get zero and we will get the single number.
        ans ^= x; 
    }
    return ans;
}