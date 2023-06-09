int isMatching(char A, char B){
    if(A == '(' && B == ')') return 1;
    else if (A == '{' && B == '}') return 1;    
    else if (A == '[' && B == ']') return 1;
    return 0;
}

bool isValidParenthesis(string expression){
    stack<char> st;

    for(int i = 0; expression[i]; i++){
        if(expression[i] == '(' || expression[i] == '[' || expression[i] == '{'){
            st.push(expression[i]);
        }
        else{
            if(!st.empty() && isMatching(st.top(), expression[i])){
                st.pop();
            }
            else return false;
        }
    }    
    if(st.empty()) return true;
    return false;
}