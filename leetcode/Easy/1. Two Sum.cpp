// Logic:-

// 1. The logic to solve this question is we will check if the (target - element) is present in the unordered map or not. Because if it is present, it means we have the both element which are making target number. 

// 2. If we will not get, then we will insert that element's index + 1 so that 0 will not collide with index and (target- element) number.


// Leetcode Solution Link:- 
// https://leetcode.com/problems/two-sum/solutions/2817437/c-unordered-map-time-o-n-space-o-n-1-two-sum/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> umap;
    
    for(int i = 0; i < nums.size(); i++){
        if(umap[target - nums[i]] > 0)
            return {umap[target - nums[i]] - 1, i};   
        umap[nums[i]] = i + 1;
    }
    return {};
}