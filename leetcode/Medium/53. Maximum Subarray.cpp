int maxSubArray(vector<int>& nums) {
    int max = INT_MIN, currmax = 0;
    
    for(auto x: nums){
        currmax += x;
        if(currmax > max) max = currmax;
        if(currmax < 0) currmax = 0;
    }
    return max;
}