
// Recursive Solution
class Solution {
public:
    void solvesubsets(vector<int>&nums, vector<vector<int>> &ans, int ind, vector<int> vect){

        if(ind == nums.size()){
            ans.push_back(vect);
            return;
        }
        // Exclude element.
        solvesubsets(nums, ans, ind+1, vect);

        // Include element.
        vect.push_back(nums[ind]);
        solvesubsets(nums, ans, ind+1, vect);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vect;
        solvesubsets(nums, ans, 0, vect);
        return ans;
    }
};