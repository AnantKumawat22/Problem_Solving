// Logic :- 
// 1. Brute Force Approach :- we compare first string with all the remaining strings and we will store each character until its matching and if we get any unmatched character then we will compare the next string of strs with our stored string because it store the string which is common in all previous strings, till now. In Worst case it will be O(N*M).[M: length of single string in strs].

// 2. Optimised Approach :- The logic is to sort the strs vector because if we sort it then the first string and last string is most different string. Now we will compare these both string and store it in a new string. In Worst case it will be O(NlogN + M).[M: length of single string in strs].

// Leetcode Solution Link:- https://leetcode.com/problems/longest-common-prefix/solutions/1924309/c-14-longest-common-prefix/

// Brute Force Approach :-

string longestCommonPrefix(vector<string>& strs) {
    string newstr, str = strs[0];

    // Traversing all the strings of strs.
    for(int i = 1; i < strs.size(); i++){
        // Traversing all the characters of the string str.
        for(int j = 0; j < str.size() && j < strs[i].size(); j++){
            if(str[j] == strs[i][j]){
                newstr += str[j];
            }
            else{
                // If j is 0 means, even the first element is not matching. So return "".
                if(j == 0) return "";
                break;
            }
        }
        str = newstr;
        newstr = "";
    }
    return str;
}

// Optimised Approach :-

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    int i=0, j=0, len = strs.size();
    string str = "";
        
    for(; strs[0][i] && strs[len - 1][j]; i++, j++){
        if(strs[0][i] == strs[len - 1][j]) str += strs[0][i];
        else return str;
    }
    return str;
}