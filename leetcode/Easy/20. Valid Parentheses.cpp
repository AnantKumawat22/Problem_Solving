// Logic :-
// 1. Simply store the any opening bracket in stack and if we get any closing bracket then we will check if the closing bracket and the stack's top most element are of same type, if they are then remove stack's top element assuming we got a pair of bracket. 

// 2. At last stack should be empty because it means we have got all pairs of bracket.


// Leetcode Solution Link:- https://leetcode.com/problems/valid-parentheses/post-solution/1856882/

class Solution {
public:
    char checkMatch(char A, char B){
        if(A == '(' && B == ')') return 1;
        else if(A == '[' && B == ']') return 1;
        else if(A == '{' && B == '}') return 1;
        return 0;
    }
    bool isValid(string s) {
        stack<char> st;

        for(auto x: s){
            if(x == '(' || x == '[' || x == '{') st.push(x);
            else if(!st.empty() && checkMatch(st.top(), x)) st.pop();
            else return false;
        }
        return st.empty();
    }
};