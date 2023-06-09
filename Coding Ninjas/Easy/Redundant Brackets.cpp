#include <bits/stdc++.h> 

bool findRedundantBrackets(string &s){
    stack<char> st;

    for(int i=0; s[i]; i++){
        if(s[i] == '(' || s[i] =='+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
              st.push(s[i]);
        } 
        else if (s[i] == ')'){
            if(st.top() == '(') return true;

            while(st.top() != '('){
                st.pop();
            }
            st.pop();
        }
    }    
    return false;
}