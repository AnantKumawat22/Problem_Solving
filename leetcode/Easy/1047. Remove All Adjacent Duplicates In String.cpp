// LeetCode Solution Link :- 

// Optimised Approach :-

class Solution {
public:
    string removeDuplicates(string s) {
        string str = "";

        for(int i = 0; s[i]; i++){
            if(str != "" && str.back() == s[i]) str.pop_back();
            else str.push_back(s[i]);
        }
        return str;
    }
};