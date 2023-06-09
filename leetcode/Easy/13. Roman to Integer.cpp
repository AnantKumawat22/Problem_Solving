// Logic:- 
// 1. The basic idea is while traversing string, when we get same roman letters then we will sum its corresponding numbers and if the next roman number is less then the current roman number then also we will continue to add it in sum variable.
// 2. But when the current roman number is less then its next roman number then we will add the subtraction of (next-current) roman number and jump the i by 2. There is an edge case when the i reach last element than we have to handle this case sperately, because s[i+1] reach out of string. 


// Leetcode Solution Link:- https://leetcode.com/problems/roman-to-integer/solutions/1856866/c-time-o-n-space-o-1-13-roman-to-integer/

int romanToInt(string s) {
    unordered_map<char, int> umap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
                                    {'C', 100}, {'D', 500}, {'M', 1000}};
    
    int sum = 0;
    for(int i = 0; s[i]; i++){
        if(umap[s[i]] >= umap[s[i + 1]]){
            sum += umap[s[i]];
            if(!s[i+1]) return sum;
        } 
        else{
            sum += (umap[s[i+1]] - umap[s[i]]);
            i++;
        }
    }
    return sum;
}