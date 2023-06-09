// Logic :-
// Point the last character of string and start traversing backwards. When we get a character other than space(" ") then start count until we get the space(" ") character again or will reach at 0th position. return count.

// Leetcode Solution Link:- https://leetcode.com/problems/length-of-last-word/solutions/1803704/c-time-o-n-space-o-1-58-length-of-last-word/?orderBy=most_votes

int lengthOfLastWord(string s) {
    int count = 0;

    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] != ' ') count++;
        else if(count > 0) return count;
    }
    return count;
}

// Using istringstream

int lengthOfLastWord(string s) {
    istringstream wordStream(s);
    string lastWord;
    while(wordStream) wordStream >> lastWord;
    return lastWord.size();
}

// istringstream GFG Article :- https://www.geeksforgeeks.org/processing-strings-using-stdistringstream/